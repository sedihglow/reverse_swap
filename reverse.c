/* reverse array functions */

#include "reverse.h"


/* reverse the order an array is in, FUNCTIONAL, uses XOR */
int xor_reverse_array(int *arr, int cnt)/*#{{{*/
{
    int first; /* initialized zero, first subscript */
    int last; /* initialized cnt -1, last subscript */
    
    /* check array */
    if(!arr)
    {
        return 0;
    } /* end if */
    
    /* reverse array */
    for(first = 0, last = cnt - 1; first <= last; first++, last--)
    {
        /* if statment allows for odd length arrays */
        if(first != last)
        {
            /* uses local temp to swap */
            xor_inplace_swap(&arr[first], &arr[last]);
        } /* end if */
    } /* end for */
    
    return 1;
} /* end reverse_array #}}} */

/* reverse the order an array is in, FUNCTIONAL, uses TEMP */
int temp_reverse_array(int *arr, int cnt)/*#{{{*/
{
    int first; /* initialized zero, first subscript */
    int last; /* initialized cnt -1, last subscript */
    
    /* check array */
    if(!arr)
    {
        return 0;
    } /* end if */
    
    /* reverse array */
    for(first = 0, last = cnt - 1; first <= last; first++, last--)
    {
        /* if statment allows for odd length arrays */
        if(first != last)
        {
            /* uses local temp to swap */
            other_swap(&arr[first], &arr[last]);
        } /* end if */
    } /* end for */
    
    return 1;
} /* end reverse_array #}}} */

/* reverse the orderan array is in, BUGGED */
void bad_reverse_array(int *arr, int cnt)/*#{{{*/
{
    int first, last;

    for(first = 0, last = cnt - 1; first <= last; first++, last--)
    {
        xor_inplace_swap(&arr[first], &arr[last]);
    } /* end for */
} /* end bad_reverse_array #}}} */


/* functions used for reverse_array */

/* Used the property that a ^ a = 0 for any bit vector a */
void xor_inplace_swap(int *x, int *y)/*#{{{*/
{
    /* better way, beats useing temp afterall */    
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
                            /* 9 dereferences, 3 xor operations. Is sexy */
                            /* *y = *x ^ *y; */
                            /* *x = *x ^ *y; */
                            /* *y = *x ^ *y; */
} /* end inplace_swap #}}} */

/* functions i wrote for inplace_swap not using XOR. costs less w/ temp */
void other_swap(int *x, int *y)/*#{{{*/
{
    /* 1 temp var, 4 dereferences, temp used twice(1 = 1) */
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
} /* end other_swap #}}} */

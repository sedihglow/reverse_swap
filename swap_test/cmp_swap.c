

#include <stdio.h>

#define LOOP 10000000000

void xor_inplace_swap(register int x, register int y);
void add_subtract_swap(register int x, register int y);

int main()
{
    register int i = 0;
    register int x = 5;
    register int y = 7;

    for(i = 0; i < LOOP; ++i)
    {
        add_subtract_swap(x,y);
       // xor_inplace_swap(x,y);
    } /* end for */


    return 1;
} /* end main */


/* Used the property that a ^ a = 0 for any bit vector a */
void xor_inplace_swap(register int x, register int y)/*#{{{*/
{
    /* better way, beats useing temp afterall */    
    x ^= y;
    y ^= x;
    x ^= y;
                            /* 9 dereferences, 3 xor operations. Is sexy */
                            /* *y = *x ^ *y; */
                            /* *x = *x ^ *y; */
                            /* *y = *x ^ *y; */
} /* end inplace_swap #}}} */

/* addition subtraction way */
void add_subtract_swap(register int x, register int y)
{
    x = y - x;

    y -= x;

    x += y;

}

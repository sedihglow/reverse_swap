/* function problem

    cs201 book
    pg52
    problem 2.11
    reverse an array, code given reverses an array IF the array length is even.

    Final result sould be a fully functional array.

    write success when completely funcitonal:::_______!

    This code used code from problem 2.10's code void inplace_swap
*/

#include "reverse.h"


/* main */
int main()
{
    int i = 0;

    int x = 5;/* length of odd array */
    int y = 4;/* length of even array */
    
    int odd[] = {1,2,3,4,5};
    int even[] = {1,2,3,4};



    /* TEST BAD REVERSE ARRAY */
    /*
    bad_reverse_array(odd, x);
    bad_reverse_array(even, y);
    */
    /* END BAD REVERSE TEST */




    /* TEST FUNCTIONAL W/ XOR */
    /* 
    xor_reverse_array(odd,x);
    xor_reverse_array(even,y);
    */ 
    /* END FUNCTIONAL W/ XOR */



    /* TEST FINAL FUNCTIONAL W/ TEMP */
    temp_reverse_array(odd,x);
    temp_reverse_array(even,y);
    /*
    */
    /* END FUNCTIONAL W/ TEMP */

    /* PRINT ODD/EVEN ARRAY */
/*#{{{*/
    /* print odd array */
    printf("\n\nODD\n");
    for(i = 0; i < 5; ++i)
    {
        printf("index %d, %d\n",i, odd[i]);
    } /* end if */

    /* print even array */
    printf("\n\nEVEN\n");
    for(i = 0; i < 4; ++i)
    {
        printf("index %d, %d\n",i, even[i]);
    } /* end if */
/*#}}}*/


    return 0;
} /* end main */





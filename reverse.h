/* header file testing reverse_array functions and swap functions */


/* headers */
#include <stdio.h>

/* prototypes */
/* reverse the order an array is in */
void bad_reverse_array(int *arr, int cnt); /* bugged version */
int xor_reverse_array(int *arr, int cnt); /* functional version */
int temp_reverse_array(int *arr, int cnt); /* functional w/ other_swap */

/* swap the values stored in x and y */
void xor_inplace_swap(int *x, int *y); /* function utilized for reverse_array */
void other_swap(int *x, int *y); /* same as above with temp variable not XOR */

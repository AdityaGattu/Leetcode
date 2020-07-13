Print all possible permutations of a given string.

Permutation refers to the list of all possible ways in which a set or number of things can be arranged or ordered. 
The number of permutations possible depends on the number of elements in the list or number of characters in a string. For instance,
if there are 'n' distinct characters in an array 'n!' permutations of the string are possible.

Below are the permutations of string XYZ.

XYZ XZY YXZ YZX ZYX ZXY

 

Here is a solution that is used as a basis for backtracking. Consider the input string to be 'ABC',

NewPermutation

 

 

C/C++ implementation to print all permutations of a given string.


// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>

/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}

/* Driver program to test above functions */
int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}

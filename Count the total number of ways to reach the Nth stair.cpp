/* C++ program to count the total number of ways to reach the Nth stair */

#include<stdio.h>
int fib(int n)
{
  if(n<=1)
     return n;
  return fib(n-1)+fib(n-2);
}  
int countWays(int s)
{
   return fib(s+1);
}
int main ()
{
 int steps;
 scanf(“%d”,&steps);
 printf(“%d”, countWays(steps));
 return 0;
}

//0step can be reached in 1ways.
//1 step can be reached in 1ways.
//2 step can be reached in 2ways.
//.......

thus f(0)=f(1)=0; f(2)=f(1)+f(2);.....f(n)=f(n-1)+f(n-2);

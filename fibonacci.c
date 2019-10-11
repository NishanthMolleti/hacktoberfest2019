
// Fibonacci Series using Recursion
#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
//Tested progam
int main()
{
    int n ;
    printf("Enter n value:");
    scanf("%d",&n);                     //runtime allocation
    printf("%d", fib(n));
    getchar();
    return 0;
}

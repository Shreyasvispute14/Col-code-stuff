#include<stdio.h>
int numprint(int);
int main()
{
    int n = 1;
    printf("The natural numbers are :");
    numPrint(n);
    return 0;
}
int numPrint(int n)
{
    if(n<=50)
    { 
        printf(" %d ",n);
        numPrint(n+1);
    }
}
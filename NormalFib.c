#include <stdio.h>

int main() {
    int fib1=0,fib2=1,fib3,n;
    printf("Enter the range:");
    scanf("%d",&n);
    printf("%d %d",fib1,fib2);
    for(int i=2;i<n;i++)
    {
        fib3=fib1+fib2;
        printf(" %d",fib3);
        fib1=fib2;
        fib2=fib3;
    }
    return 0;
}

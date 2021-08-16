#include <stdio.h>

int main() {
    int n,i,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Not a prime number");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Prime number");
    }
    return 0;
}

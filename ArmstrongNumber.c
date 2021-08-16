#include <stdio.h>

int main() {
    int n,rev=0,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev+(rem*rem*rem);
        n=n/10;
    }
    if(temp==rev)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
    return 0;
}

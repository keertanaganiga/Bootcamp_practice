#include <stdio.h>

int main() {
    int n,rev,rem=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int num=n;
    while(n>0)
    {
        rev=n%10;
        rem=(rem*10)+rev;
        n=n/10;
    }
    if(num==rem)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
    return 0;
}

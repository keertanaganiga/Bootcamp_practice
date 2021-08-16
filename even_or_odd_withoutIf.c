#include <stdio.h>

int main() {
    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    r=(n%2==0) ? printf("Even") : printf("Odd");
    return 0;
}

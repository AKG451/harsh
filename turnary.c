// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int a,b;
    printf("Enter the two integers to compare:\n ");
    scanf("%d %d",&a,&b);
    a>b?printf("Success"):printf("Failure");
    return 0;
}

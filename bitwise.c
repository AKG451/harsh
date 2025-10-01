// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    printf("The no. is %d/n",n);
    int a=7, b=11;
    printf("XOR:%d\n",a^b);
    printf("AND:%d\n",a&b);
    printf("OR:%d\n",a|b);
    printf("Left Shift:%d\n",a<<2);
    printf("Right shift:%d\n",a>>2);
    return 0;
}

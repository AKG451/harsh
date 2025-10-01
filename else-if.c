// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int a,b;
    printf("Enter the two integers to compare:\n ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("Success");
    }else if(a == b){
        printf("Error");
    }else if (a<b){
        printf("Failure");
    }
    return 0;
}

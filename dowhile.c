// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int a,b,i=1;
    printf("Enter the integer till where to print(numbers smaller than 10 won't run):\n ");
    scanf("%d",&a);
do{
    if(a<10){
        printf("Number smaller than 10");
        break;
    }else{
    printf("%d\n",i);
    i++;
    }
}while(i<=a);

    
    return 0;
}

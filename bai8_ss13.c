#include <stdio.h>
void greatestCommonDivisor( int num1, int num2){// UCLN
    if(num1==num2){
        printf("UCLN la: %d \n", num1);
        return ;
    }
    while(num1!=num2){
        if( num1>num2){
            num1= num1-num2;
        }else{
            num2=num2-num1;
        }
    }
    printf("UCLN la: %d \n", num1);
}
int main(void){
    int number1=0, number2=0;
    printf("Moi ban nhap vao so nguyen thu nhat: ");
    scanf("%d", &number1);
    printf("Moi ban nhap vao so nguyen thu hai: ");
    scanf("%d", &number2);
    greatestCommonDivisor(number1, number2);
    return 0;
}

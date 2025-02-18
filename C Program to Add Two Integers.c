#include<stdio.h>
void main()
{
    int number1,number2,result;
    printf("Enter two number to add: ");
    scanf("%d %d",&number1,&number2);
    result = number1 + number2;
    printf("%d + %d = %d",number1,number2,result);
}

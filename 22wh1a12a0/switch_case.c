#include<stdio.h>
int main()
{
int num1,num2,number;
printf("enter the numbers");
scanf("%d%d",&num1,&num2);
printf("enter the operator:\n1-add\n2-sub\n3-mul\n4-div\n5-mod");
scanf("%d",&number);
switch(number){
case 1:printf("%d",num1+num2);
break;
case 2:printf("%d",num1-num2);
break;
case 3:printf("%d",num1*num2);
break;
case 4:printf("%d",num1/num2);
break;
case 5:printf("%d",num1%num2);
break;
default:printf("INVALID OPERATOR!!!");
break;
}
return 0;
}

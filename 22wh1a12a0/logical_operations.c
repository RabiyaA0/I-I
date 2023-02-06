#include<stdio.h>
void main()
{
int num1,num2,num3,num4;
printf("enter num1,num2,num3.num4");
scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
printf("%d",num1>num2&&num3<num4);
printf("%d",num1<num2&&num3>num4);
printf("%d",num1>num2||num3<num4);
printf("%d",num1<num2||num3>num4);
printf("%d",num1==num2^num3==num4);
printf("%d",!(num1>num2));
return;
}

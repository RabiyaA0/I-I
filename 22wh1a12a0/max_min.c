#include<stdio.h>
void main()
{
int a,b,c,max,min;
printf("enter the number a,b,c");
scanf("%d%d%d",&a,&b,&c);
max=(a>=b&&a>=c)?a:(b>=a&&b>=c)?b:c;
min=(a<=b&&a<=c)?a:(b<=a&&b<=c)?b:c;
printf("max is %d,min is %d",max,min);
return;
}

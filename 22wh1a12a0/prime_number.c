#include<stdio.h>
#include<math.h>
int num()
{int n,i,flag;
printf("enter the number :");
scanf("%d",&n);
flag=1;
for(i=2;i<=n/2;i++){
if(n%i==0)
flag=0;
if(flag==1)
printf("\n prime number");
else
printf("\n not prime number");
return 0;
}}

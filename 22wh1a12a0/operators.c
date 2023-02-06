#include<stdio.h>
void main()
{
int a,b;
printf("enter the operator a,b");
scanf("%d%d",&a,&b);
printf("arthematic operators(addition) is %d\n" ,a+b);
printf("relational operators(which is greater) is (true for 1 and false for  0)%d\n",a-b);
printf("logical operators(1 is for true and 0 for false) is %d\n",!a);
printf("assignment operators(1 is for true and 0 for false) is %d\n",a==b);
printf("bitwise operator %d\n",a&b);
printf("increment operator for a is %d,increment operator for b is %d\n",a++,b++);
printf("decrement operator for a is %d,decrement operator for b is %d\n",a--,b--);
printf("special operator shows size of variable taken that is for a and b is %ld and %ld\n",sizeof(a),sizeof(b));
return;
} 

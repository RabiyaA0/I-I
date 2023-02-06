#include<stdio.h>
int main(){
printf("enter the number:");
scanf("%d",&num);
if(num>0){
   if(num%2==0){
   printf("positive and even"),
   }
 else{
   printf("positive and odd");
   }
}
else{
   if(num%2==0){
   printf("negative and even");
else{
     printf("negative and odd");
     }
}
return 0;
}

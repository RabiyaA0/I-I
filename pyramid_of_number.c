#include<stdio.h>
int main(){
int rows,i,j;
printf("enter rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
for(j=0;j<i;j++){
printf("*");
}
printf("\n");
}
return 0;
}

#include<stdio.h>
void fact(int);
int main(){
int num=3;
int res=fcat(num);
printf("%d"res);
return 0;
}
void fact(int num){
if(num==o//num==1)
return1;
else
return(num*fact(num-1));
}

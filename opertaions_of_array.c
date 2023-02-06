#include<stdio.h>
void mean(int a[],int);
void sorting(int a[],int);
int main(){
int n;
printf("enter the number of elements");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
mean(a,n);
sorting(a,n);
return 0;
}
void mean(int a[],int n){
float mean=0;
for(int i=0;i<n;i++){
mean=mean+a[i];
}
printf("%f\n",(mean/n));
return;
}
void sorting(int a[],int n){
int temp=0;
for(int i=0;i<=n-1;i++){
for(int j=1;j<=n-1;j++){
if(a[j]>a[j+i]){
temp=a[j];
a[j]=a[j+1];
a[j+i]=temp;
}}}
for(int i=0;i<n;i++){
printf("%d\n",a[i]);
}
return;
}

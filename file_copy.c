#include<stdio.h>
#include<stdlib.h>
int main(){
char ch;
FILE *fp,*fp1;
fp=fopen("fir.txt","r");
fp1=fopen("sec.txt","w");
if(fp1==NULL){
printf("file cannot be created");
}
else{
while((ch=fgetc(fp1))!=EOF){
fputc(ch,fp1);
}
fclose(fp);
fclose(fp1);
fp1=fopen("sec.txt","r");
while((ch=fgetc(fp1))!=EOF){
printf("%C",ch);
}
fclose(fp1);
}
return 0;
}

#include<stdio.h>
int main(){
int n,i;
printf("input your number");
scanf("%d",&n);
for(i=1;i<=12;i++){
printf("%d×%d=%d\n",i,n,n*i);
}
return 0;
}

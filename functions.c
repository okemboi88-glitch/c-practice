#include<stdio.h>
int cube(int x){
return x*x*x;
}
int factorial (int n){
int result =1;
for(int i=1;i<=n;i++){
result=result*i;
}
return result ;
}
int main(){
int n;
printf("input your number ");
scanf("%d",&n);
printf("cube=%d\n",cube (n));
printf("factorial=%d\n", factorial(n));
return 0;
}

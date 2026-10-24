#include<stdio.h>
int main(){
int birthyear;
int currentyear=2026;
int age;
printf("input your birth year");
scanf("%d",&birthyear);
age=currentyear-birthyear;
printf("you are %d years",age);
return 0;
}

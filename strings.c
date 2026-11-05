#include<stdio.h>
#include<strings.h>
int main(){
char name[20];
printf("Enter your name:");
scanf("%19s",name);
printf("Hello,%s\n",name);
printf("Your name has %d letters\n",(int)strlen(name));
return 0;
}

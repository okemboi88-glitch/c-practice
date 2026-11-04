#include<stdio.h>
int main(){
int marks [5];
int i,sum =0,highest,lowest;
for (i=0;i<5;i++){
printf("Enter a mark %d" ,i+1);
scanf ("%d",&marks[i]);
}
highest=lowest=marks[0];
for (i=0;i<5;i++){
sum+=marks [i];
if  (marks [i]>highest)highest=marks[i];
if (marks [i]<lowest)lowest=marks[i];
}
printf("Average=%.2f\n",sum/5.0);
printf("highest=%d\n",highest);
printf("lowest=%d\n",lowest);
return 0;
}

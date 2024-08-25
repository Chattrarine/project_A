#include<stdio.h>
int main(){
float l=999,h=0,i=555;
printf("Before");
printf("\nL = %f",l);
printf("\nH = %f",h);
i = h+1;
l = i;
printf("\nAfter");
printf("\nI = %f",i);
printf("\nL = %f",l);
return 0;
}

#include<stdio.h>
int main(){
	char x[100];
	printf("input your name : ");
	scanf("%[^\n]",x);
	printf("your name : %s",x);
	return 0;
}

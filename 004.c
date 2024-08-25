#include<stdio.h>
int main(){
	
	int sum=0,n;
	while(n!=-1)
	{
		scanf("%d",&n);
		if(n==-1)
		{
			printf("stop");
		}
		else if(n%2==0)
		{
			printf("Y");
		}
		else
		{
			printf("N");
		}	
	}
	
	
	return 0;
}

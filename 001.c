#include<stdio.h>
int main(){
	int n,x[10],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(x[i]!=x[j])
			{
				printf("%d,%d\n",x[i],x[j]);
			}
		}
	}
	
	
	return 0;
}

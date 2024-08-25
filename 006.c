#include<stdio.h>
#include<string.h>
int main(){
	
	int i=0,n,count=0;
	char str[1000];
	scanf("%s",str);
	n=strlen(str);
	
	// While loop
	while(i<n)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			count = count+1;
		}
		i++;
	}
	
	/* // For loop
	for(i=0;i<n;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			count = count+1;
		}
	}
	*/
	
	if(count==n)
	{
		printf("all capital letter");	
	}
	else if(count==0)
	{
		printf("all small letter");
	}
	else
	{
		printf("Mix");
	}
	return 0;
}

#include<stdio.h>
int main(){
	char n;
	while(n!='*')
	{
		scanf("%c",&n);
		if(n=='*')
		{
			printf("stop");
		}
		else if (n>='a'&&n<='z')
		{
			if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u') // aeiou
			{
				printf("vowel small\n");
			}
			else
			{
				printf("alphabet small\n");
			}
		}
		else if(n>='A'&&n<='Z') //Capital
		{
			if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U') // AEIOU
			{
				printf("vowel big\n");
			}
			else
			{
				printf("alphabet big\n");	
			}
		}
		else if(n>='0'&&n<='9') // numeric
		{
			printf("numeric\n");	
		}
	}
	
	
	return 0;
}

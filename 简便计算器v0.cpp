#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="3+4";
	int i,sum=s[0]-'0';
	for(i=1;i<=sizeof(s);i++)
	{
		if(s[i]=='+')
		{
			sum+=s[i+1]-'0';
			i++;
		}
	} 
	printf("v1?????ǣ?%d",sum);
	return 0;
}

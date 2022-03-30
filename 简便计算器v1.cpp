#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="1+2+2+1+2+5+4-1-3+4-8";
	int i,sum=s[0]-'0';
	for(i=1;i<=sizeof(s);i++)
	{
		if(s[i]=='+')
		{
			sum+=s[i+1]-'0';
			i++;
		}
		if(s[i]=='-')
		{
			sum-=s[i+1]-'0';
			i++;
		}
	} 
	printf("v1´ð°¸ÊÇ£º%d",sum);
	return 0;
}

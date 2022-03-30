#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="2*2/4*1/1*2*3/2";
	int i;
	int sum=s[0]-'0';
	for(i=1;i<=sizeof(s);i++)
	{
		if(s[i]=='*')
		{
			sum*=s[i+1]-'0';
			i++;
		}
		if(s[i]=='/')
		{
			sum/=s[i+1]-'0';
			i++;
		}
	} 
	printf("v0´ð°¸ÊÇ£º%d",sum);
	
	return 0;
	
	
}

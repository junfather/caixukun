#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="2+2*3+2/2-1";
	int i;
	int ans=s[0]-'0';
	int sum,sub,mul,div; 
	//分别代表加减乘除 
	for(i=1;i<=sizeof(s);i++)
	{
		if(s[i] == '+')
		{
			if(s[i+2] == '*' || s[i+2] == '/')
				i++;
			//如果下一运算符为*/时，i+1 
			else
			{
				ans += s[i+1]-'0';
				i++;
			}		
		}
		//加法 
		if(s[i] == '-')
		{
			if(s[i+2]=='*' || s[i+2]=='/')
				i++;
			//如果下一运算符为*/时，i+1 
			else
			{
				ans -= s[i+1]-'0';
				i++;
			}
		}
		//减法 
		if(s[i] == '*')
		{
			mul=s[i-1]-'0' * s[i+1]-'0';
			ans+=mul;
			s[i+1]=ans;
			i++;
		}
		//乘法 
		if(s[i] == '/')
		{
			div=s[i-1]-'0' / s[i+1]-'0';
			ans+=div;
			s[i+1]=ans;
		
			i++;
		}
		//除法 
		
	} 
	printf("v2答案是：%d",ans);
	
	return 0;
	
	
}	

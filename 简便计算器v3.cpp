#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="2+2*3+2/2-1";
	int i;
	int ans=s[0]-'0';
	int sum,sub,mul,div; 
	//�ֱ����Ӽ��˳� 
	for(i=1;i<=sizeof(s);i++)
	{
		if(s[i] == '+')
		{
			if(s[i+2] == '*' && s[i+2] == '/')
				i++;
			//�����һ�����Ϊ*/ʱ��i+1 
			else
			{
				ans += s[i+1]-'0';
				i++;
			}		
		}
		//�ӷ� 
		if(s[i] == '-')
		{
			if(s[i+2]=='*'&&s[i+2]=='/')
				i++;
			//�����һ�����Ϊ*/ʱ��i+1 
			else
			{
				ans -= s[i+1]-'0';
				i++;
			}
		}
		//���� 
		if(s[i] == '*')
		{
			mul=s[i-1]-'0' * s[i+1]-'0';
			ans+=mul;
			s[i+1]=ans;
			i++;
		}
		//�˷� 
		if(s[i] == '/')
		{
			div=s[i-1]-'0' / s[i+1]-'0';
			ans+=div;
			s[i+1]=ans;
		
			i++;
		}
		//���� 
		
	} 
	printf("v2���ǣ�%d",ans);
	
	return 0;
	
	
}	

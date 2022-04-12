#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int a(char c)
{
	if(c=='+'||c=='-'||c=='*'||c=='/')
	return 1;
	else 
	return 0;
}
void m(char *p)
{
	while(*p!='\0')
	{
		*p=*(p+1);
		p++;
	}
}
void mo(float *p,float *end)
{
	while(p!=end)
	{
		*p=*(p+1);
		p++;
	}
}
int main(void)
{
	char b[]="1-2.5*4+10.2/5.1";
	char cb[100]={'\0'};
	float d[100];
	int e=0;
	for(int i=0;i<strlen(b);i++)
	{
		if(a(b[i]))
			{
					cb[e]==b[i];
					e++;
			}
	}
	int f=0;
	for(int i=0;i<strlen(b);i++)
	{
		char g[100]={'\0'};
		int h=0;
		while(!a(b[i]))
		{
			g[h]=b[i];
			i++;
			h++;
		}
		float floatv=atof(g);
	    d[f++]=floatv;
	}
	char *po=cb;
	float *pod=d;
	while(*po!='\0')
	{
		if(*po=='*')
		{
			float le=*pod;
			float ri=*(pod+1);
			float res=le*ri;
			*pod=res;
			m(po);
			mo(pod+1,&d[f--]);
		}
		else if(*po=='/')
		{
			float le=*pod;
			float ri=*(pod+1);
			float res=le/ri;
			*pod=res;
			m(po);
			mo(pod+1,&d[f--]);
		}
		else
		{
			po++;
			pod++;
		}
	}
	po=cb;
	pod=d;
	while(*po!='\0')
	{
		if(*po=='+')
		{
			float le=*pod;
			float ri=*(pod+1);
			float res=le+ri;
			*pod=res;
			m(po);
			mo(pod+1,&d[f--]);
		}
		else if(*po=='-')
		{
			float le=*pod;
			float ri=*(pod+1);
			float res=le-ri;
			*pod=res;
			m(po);
			mo(pod+1,&d[f--]);
		}
	}
	printf("这个数是:%0.2f\n",d[0]);
	return 0;
}

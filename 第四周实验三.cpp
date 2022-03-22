#include<stdio.h>
#include<string.h>
int main()
{
	printf("请输入一句英语，我将为你统计出现的次数\n");
	char s[1000];
	gets(s);
	printf("请输入一个单词，其出现个数将可查\n");
	char w[10];
	gets(w);
	strlwr(s);
	strlwr(w);
	int wlen=strlen(w);
	int slen=strlen(s);
	int cnt=0;
	for(int i=0;i<=slen-wlen;i++)
	{
		char tempw[wlen+1];
		tempw[wlen]='\0';
		for(int j=0;j<wlen;j++) tempw[j]=s[i+j];
		if(strcmp(tempw,w)==0) cnt++;
		 
	}
	printf("%d",cnt);
	return 0;
}

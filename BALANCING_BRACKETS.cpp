#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * is(char* s)
{
	int i;
	int top=-1;
	char st[100];
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='('||s[i]=='{'||s[i]=='[')
		st[++top]=s[i];
		else{
			if(top!=-1)
			{
				if(s[i]=='}'&&st[top]=='{'|| s[i]==']'&&st[top]=='['||s[i]==')'&&st[top]=='(')
				top--;
				else 
				return "no";
			}
			else return "no";
		}
	}
	if(top!=-1) return "no";
	else return "yes";
}
int main()
{
	char s[100];
	printf("enter\n");
	scanf("%s",s);
	char *res= is(s);
	printf("%s",res);
}

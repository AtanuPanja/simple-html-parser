#include<stdio.h>
#include<string.h>
void parser(char str[])
{
	int l = strlen(str);
	int i = 0;
	for(;i < l; i++) // i will store the first index of '>' symbol in the given string
	{
		char ch = str[i];
		if(ch=='>')
		break;
	}
	int j = l-1;
	for(;j >= 0; j--) // j will store the last index of '<' symbol in the given string
	{
		char ch = str[j];
		if(ch=='<')
		break;
	}
	int p = i+1;
	for(; p< j;p++) // p will store the index of the first letter after the first '>' symbol in the string (removing all leading spaces at the same time)
	{
		char ch = str[p];
		if(ch != ' ')
		break;
	}
	int q = j-1;
	for(; q>i; q--) // q will store the index of the last letter before the last '<' symbol in the string (removing all trailing spaces at the same time)
	{
		char ch = str[q];
		if(ch != ' ')
		break;
	}
	printf("The parsed string is :\n");
	for(int m=p; m<=q;m++)
	{
		printf("%c",str[m]);
	}
	printf("\n");
}
int main()
{
	char string[] = "    <h1>                 This is a heading        </h1>      ";
	parser(string);
        return 0;
}

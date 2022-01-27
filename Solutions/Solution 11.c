/*WAP to enter any string and find and print the 
total number of vowels in it.
date:27/01/2022
design by ladumor mahendar*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char line[20];
	int vowels,i;
	vowels=0;
	clrscr();
	printf("enter a line of string:");
	gets(line);
	for(i=0;i<strlen(line);i++)
	{
		if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='0'||line[i]=='u');
		{
			 vowels++;
			 printf("%c",line[i]);
		}
	}
	printf("\n number of vowels in the string:%d",vowels);
	printf("\n");
	getch();
}
/*WAP to perform the bubble short on array of 10 
numeric value
date:27/01/2022
design by ladumor mahendar */
#include<stdio.h>
#include<conio.h>
void main()
 { 
int a[10],i; 
 clrscr(); 
for(i=0;i<10;i++) 
 { 
 printf("enter a value of a element a[%d]:",i); 
 scanf("%d",&a[i]); 
 } 
 clrscr(); 
for(i=0;i<10;i++) 
 { 
 printf("\n a[%d]=%d",i,a[i]); 
 } 
 getch(); 
 }
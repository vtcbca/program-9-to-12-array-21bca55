/*WAP to perform selection short on array of
10 numeric value
date:27/01/2022
design by ladumor mahendar*/
#include <stdio.h> 
#include <conio.h>
int main() 
{ 
    int a[50],n, i, j, p, swap; 
    clrscr();
    printf("Enter number of elements:"); 
    scanf("%d", &n); 
    printf("Enter %d Numbers:\n", n); 
    for (i = 0; i < n; i++) 
    scanf("%d", &a[i]); 
    for(i = 0; i < n - 1; i++) 
    { 
        p=i; 
        for(j = i + 1; j < n; j++) 
        { 
            if (a[p] > a[j]) 
                 p=j;
        } 
        if(p != i)
        { 
            swap=a[i]; 
            a[i]=a[p];
            a[p]=swap;
        } 
    }
    printf("Sorted Array:\n");
    for(i = 0; i < n; i++)
    printf("%d\n", a[i]); 
    getch(); 
}
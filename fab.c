#include<stdio.h>
int main()
{
int i,n;
int n1=0,n2=1;
int nextterm =n1+n2;
printf("enter the number of terms:");
scanf("%d",&n);
printf("fibonacci series: %d,%d,",n1,n2);
for (i=3;i<=n;i++)
{
printf("%d,",nextterm);
n1=n2;
n2=nextterm;
nextterm=n1+n2;
}
return 0;
}

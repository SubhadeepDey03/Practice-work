#include<stdio.h>
int main()
{
int start,end,num,fact=1;
printf("Enter the starting number");
scanf("%d",&start);
printf("Enter the ending number");
scanf("%d",&end);
printf("Factorial number between %d to %d are",start,end);
for(num=start;num<=end;num++)
{
fact=fact*num;
printf("\n%d",fact);
}
return 0;
}

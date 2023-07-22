#include<stdio.h>
int main()
{
int start,end,num,temp,rem;
printf("Enter the starting number");
scanf("%d",&start);
printf("Enter the ending number");
scanf("%d",&end);
printf("Palindrome number between %d and %d are",start,end);
for(num=start;num<=end;num++)
{
int reverse=0;
temp=num;
while(temp>0)
{
rem=temp%10;
temp=temp/10;
reverse=reverse*10+rem;
}
if(num==reverse)
printf("%d ",num);
}
return 0;
}

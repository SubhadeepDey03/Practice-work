#include<stdio.h>
#include<math.h>
int main()
{
int start,end,temp,num,rem;
printf("Enter the interval");
scanf("%d%d",&start,&end);
for(num=start;num<=end;num++)
{
int z=0,sum=0;
temp=num;
while(temp>0)
{
temp=temp/10;
z++;
}
temp=num;
while(temp>0)
{
rem=temp%10;
sum+=pow(rem,z);
temp=temp/10;
}
if(sum==num)
printf("\n%d",sum);
}
return 0;
}

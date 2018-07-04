#include"stdio.h"
#include"conio.h"
int main(void)
{
int a[10],w[10],t[10],i,n,ws=0,ts=0;
float aw,at;

w[-1]=0;a[-1]=0;
printf("Enter No. of Process : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter Burst Time of process no. %d :",i+1);
scanf("%d",&a[i]);
}
printf("\n __________________________________________________________");
printf("\n|Process No. | Burst Time | Waiting Time | Turnaround Time |");
printf("\n|____________|____________|______________|_________________|");
for(i=0;i<n;i++)
{
w[i]=w[i-1]+a[i-1];
t[i]=w[i]+a[i];
ws=ws+w[i];
ts=ts+t[i];
printf("\n|%11d | %10d | %12d | %15d |",i+1,a[i],w[i],t[i]);
}
printf("\n|____________|____________|______________|_________________|");
aw=(float)ws/n;  at=(float)ts/(float)n;
printf("\nAverage Waiting Time : %f",aw);
printf("\nAverage Turnaround Time : %f",at);
return 0;
}

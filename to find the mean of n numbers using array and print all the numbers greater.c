#include<stdio.h>
int  main( )
{
int  a[25], n, i,avg ;
float  mean = 0, sum = 0 ;
printf(" Enter the Numbers of terms: ") ;
scanf("%d ",& n) ;
printf("\n Enter the Numbers : \n") ;
for(i=1;i<=n;i++)
{
scanf("%d ",& a[i]) ;
}
for(i=1;i<=n;i++)
{
sum = sum + a[i];
avg=sum/n;}
printf("\n Mean of entered Numbers are : %f ",mean) ;
return ( 0 ) ;
}

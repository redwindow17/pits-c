#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],n,i,sum=0,mean;

//Assigning array to pointer
int *ptr=arr;
clrscr();
printf("Enter the number of elements you want to use(<=10): ");
scanf("%d",&n);
printf("\nEnter %d Elements:",n);
for (i=0;i<n;i++)
scanf("%d",&arr[i]);

//sum of elements of array using pointer
for (i=0;i<n;i++)
{
sum+=*ptr;
*ptr++;
}

mean=sum/n;
//Display sum,mean and standard deviation on screen
printf("\nSum = %d\nmean = %d",sum,mean);
getch();
}

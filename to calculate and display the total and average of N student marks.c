#include<stdio.h>
#include<conio.h>
void main()
{
 int s1,s2,s3,s4,s5,t;
 float p;
 clrscr();

 printf("\n Enter marks of 5 subjects each out of 100 ");
 printf("\n\n ********************************************");

 printf("\n\n Maths = ");
 scanf("%d",&s1);

 printf("\n Science = ");
 scanf("%d",&s2);

 printf("\n English = ");
 scanf("%d",&s3);

 printf("\n History = ");
 scanf("%d",&s4);

 printf("\n Geography = ");
 scanf("%d",&s5);
 printf("\n ********************************************");

 t=s1+s2+s3+s4+s5;  //Total
 printf("\n Total marks = %d/500",t);

 p=t/5;  //Percentage
 printf("\n\n Percentage = %.2f",p);
 printf("\n ********************************************");

 getch();
}

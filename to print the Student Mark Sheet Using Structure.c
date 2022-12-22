#include <stdio.h>
struct class
{
  int number;
  char name[20];
  int mark[3];
  int total;
} s1;
void main()
{
  int i;
  printf("\n enter the Roll number, "); 
  scanf("%d", &s1.number);
  printf("\n enter the name, "); 
  scanf("%s", &s1.name);
  printf("\n Enter the marks :");
  scanf("%d", &s1.mark[0]);
  scanf("%d", &s1.mark[1]);
  scanf("%d", &s1.mark[2]);
  printf("\n ______________________");
  for(i=0; i <2; i++)
  {
     scanf("%d", &s1.mark[i]);
  } 
  s1.total = s1.mark[0] + s1.mark[1] + s1.mark[2]; 
  printf("\n Name : %s", s1.name);
  printf("\n Rollno :%d", s1.number);
  printf("\n Mark1 :%d", s1.mark[0]);
  printf("\n Mark2 :%d", s1.mark[1]); 
  printf("\n Mark3 :%d", s1.mark[2]); 
  printf("\n Total :%d", s1.total);
}

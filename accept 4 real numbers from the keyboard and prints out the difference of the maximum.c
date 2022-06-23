#include<stdio.h>
#include<conio.h>
int main()
{
    double a1, a2, a3, a4;
    double max, min;
    printf("Input four numbers: \n");
    scanf("%lf%lf%lf%lf", & a1, & a2, & a3, & a4);
    if (a1 >= a2 && a1 >= a3 && a1 >= a4)
      max = a1;
    else if (a2 >= a1 && a2 >= a3 && a2 >= a4)
      max = a2;
    else if (a3 >= a1 && a3 >= a2 && a3 >= a4)
      max = a3;
    else
      max = a4;
    if (a1 <= a2 && a1 <= a3 && a1 <= a4)
      min = a1;
    else if (a2 <= a1 && a2 <= a3 && a2 <= a4)
      min = a2;
    else if (a3 <= a1 && a3 <= a2 && a3 <= a4)
      min = a3;
    else
      min = a4;
    printf("Difference is %0.4lf\n", max - min);
    return 0;

}

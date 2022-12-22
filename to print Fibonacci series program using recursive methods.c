#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main(){ 
	int n, i; 
	printf("Enter the number of element you want in series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci series is : \n");
	for(i=0;i<n;i++) { 
		printf("%d ",fibonacci(i));
	}
	getch();
}
 
int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
} 




Output:
https://quescol.com/wp-content/uploads/2020/05/C-Program-to-print-Fibonacci-series-using-recursive-method.jpg

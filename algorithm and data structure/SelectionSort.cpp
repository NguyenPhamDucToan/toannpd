#include <stdio.h>
//#include <iostream.h>
#include <math.h>

//selection sort
int main(){
	int min, tam;
	int a[]= {1,5,2,7,6,3,4,10,8,9};
	int n = sizeof(a)/sizeof(int);
	for(int i = 0;i<n-1;i++)
	{
		printf("a[%d] = %d\n",i, a[i]);
	}
	printf("*********************\n");
	
	printf("n= %d\n", n);
//thuat toan	
	for(int i = 0;i<n-1;i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min = j;
		}
		tam = a[i];
		a[i] = a[min];
		a[min] = tam;
	}
	
	
	
	for(int i = 0;i<n;i++)
	{
		printf("a[%d] = %d\n",i, a[i]);
	}
}

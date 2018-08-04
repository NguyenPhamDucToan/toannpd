#include <stdio.h>
//#include <iostream.h>
#include <math.h>

int main(){
	int a[]= {1,5,2,7,6,3,4,10,8,9};
	int n = sizeof(a)/sizeof(int);
	int tam;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				tam = a[j];
				a[j] = a[j-1];
				a[j-1] = tam;
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		printf("a[%d] = %d\n",i, a[i]);
	}
}

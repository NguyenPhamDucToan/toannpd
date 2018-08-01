#include <stdio.h>
#include <math.h>
int main(){
	int pos;
	int x;
	int a[]= {1,5,2,7,6,3,4,10,8,9};
	int n = sizeof(a)/sizeof(int);
	
	for(int i=1;i<n;i++){
		x=a[i];
		pos = i-1;
		while((a[pos] > x) && (pos >=0)){
			a[pos+1] = a[pos];
			pos = pos-1;
		}
		a[pos+1] = x;
	}
	
	for(int i = 0;i<n;i++)
	{
		printf("a[%d] = %d\n",i, a[i]);
	}
}

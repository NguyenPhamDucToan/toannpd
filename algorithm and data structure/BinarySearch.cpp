#include <stdio.h>
//#include <iostream.h>
#include <math.h>

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int N = sizeof(a)/sizeof(int);
	int left, right, mid, x;
	left = 0;
	right = N -1;
	x=3;
	//printf("N=%d\n",N);
	while(left<=right)
	{
		mid = (left+right)/2;
		if(a[mid] == x)
		{
			printf("da tim dc %d tai vi tri %d",x,mid);
			break;
		}
		else 
		{
			if(a[mid]>x)
				right=mid-1;
			else
				left = mid +1;
		}
	}
}

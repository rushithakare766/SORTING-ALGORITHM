//Bubble sort algorithm in best case time complexity
#include<stdio.h>
int main()
{
	int a[1000],n,i,j,temp;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Enter the %d integers",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		int flag = 0;
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1 ;
			}
		}
		if(flag==0)
		break;
	}
	
	printf("Elements in ascending order :");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);	
}

//insertion sort 
#include<stdio.h>
int main()
{
	int a[1000],n,i,j,k, temp; 
	printf("Enter the elements ");
	scanf("%d",&n);
	printf("Enter the %d integers",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++){
		temp = a[i];
		j=i-1;
		while(j>=0 && temp<=a[j]){
			a[j+1]= a[j];
			j--;
		}
		a[j+1] = temp;
	}
	printf("Elements in ascending orders are ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}

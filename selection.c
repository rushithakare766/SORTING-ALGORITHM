#include<stdio.h>
int main()
{
	int a[1000],i,j,n,min,swap;
	printf("Enter the elements");
	scanf("%d",&n);
	printf("Enter the %d Integers",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		 min=i;
	for(j=i+1;j<n;j++)
	{
		if (a[min]>a[j])
			min = j;
		if(min!=i){
			swap=a[i];
			a[i]=a[min];
			a[min]=swap;
		}
	}
}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
}

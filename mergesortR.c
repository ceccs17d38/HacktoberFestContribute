#include<stdio.h>
#define max 10
int A[10],B[10];
void merge(int low,int mid,int high)
{
	int a1,a2,i;
	for(a1=low,a2=mid+1,i=low;a1<mid&&a2<=high;i++)
	{
		if(A[a1]<=A[a2])
			B[i]=A[a1++];
		else
			B[i]=A[a2++];
	}
	while(a1<=mid)
		B[i++]=A[a1++];
	while(a2<=high)
		B[i++]=A[a2++];
	for(i=low;i<=high;i++)
		A[i]=B[i];
}
void sort(int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		sort(low,mid);
		sort(mid+1,high);
	}
	return;
}
int main()
{
	int i;
	printf("Enter elements");
	for(i=0;i<max;i++)
		scanf("\t%d",&A[i]);
	sort(0,max);
	printf("\nList after sorting:");
	for(i=0;i<=max;i++)
		printf("%d",A[i]);
}




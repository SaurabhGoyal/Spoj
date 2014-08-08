#include <stdio.h>
long long int merge(int arr[],int temp[],long long int left,long long int mid,long long int right){
	long long int i,j,k,numOfInv=0;
	i=left;j=mid;k=left;
	while(i<mid&&j<=right){
		if(arr[i]<=arr[j])
			temp[k++]=arr[i++];
		else{
			temp[k++]=arr[j++];
			numOfInv+=(mid-i);
		}
	}
	while(i<mid)
		temp[k++]=arr[i++];
	while(j<=right)
		temp[k++]=arr[j++];
	for(i=left;i<=right;i++)
		arr[i]=temp[i];
		
	return numOfInv;
}
long long int mergesort(int arr[],int temp[],long long int left,long long int right){
	long long int mid,numOfInv=0;
	if(right>left){
		mid=left+(right-left)/2;
		numOfInv=mergesort(arr,temp,left,mid);
		numOfInv+=mergesort(arr,temp,mid+1,right);
		numOfInv+=merge(arr,temp,left,mid+1,right);
	}
	return numOfInv;
}
int main()
{
	long int t=0;
	scanf("%ld",&t);
	while(t--){
		long long int noe=0,i=0,noi=0;
		scanf("%lld",&noe);
		int arr[noe],temp[noe];
		for(i=0;i<noe;i++)
			scanf("%d",&arr[i]);
		noi=mergesort(arr,temp,0,noe-1);
		printf("%lld\n",noi);
	}
	return 0;
}

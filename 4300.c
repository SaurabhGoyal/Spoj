#include<stdio.h>
int main(){
	int n,i,j,count=0;
	scanf("%d",&n);
	//counting rectangles
 	for(i=1;i<=sqrt(n);i++)
        for(j=i+1;i*j<=n;j++)
            count++;

    //    counting no. of squares
    count+=sqrt(n);
    printf("%d",count);
    return 0;
}

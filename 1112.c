#include<stdio.h>
int main(){
	int num=0;
	scanf("%d",&num);
	while(num--){
		int x=0,y=0;
		scanf("%d\t%d",&x,&y);
		if(x!=y&&x-y!=2)
			printf("No Number\n");
		else{
			if(x%2==0&&y%2==0)
				printf("%d\n",x+y);
			else
				printf("%d\n",x+y-1);	
		}	
	}
	return 0;
}

#include<stdio.h>
int stringLength(char *a){
	int length=0;
	while(a[length++]);
	return length-1;
}
int main(){
	int numOfCol=1;
	while(numOfCol!=0){
		scanf("%d",&numOfCol);
		if(numOfCol==0)
	 		break;
		char cryptedMsg[200],decryptedMsg[200];
		scanf("%s",&cryptedMsg);
		int i=0,length=0;
		length=stringLength(cryptedMsg);
		for(i=0;i<numOfCol;i++){	
		   int j=0;
		   j=i;
		   printf("%c",cryptedMsg[i]);
		   j+=2*(numOfCol-i-1)+1;
		   while(j<length){
		   	if(j<length)
		    {
    			printf("%c",cryptedMsg[j]);
    			j+=(2*i+1);
		    }
   		   	if(j<length)
		   	{
	   			printf("%c",cryptedMsg[j]);
	   			j+=2*(numOfCol-i-1)+1;		   	
		    }
		   }
		}
		printf("\n");
	}                         	
	return 0;
}

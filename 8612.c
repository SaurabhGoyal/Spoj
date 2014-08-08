#include <stdio.h>
#include<string.h>
char * substring(char *str,int start_inclusive,int end_inclusive){
	if(str!=NULL){
		static char *res;
		int size=end_inclusive-start_inclusive+1;
		res=malloc(size);
		int i;
		for(i=0;i<start_inclusive;i++)
			*str++;
		for(i=0;i<size;i++)
			*(res+i)=*(str++);
		*(res+i)='\0';
		return res;
	}
}
int main()
{
	int t=0;
	char coinseq[8][3]={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
	scanf("%d",&t);
	while(t--){
		int c=0,i=0,j=0,seqnum[8];
		for(i=0;i<8;i++)
			seqnum[i]=0;
		char seq[41];
		scanf("%d%s",&c,&seq);
		for(i=1;i<39;i++)
			for(j=0;j<8;j++)
				if(strncmp(substring(&seq,i-1,i+1),coinseq[j],3)==0)
					seqnum[j]++;
		printf("%d",c);	
		for(i=0;i<8;i++)		
			printf(" %d",seqnum[i]);
		printf("\n");
	}
	return 0;
}

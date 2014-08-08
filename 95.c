#include <stdio.h>
typedef struct Stack
{
        int size;
        int top;
        int *elements;
}Stack;
Stack * createStack(int maxSize)
{
        Stack *s;
        s = (Stack *)malloc(sizeof(Stack));
        s->elements = (int *)malloc(sizeof(int)*maxSize);
        s->top = -1;
        s->size = maxSize;
        //printf("stack created with size %d and top %d\n",s->size,s->top);
        return s;
}
int pop(Stack *s)
{
        if(s->top==-1){
                printf("Stack is Empty\n");
                return -1;
        }
        else{
        	//printf("popped %d ,top %d, size %d\n",s->elements[s->top],s->top-1,s->size);
            return(s->elements[s->top--]);
        } 
}
void push(Stack *s,int element)
{
        if(s->top==s->size-1)
                printf("Stack is Full\n");
        else
                s->elements[++s->top] = element;
        //printf("pushed %d ,top %d, size %d\n",element,s->top,s->size);
}
int main()
{
	while(1){
		int nolm;
		scanf("%d",&nolm);
		if(nolm==0)
			return 0;
		Stack *sidestr=createStack(nolm);
		int o[nolm],i=0;
		for(i=0;i<nolm;i++)
			scanf("%d",&o[i]);
		int lastlv=0;
		i=0;
		while(i<nolm){
			if(o[i]==lastlv+1){
				//printf("lastlv %d,next found in array %d ",lastlv, o[i]);
				i++;
				lastlv++;
				//printf(" , lastlv %d\n",lastlv);
			}				
			else{
				if(sidestr->top>=0&&sidestr->elements[sidestr->top]==lastlv+1){
					pop(sidestr);
					lastlv++;
					//printf(" , lastlv %d\n",lastlv);
				}
				else{
					push(sidestr,o[i]);	
					i++;
				}
			}
		}
		int no=0;
		while(sidestr->top!=-1){
			if(pop(sidestr)!=lastlv+1){
				printf("no\n");
				no=1;
				break;
			}
			lastlv++;				
		}
		if(no==0)
			printf("yes\n");
	}
	return 0;
}

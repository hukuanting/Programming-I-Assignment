#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int rangelow(int,int,int);
int rangemid(int,int,int);
int rangehigh(int,int,int);

int main(int argc, char *argv[]) {
	
	int n,i,j,num;
	int score[1024];
	int range1,range2;
	int count[10000]={0};
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&score[i]);		
	}
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%d %d",&range1,&range2);		
			
		for(j=0;j<n;j++){
			count[(3*i)+0]=count[(3*i)+0]+rangelow(score[j],range1,range2);
			count[(3*i)+1]=count[(3*i)+1]+rangemid(score[j],range1,range2);
			count[(3*i)+2]=count[(3*i)+2]+rangehigh(score[j],range1,range2);
		}
	}
	for(i=0;i<num;i++){
		printf("%d %d %d\n",count[(3*i)+0],count[(3*i)+1],count[(3*i)+2]);	
	}
	
	
	
	
	
	return 0;
}
int rangelow(int score, int range1, int range2){
	int x=0;
	if(score<range1){
		x=x+1; 
	} 
	return x;
}
int rangemid(int score, int range1, int range2){
	int x=0;
	if(score>=range1&&score<range2){
		x=x+1; 
	} 
	return x;
}
int rangehigh(int score, int range1, int range2){
	int x=0;
	if(score>=range2){
		x=x+1; 
	} 
	return x;
}

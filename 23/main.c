#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N /*總共幾個*/,num/*合成需幾個*/,si[20][20]/*需要哪些*/,cnt/*幾個原始物品*/;
	int i,j;
	int a,b;
	int x;/*原始物品*/
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		scanf("%d",&num);		
		if(num==0){
			x=i;
			si[i][1]=x;
		}		
		else {
			for(j=1;j<=num;j++){
				scanf("%d",&si[i][j]);
			}
		}		
	}

		
	
	
	
	return 0;
}

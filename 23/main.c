#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N /*�`�@�X��*/,num/*�X���ݴX��*/,si[20][20]/*�ݭn����*/,cnt/*�X�ӭ�l���~*/;
	int i,j;
	int a,b;
	int x;/*��l���~*/
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

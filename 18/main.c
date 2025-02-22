#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d1,d2;
	int c[6]={0,0,0,0,0,0};
	int j;
	for(j=0;j<75;j++){
		
		scanf("%d %d",&d1,&d2);
		if(d2%2!=0){
			c[d1-1]=c[d1-1]+1;
			if(c[d1-1]>=10){
				c[d1-1]=c[d1-1]-10;
			}
		}
		else{
			c[d1-1]=c[d1-1]-1;
			if(c[d1-1]<0){
				c[d1-1]=c[d1-1]+10;
			}
		}
	}
	for(j=0;j<6;j++){
		printf("%d ",c[j]);
	}
	return 0;
}

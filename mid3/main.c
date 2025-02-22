#include <stdio.h>
#include <stdlib.h>

int classify(int);
int main(int argc, char *argv[]) {

	char c[9];
	int i,x=0;
	while(1){
		
		for(i=0;i<9;i++){
			scanf("%c",&c[i]);	
		}
		getchar();
		
		for(i=0;i<9;i++){
			x = x + classify(c[i]) * (9-i);
		}
		
		
		if(x%10!=0){
			for(i=0;i<9;i++){
				printf("%c",c[i]);	
			}
			printf(" is the imposter!!!");
			break;
		}
		else continue;
	}
	
	
	
	
	return 0;
}
int classify(int a){
	int x;
	if(a==48||a==65||a==97||a==76||a==108) x=0;
	if(a==49||a==66||a==98) x=1;
	if(a==50||a==67||a==99||a==78||a==110||a==90||a==122) x=2;
	if(a==51||a==68||a==100||a==80||a==112) x=3;
	if(a==52||a==69||a==101||a==70||a==102||a==81||a==113) x=4;
	if(a==53||a==82||a==114) x=5;
	if(a==54||a==72||a==104||a==83||a==115) x=6;
	if(a==55||a==73||a==105||a==84||a==116) x=7;
	if(a==56||a==74||a==106||a==85||a==117) x=8;
	if(a==57||a==75||a==107||a==86||a==118) x=9;
	


	
	return x;
}


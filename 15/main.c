#include <stdio.h>
#include <stdlib.h>
int classify(int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i,temp0,temp1,total;
	char c[8],c1[2];
	
	for(i=0;i<8;i++){
		scanf("%c",&c[i]);
	}
	
	for(i=0;i<8;i+=2){
		strncpy(c1, c+i, 2);
		if(c1[0]>=97&&c1[0]<=102){
			temp0=classify(c1[0])*16;
		}
		if(c1[0]>=48&&c1[0]<=57){
			temp0=classify(c1[0])*16;	
		}
		if(c1[1]>=97&&c1[1]<=102){
			temp1=classify(c1[1]);
		}
		if(c1[1]>=48&&c1[1]<=57){
			temp1=classify(c1[1]);	
		}
		total=temp0+temp1;	
		printf("%d",total);
		if(i==6) break;
		printf(".");
	}	
	
	
	
	
	
	return 0;
}

int classify(int a){
	int x;
	if(a==48) x=0;
	if(a==49) x=1;
	if(a==50) x=2;
	if(a==51) x=3;
	if(a==52) x=4;
	if(a==53) x=5;
	if(a==54) x=6;
	if(a==55) x=7;
	if(a==56) x=8;
	if(a==57) x=9;
	if(a==97) x=10;
	if(a==98) x=11;
	if(a==99) x=12;
	if(a==100) x=13;
	if(a==101) x=14;
	if(a==102) x=15;
	return x;
}





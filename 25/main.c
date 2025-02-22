#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char fight(char c1,char c2,char c3);
int main(int argc, char *argv[]) {
	
	int N;
	int i,j ;
	char c[100]={0},bs[10]={0},new_c[100];
	int r;
	int x;
	int temp[100];
	
	scanf("%d",&N);
	
	getchar();
	
	r = log(N)/log(2);
	
	for(i=0;i<N;i++){
		scanf("%c",&c[i]);
	}
	
	getchar();
	
	for(i=0;i<r;i++){
		scanf("%c",&bs[i]);
	}	
	
	for(j=0;j<r;j++){	
	
		for(i=0;i<N;i=i+2){
			
			printf("%d %c %c\n",i,c[i],c[i+1]);
			
			new_c[i/2] = fight(c[i],c[i+1],bs[j]);
			
			printf("new_c = %c\n",new_c[i/2]);
			
			c[i/2] = new_c[i/2];
			
		}
		N = N/2;
	}
	return 0;
}
char fight(char c1,char c2,char c3){
	char new_c[1];
	
	int temp;
	if(c1==c2){
		if(c3=='b'){
			new_c[0] = c2;
		}
		else  new_c[0] = c1;
	} 
	else if(c1=='s'&&c2=='p'){
		new_c[0] = c1;  temp = 1;
	}	
	else if(c1=='r'&&c2=='s'){
		new_c[0] = c1;	temp = 1;
	}	
	else if(c1=='p'&&c2=='r'){
		new_c[0] = c1;	temp = 1;
	}	
	else if(c1=='p'&&c2=='s'){
		new_c[0] = c2;  temp = 2;
	}	
	else if(c1=='s'&&c2=='r'){
		new_c[0] = c2;  temp = 2;
	}	
	else if(c1=='r'&&c2=='p'){
		new_c[0] = c2;  temp = 2;
	}   
	
	printf("¨ç¦¡¸Ì %c %c %c\n",c1,c2,new_c[0]);
	return new_c[0];
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,ans=0;
	int d1,d2,d3,d4;
	long long N; 
	int c[32], new_c[32],ans2[16];
	scanf("%lld",&N);
	scanf("%d %d %d %d",&d1,&d2,&d3,&d4);
	j = d1+d2+d3+d4;
	
	for(i=1;i<=4;i++){
		if(d1==i)   d1=24-8*(4-i);
		if(d2==i)	d2=24-8*(4-i);
		if(d3==i)	d3=24-8*(4-i);
		if(d4==i)	d4=24-8*(4-i);
	}
	
	
	for(i=31;i>=0;i=i-1){		
		c[i] = N%2;
		N = N/2;	
	}
	
	for(i=0;i<8;i++){
		new_c[i] = c[i+d1]^c[i+d2];
	}
	for(i=0;i<8;i++){
		new_c[i+8] = c[i+d2]&c[i+d3];
	}
	for(i=0;i<8;i++){
		new_c[i+16] = c[i+d3]|c[i+d1];
	}
	for(i=0;i<8;i++){
		if(c[i+d4]==0) new_c[i+24] = 1;
		if(c[i+d4]==1) new_c[i+24] = 0;
	}
	
	for(i=0;i<32;i++){		
		if(i<j) {
			c[i] = new_c[32-j+i];
		}
		if(i>=j){
			c[i] = new_c[i-j];
		} 	
	}
	for(i=0;i<16;i++){
		ans2[i] = c[i]^c[i+16];
	}
	
	
	for(i=0;i<16;i++){	
	
		if(ans2[i]==0){
			ans = ans;
		} 
		if(ans2[i]==1){
			ans = ans + pow(2,(15-i));	
		}
	}
	printf("%d",ans);
	
	return 0;
}

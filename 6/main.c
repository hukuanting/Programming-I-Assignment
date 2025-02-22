#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d1,d2,d3,d4,d5,d6;
	int hpm,hpd;
	    hpm=hpd=100;	
	while(hpm>0&&hpd>0){
		scanf("%d %d %d %d %d %d",&d1,&d2,&d3,&d4,&d5,&d6);	
		if((d1+d2+d3)%2 !=0 ){
			if(d6>d5&&d5>d4)  hpd=hpd-25; 
			else {
				if (d4%2==d5%2||d5%2==d6%2)  	hpd=hpd-5;
				else  hpd=hpd;
				}
		
		}
		else{
			if(abs(d4-d5)>6)  hpm=hpm-15;
			else{
				if (d4+d5!=d6)  hpm=hpm-5;
				else  hpm=hpm;
			}
		}
		printf("%d %d\n",hpm,hpd);
	}
	if(hpd<=0) printf("Player wins");
	if(hpm<=0)  printf("Dragon wins");
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float w=0.9, u=0.1, b=-51, u1=-0.98, b1=153;
    int i;
    float x,h=0,y;
    scanf("%f",&x);
    
    for(i=1;i<=5;i++){
    	h=(w*x)+(u*h)+b;
        y=u1*h+b1;
        x=y;
    printf("%.1f ",h);    
    printf("%.1f\n ",y);
    }
	return 0;
}

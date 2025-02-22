#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int x,ans;
	scanf("%d",&x);
	float a,b;

	if(x>=5000){
		a = x*0.2966;
		b = x*0.2178;
	}
	else{
		a = (x*0.2966)*1.08;
		b = (x*0.2178)*1.1;
	}
	ans = lround(a-b);
	printf("%d",ans);
	return 0;
}

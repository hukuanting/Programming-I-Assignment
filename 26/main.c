#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int r;
	int n;
	int i;
	char psr[100],x[10] = {0};
	scanf("%d",&n); 
	r = (log(n))/(log(2));
	for(i=0;i<n;i++){
		scanf("%s",&psr[i]);
	}
	for(i=0;i<r;i++){
		scanf("%s",&x[i]);
	}
	
	printf("%c",x[0]);
	
	
	return 0;
}

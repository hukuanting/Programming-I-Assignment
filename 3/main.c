#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=2;
	int temp=3;
	
	while(temp%2 == 1){
		temp = x*temp+1 ;
		printf("%d\n",temp);
		x = x*temp;
	} 	
	return 0;
}

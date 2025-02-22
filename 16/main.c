#include <stdio.h>
#include <stdlib.h>

typedef int Strength;
typedef int Obedience;

#define INIT_STRENGTH 50
#define INIT_OBEDIENCE 20

#define STRENGTH_EAT 5
#define OBEDIENCE_EAT 2

#define STRENGTH_TRAIN 4
#define OBEDIENCE_TRAIN 5

#define LEARN_STRENGTH 55
#define LEARN_OBEDIENCE 28
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,s=INIT_STRENGTH,o=INIT_OBEDIENCE,count=0;
	char c[10000];
	for(i=0;i<10000;i++){
		scanf("%c",&c[i]);
		if(c[i]==10) break;
		
		if(c[i]==101) {
			s=s+STRENGTH_EAT;
			o=o-OBEDIENCE_EAT;
		}
		if(c[i]==116){
			s=s-STRENGTH_TRAIN;
			o=o+OBEDIENCE_TRAIN;
		}
		if(o>=LEARN_OBEDIENCE&&s<=LEARN_STRENGTH){
			count=count+1;
			o=INIT_OBEDIENCE;
			s=s;
		}		
	}
	if(count>=5) printf("Yes");
	else printf("No");
	
	return 0;
}

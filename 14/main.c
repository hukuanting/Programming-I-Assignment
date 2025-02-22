#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d1, d2, d3;
	scanf("%d %d %d",&d1,&d2,&d3);
	long long NUMBER_1,NUMBER_2,NUMBER_3,ans;
	NUMBER_1 = (d1*0x38E38E38E38E3800)%0x7CE66C50E2840000LLU;
	NUMBER_2 = (d2*0x2AAAAAAAAAAAAAAA)%0x7CE66C50E2840000LLU;
	NUMBER_3 = (d3*0x1C71C71C71C71C71)%0x7CE66C50E2840000LLU;
		
	ans = (NUMBER_1+NUMBER_2+NUMBER_3)%0x7CE66C50E2840000LLU;
	printf("%lld",ans);
	return 0;
}

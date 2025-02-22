#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int classify(int);
int main(int argc, char *argv[]) {
	int credit,totalcredit=0;
	float total,gpa ;
	int i,j;
	char c[10000]={0};
	
	for(j=0;j<=10000;j++){
		scanf("%c",&c[j]);	
		if(c[j]==10) break;
	}
	for(i=0;i<=10000;i++){
		
		if(c[i]==10) break;
		else if(c[i]==65||c[i]==66||c[i]==67||c[i]==70){  /*ABCF*/
//+-
			if(c[i+1]==43||c[i+1]==45){
				if(c[i+1]==43){
					if(c[i]==65){  /*A+*/					
						credit=classify(c[i-1]);
						totalcredit=totalcredit+credit;
						total=total+(credit*4.3);
					}  
					if(c[i]==66){    /*B+*/					
						credit=classify(c[i-1]);
						totalcredit=totalcredit+credit;
						total=total+(credit*3.3);
				} 
					if(c[i]==67){    /*C+*/					
						credit=classify(c[i-1]);
						totalcredit=totalcredit+credit;
						total=total+(credit*2.3);
					} 
				}
				else{
					if(c[i]==65){     /*A-*/					
						credit=classify(c[i-1]);
						totalcredit=totalcredit+credit;
						total=total+(credit*3.7);
					} 
					if(c[i]==66){    /*B-*/					
						credit=classify(c[i-1]);
						totalcredit=totalcredit+credit;
						total=total+(credit*2.7);
					} 
					if(c[i]==67){    /*C-*/					
						credit=classify(c[i-1]);
						totalcredit=totalcredit+credit;
						total=total+(credit*1.7);
					} 
				}		
			}
			else{
				if(c[i]==65){   /*A*/				
					credit=classify(c[i-1]);
					totalcredit=totalcredit+credit;
					total=total+(credit*4);
				}
				if(c[i]==66){    /*B*/	
					credit=classify(c[i-1]);
					totalcredit=totalcredit+credit;
					total=total+(credit*3);
				}
				if(c[i]==67){    /*C*/	
					credit=classify(c[i-1]);
					totalcredit=totalcredit+credit;
					total=total+(credit*2);	
				}
				if(c[i]==70){     /*F*/				
					credit=classify(c[i-1]);
					totalcredit=totalcredit+credit;
					total=total+(credit*0);
				}	
			}	
		}
		else{
			continue;	
		} 
	}
	
	gpa=total/totalcredit;
	printf("%f\n",total);
	printf("%d\n",totalcredit);
	printf("%.2f",gpa);	
	
	return 0;
}

int classify(int a){
	int x;
	if(a==49) x=1;
	if(a==50) x=2;
	if(a==51) x=3;
	if(a==52) x=4;
	if(a==53) x=5;
	if(a==54) x=6;
	if(a==55) x=7;
	if(a==56) x=8;
	if(a==57) x=9;
return x;
}


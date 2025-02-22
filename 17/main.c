#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int classify(int);
int main(int argc, char *argv[]) {
	
	int i,j,k,temp,oone,ttwo,tthree,ffour;
	int d1,d2,d3,d4;
	long long N; 
	char c[8];
	scanf("%lld",&N);
	itoa (N, c, 16);
	scanf("%d %d %d %d",&d1,&d2,&d3,&d4);
	
	for(i=0;i<8;i++){		
		if(c[i]==0) {
			temp=8-i;	//temp = 往後移temp格 
			
			for(j=7;j>=0;j=j-1){		
				c[j]=c[j-temp];	
			}
			for(k=0;k<temp;k++){
					c[k]=48;
				}
		}
		else continue;
	}

	char c1[8],c2[8],c3[8],c4[8];
//--------------------------------------------------------------------	
	oone=(classify(c[0])*16)+(classify(c[1]));
	itoa (oone, c1, 2);
	
	for(i=0;i<8;i++){		
		if(c1[i]==0) {
			temp=8-i;	//temp = 往後移temp格 
			
			for(j=7;j>=0;j=j-1){		
				c1[j]=c1[j-temp];	
			}
			for(k=0;k<temp;k++){
					c1[k]=48;
				}
		}
		else continue;
	}
//--------------------------------------------------------------------	
	ttwo=(classify(c[2])*16)+(classify(c[3]));
	itoa (ttwo, c2, 2);

	for(i=0;i<8;i++){		
		if(c2[i]==0) {
			temp=8-i;	//temp = 往後移temp格 
			
			for(j=7;j>=0;j=j-1){		
				c2[j]=c2[j-temp];	
			}
			for(k=0;k<temp;k++){
					c2[k]=48;
				}
		}
		else continue;
	}
//--------------------------------------------------------------------	
	tthree=(classify(c[4])*16)+(classify(c[5]));
	itoa (tthree, c3, 2);
	
	for(i=0;i<8;i++){		
		if(c3[i]==0) {
			temp=8-i;	//temp = 往後移temp格 
			
			for(j=7;j>=0;j=j-1){		
				c3[j]=c3[j-temp];	
			}
			for(k=0;k<temp;k++){
					c3[k]=48;
				}
		}
		else continue;
	}
//--------------------------------------------------------------------
	ffour=(classify(c[6])*16)+(classify(c[7]));
	itoa (ffour, c4, 2);
	
		for(i=0;i<8;i++){		
		if(c4[i]==0) {
			temp=8-i;	//temp = 往後移temp格 
			
			for(j=7;j>=0;j=j-1){		
				c4[j]=c4[j-temp];	
			}
			for(k=0;k<temp;k++){
					c4[k]=48;
				}
		}
		else continue;
	}
//-----------------------------------------------------------------------------------	
	char temp2[10000];
	int a,num2;
	for(a=0;a<8;a++){
		if(c3[a]==c4[a]) temp2[a]=48 ;  /*num2=num2+0*pow(2,(7-a)); */
		if(c3[a]!=c4[a]) temp2[a]=49 ;  /*num2=num2+1*pow(2,(7-a));*/
	}

//----------------------------------------------------------------------------------- 
	char temp3[10000];
	int num3=0;
	for(a=0;a<8;a++){
		
		if((c2[a]+c3[a])==98){
			temp3[a]=49 ;	 
		} 
		else{
			temp3[a]=48 ;
		} 
	}

//----------------------------------------------------------------------------------- 
	char temp4[10000];
	int num4=0;
	for(a=0;a<8;a++){
		
		if((c2[a]+c4[a])==96){
			temp4[a]=48 ;
		} 
		else{
			temp4[a]=49 ;
		} 
	}

//------------------------------------------------------------------------	
	char temp5[10000];
	int num5=0;
	for(a=0;a<8;a++){
		if(c1[a]==49) temp5[a]=48 ; 
		if(c1[a]==48) temp5[a]=49 ; 
	}
/*	itoa (num5, temp5, 16);
		for(i=0;i<2;i++){		
		if(temp5[i]==0) {
			temp=2-i;	//temp = 往後移temp格 
			
			for(j=1;j>=0;j=j-1){		
				temp5[j]=temp5[j-temp];	
			}
			for(k=0;k<temp;k++){
					temp5[k]=48;
				}
		}
		else continue;
	}*/

//--------------------------------------	
	int d;
	d=d1+d2+d3+d4;
	char arr[100] , newarr[100]={0};
	for(i=0;i<8;i++){
		arr[0+i]=temp2[i];
		arr[8+i]=temp3[i];
		arr[16+i]=temp4[i];
		arr[24+i]=temp5[i];
	}
	
	for(i=31;i>=0;i=i-1){		
		if(i>=d) newarr[i] = arr[i-d] ;
		if(i<d)	newarr[i] = arr[32+i-d];
	}
//--------------------------------------	
	char arr1[100], arr2[100], arr3[100];
	int newnum=0;
		for(i=0;i<16;i++){
			arr1[i]=newarr[i];
			arr2[i]=newarr[16+i];
		}	
/*		for(i=0;i<16;i++){
			printf("i=%d,arr1=%c  ",i,arr1[i]);
			printf("i=%d,arr2=%c\n",i,arr2[i]);
		}	*/

		
		for(a=0;a<16;a++){
			if(arr1[a]==arr2[a]) /*arr3[a]=48;*/   newnum = newnum + 0*pow(2,(15-a));
			if(arr1[a]!=arr2[a]) /*arr3[a]=49;*/   newnum = newnum + 1*pow(2,(15-a));
			//printf("%c",arr3[a]);
		}
		printf("%d",newnum);
	return 0;
}
int classify(int a){
	int x;
	if(a==48) x=0;
	if(a==49) x=1;
	if(a==50) x=2;
	if(a==51) x=3;
	if(a==52) x=4;
	if(a==53) x=5;
	if(a==54) x=6;
	if(a==55) x=7;
	if(a==56) x=8;
	if(a==57) x=9;
	if(a==97) x=10;
	if(a==98) x=11;
	if(a==99) x=12;
	if(a==100) x=13;
	if(a==101) x=14;
	if(a==102) x=15;
	return x;
}


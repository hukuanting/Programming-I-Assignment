#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, x, y, z, EAN;
    long long num,num1,num2,temp1,temp2;
    int i,j;
	scanf("%lld",&num);
	
    num1=num; 
    num2=num;
    
	 for(i=2 ;i<=12; i=i+2 ){     //计计 
        
    	temp1= num1%10 ;    //temp =计 
		a += temp1; 
	    num1 = num1/100 ;
	    
    }
	 
	for(j=1 ;j<=12; j+=2 ){     //案计计 
              
        temp2= num2%10 ;    //temp =计 
		b += temp2; 
	    num2 = num2/100 ;
	    
    }
	
	x=a*3+b;
	y=x-1;
	z=y%10;
	EAN=9-z;
	printf("%d\n",EAN);  
	
	return 0;
}

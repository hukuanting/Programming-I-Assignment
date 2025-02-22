#include<stdio.h>

int full_adder_c(int , int  ,int );
int full_adder_x(int , int , int );

# define LEN 5

int main() {
	
	int i;
    int a[LEN], b[LEN], ans[LEN], c = 0;
    
    for(i = 0 ; i < LEN; ++i) {
        scanf("%d", &a[i]);
    }
    
    for(i = 0 ; i < LEN; ++i) {
        scanf("%d", &b[i]);
    }

    for(i = 0 ; i < LEN ; ++i) {
        ans[i] = full_adder_x(a[i], b[i], c);
        c = full_adder_c(a[i], b[i], c);
    }
    for(i = 0 ; i < LEN; ++i) {
        printf("%d ", ans[i]);
    }
    printf("%d", c);
    
    
return 0;
}


int full_adder_c(int aa, int bb ,int cc) {
	
	int x;
	
	if(aa+bb+cc>=2){
		x=1;	
	}
	else{
		x=0;
	}
	
    return x;
}

int full_adder_x(int aa, int bb, int cc) {
	
	
	int x;
	if((aa+bb+cc)==3||(aa+bb+cc)==1){
		x=1;
	}
	else{
		x=0;
	}
	
    return x;
}


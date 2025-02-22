#include <stdio.h>

int a_1, a_n, d;

int sum(int a_i);

int main()
{
    scanf("%d %d %d", &a_1, &a_n, &d);
    printf("%d", sum(a_1));
    return 0;
}
int sum(int a_i) {
    int i,n;
    int x=0,temp=a_i;
    
    n = ((a_n-a_i)/d)+1;
    
    for(i=0;i<n;i++){
    	temp = a_i + i*d;	
    	x = temp+x;
    }
    
    
    
    return x;
}

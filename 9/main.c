#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main () {
    int n,i;
    scanf("%d",&n);
    int S[n],FS[n];
    
    for(i=0;i<n;i++){
     scanf("%d",&S[i]);
        if(i==0){
         FS[i]=S[i];
        }else{
         FS[i]=FS[i-1]+S[i];
        }
    }
    for(i=0;i<n;i++){
     if(FS[i]%S[i]==0){
            printf("%d %d\n",FS[i],S[i]);
        }else{
            continue;
        }
    }
    return 0;
}

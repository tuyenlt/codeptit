#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_fi(long long *fi,long long n){
    for(int i=0;i<85;i++){
        if(n == fi[i]){
            return 1;
        }else if(n < fi[i]) break;
    }
    return 0;
}

int main()
{
    int test;
    scanf("%d",&test);
    long long fi[86];
    fi[0] = 0;
    fi[1] = 1;
    for(long long i=2;i<86;i++){
        fi[i] = fi[i-1] + fi[i-2];
    }

    while(test--){
        long long n;
        scanf("%lld",&n);
        if(is_fi(fi,n))printf("YES\n");
        else printf("NO\n");

    }
    return 0;    
}
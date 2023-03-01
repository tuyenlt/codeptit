#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    const int* x = (int*) a;
    const int* y = (int*) b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;
    return 0;
}

int main()
{
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),compare);
    int lp = 2;
    while(lp--){
        for(int i=0;i<n;i++){
            if(a[i] % 2 == (1-lp))printf("%d ",a[i]);
        }
    }
    return 0;
}
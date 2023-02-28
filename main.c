#include <stdio.h>


int main()
{
    int count[100001] = {0};
    int arr[100];
    int n;
    scanf("%d",&n);
    int totals = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        count[arr[i]]++;
        if(count[arr[i]] > 1) totals++;
    }
    printf("%d\n",totals);
    for(int i=0;i<n;i++){
        if(count[arr[i]] > 1){
            printf("%d ",arr[i]);
            count[arr[i]] = 0;
        }
    }
    return 0;
}
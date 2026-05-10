#include <stdio.h>
#define MAX_N 100000

int n;
int arr[MAX_N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Please write your code here.
    int max=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    while(max!=0)
    {
        max/=10;
        cnt++;
    }
    int A[n];
    int exp=1;
    while(cnt--)
    {
        int count[10]={0};
        for(int i=0;i<n;i++)
        {
            count[(arr[i]/exp)%10]++;
        }
        for(int i=1;i<10;i++)
        {
            count[i]+=count[i-1];
        }
        for(int i=n-1;i>=0;i--)
        {
            A[--count[(arr[i]/exp)%10]]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=A[i];
        }
        exp*=10;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
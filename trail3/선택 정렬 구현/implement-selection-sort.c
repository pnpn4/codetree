#include <stdio.h>

int n;
int arr[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Please write your code here.ㄹ
    int min,tmp;
    for (int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
                min=j;
        }
        tmp=arr[i];
        arr[i]=arr[min];
        arr[min]=tmp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
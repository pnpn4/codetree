#include <stdio.h>

int n;
int arr[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Please write your code here.
    int j, key;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        key=arr[i];
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
    return 0;
}
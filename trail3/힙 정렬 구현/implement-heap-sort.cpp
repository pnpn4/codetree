#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100001];

void heapify(int *arr, int n,int i)
{
    int l,r,max;
    max=i;
    l=i*2;
    r=i*2+1;
    if(l<=n&&arr[l]>arr[max])
        max=l;
    if(r<=n&&arr[r]>arr[max])
        max=r;
    if(max!=i)
    {
        swap(arr[i],arr[max]);
        heapify(arr,n,max);
    }
}
void heapsort(int* arr, int n)
{
    for(int i=n/2;i>=1;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n;i>=2;i--)
    {
        swap(arr[1],arr[i]);
        heapify(arr,i-1,1);
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    heapsort(arr,n);
    for(int i=1;i<=n;i++)
    {
        cout << arr[i] << ' '; 
    }
    cout << endl;
    return 0;
}

#include <iostream>

using namespace std;

int n;
int arr[100000];

int partition(int *arr, int low, int high)
{
    int i=low-1;
    int tmp;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<arr[high])
        {
            i++;
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
    tmp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=tmp;

    return i+1;
}
void quicksort(int *arr, int low, int high){
    if(low<high)
    {
        int pos;
        pos=partition(arr,low,high);
        quicksort(arr,low,pos-1);
        quicksort(arr,pos+1,high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

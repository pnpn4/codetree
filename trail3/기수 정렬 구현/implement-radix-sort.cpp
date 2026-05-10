#include <iostream>
#include <vector>

using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max=0;
    for (int i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    vector<int> v[10];
    int cnt=0;
    while(max!=0)
    {
        max/=10;
        cnt++;
    }
    int exp=1;
    while(cnt--)
    {
        int a=0;
        for(int i=0;i<n;i++)
        {
            v[(arr[i]/exp)%10].push_back(arr[i]);
        }
        for(int i=0;i<10;i++)
        {
            for(int x:v[i])
            {
                arr[a++]=x;
            }
            v[i].clear();
        }
        exp*=10;
    }



    // Please write your code here.
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<' ';
    }
    cout << endl;

    return 0;
}

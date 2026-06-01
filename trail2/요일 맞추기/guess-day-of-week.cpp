#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int m1, m2, d1, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int c1=0,c2=0,c;
    for(int i=1;i<m1;i++)
        c1+=A[i];
    for(int i=1;i<m2;i++)
        c2+=A[i];
    c1+=d1;
    c2+=d2;
    c=c2-c1;
    c=c%7;
    if(c<0)
        c+=7;
    if(c==0)
        cout << "Mon" << endl;
    else if(c==1)
        cout << "Tue" << endl;
    else if(c==2)
        cout << "Wed" << endl;
    else if(c==3)
        cout << "Thu" << endl;
    else if(c==4)
        cout << "Fri" << endl;
    else if(c==5)
        cout << "Sat" << endl;
    else if(c==6)
        cout << "Sun" << endl;
    return 0;
}
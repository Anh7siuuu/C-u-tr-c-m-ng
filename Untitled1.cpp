#include <iostream>
using namespace std;
int main()
{
    int n,A;
    cin >> n;
    int *p = new int [n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
             if(p[n-i]<p[n-i-1]){
                A=p[n-i];
                p[n-i]=p[n-i-1];
                p[n-i-1]=A;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << p[i];
    }
    delete []p;
}


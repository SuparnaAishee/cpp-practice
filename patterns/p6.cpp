#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
     cin >> n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

//output:5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
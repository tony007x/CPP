#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x,j;
    cin>>n;
    int array[n];
    j=0;
    for (int i =0;i<n;i++){
        cin>>array[i];
    }
    cin >> x;
    for(int i=0;i<n;i++){
        if(x== array[i]){
            cout << "Yes";
            break;
        }
        else{
                j+=1;
        }
    }
    if(j==n){
        cout << "No";
    }
    return 0;
}


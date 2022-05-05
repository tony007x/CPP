#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,numstart,total;
    total = 0;
    cout << "Enter Number: ";
    cin >> num;
    for(numstart = 2;numstart<=num;numstart+=2){
        total += pow(numstart,2);
    }
    cout<< total<<endl;
    return 0;
}
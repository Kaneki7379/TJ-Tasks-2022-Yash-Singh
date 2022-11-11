#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
        long i=1;
        while(i<n){
            i*=2;
        }
        return i==n;
    }
int main(){
    if(isPowerOfTwo(8))
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
    return 0;
}
// KADANE METHOD
// SUBARRAY CONCEPT
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";   
        }
        cout<<endl;
    }
    return 0;
}
// OUTPUT

// 1 12 123 1234 12345 
// 2 23 234 2345 
// 3 34 345 
// 4 45 
// 5 
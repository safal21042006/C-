/* FLOWD TRIANGLE METHOD
1
2 3 
4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;
int main(){
    int n=1;
    int m;
    cout<<"ENTER THE NUMBER";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
            n++;
        }cout<<endl;
    }
    return 0;
}
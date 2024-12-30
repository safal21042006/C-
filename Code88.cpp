// OPTIMISED FORM 

// Here we calculate kisi element ka pehala and baad ka product

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4};
    int n=nums.size();
    vector<int>ans(n,1);
    vector<int>prefix(n,1);// Two vector more used so space complexicity is O(n)
    vector<int>suffix(n,1);

    //Prefix
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }

    // Suffix
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }

    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
    }

    // Here time complexicity is O(3n)=O(n)
    // Space complexicity is O(n)
for(int val:ans){
    cout<<val<<" ";
}
cout<<endl;
return 0;


}
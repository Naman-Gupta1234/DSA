// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        if(n<2)
         return -1;
         sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int small=arr[0]+k;
        int large=arr[n-1]-k;
        int mini,maxi;
        
        for(int i=0;i<n-1;i++)
        {
            mini=min(small,arr[i+1]-k);
            maxi=max(large,arr[i]+k);
            if(mini<0)
             continue;
             ans=min(ans,maxi-mini);
            
             
        }
        return ans;
    }
};
int main() {
    int t;
    // cin>>t;
    t=1;
    while(t--){
        int n,k;
       k=2;
       n=4;
        int arr[4]={1,5,8,10};
        
        Solution ob;
        auto ans=ob.getMinDiff(arr,n,k);
        cout<<ans<<"\n";
    }
    return 0;
}
 

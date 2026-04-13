#include<bits/stdc++.h>
using namespace std;

//O(n) time and O(n) space
int main()
{
    int n;
    cin>>n;
    // vector<bool> vis(n+1);
    // //1..n
    // for(int i=0;i<n-1;i++){
    //     int x;
    //     cin>>x;
    //     vis[x]=true;
    // }
    // for(int x=1;x<=n;x++){
    //     if(!vis[x]){
    //         cout<<x<<endl;
    //         return 0;
    //     }
    // }
    long long sum=0;
    long long total=(long long)n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<total-sum<<endl;
}
//alternative : long long sum=n*(n+1)/2; and then subtract all the numbers from the sum. O(n) time and O(1) space

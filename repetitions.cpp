#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int answer=0;
    int blockSize=0;

    for(int i=0; i<n; i++){
        if(i!=0 && s[i]==s[i-1]){
            blockSize++;
        }
        else{
            answer=max(answer, blockSize);
            blockSize=1;
        }
    }
    cout<<answer;
}
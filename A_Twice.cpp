#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,score=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(v.size() == 1) cout<<0<<endl;
        else{
            sort(v.begin(),v.end());
            for(int i = 0;i<v.size()-1;i++)
            {
                if(v[i] == v[i+1]){
                    score++;
                    i++;
                }
            }
            cout<<score<<endl;
        }
    }   
    return 0;
}
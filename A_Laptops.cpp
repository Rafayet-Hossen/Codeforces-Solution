#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag = false;
    int n;
    cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    }
    sort(vp.begin(),vp.end());
    for (int i = 0; i < n-1; i++)
    {
        if((vp[i].first < vp[i+1].first) && (vp[i].second>vp[i+1].second))
        {
            flag = true;
            i++;
        }
    }
    if(flag) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
    return 0;
}
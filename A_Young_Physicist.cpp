#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int xi=0,yj=0,zk = 0;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        xi+=x;
        yj+=y;
        zk+=z;
    }
    if(!xi && !yj && !zk) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int i = 0;
    while(i<n)
    {
        if(s[i] == '.'){
            cout<<0;
            i++;
        }
        else if(s[i] == '-'){
            if(s[i+1] == '.'){
                cout<<1;
                i+=2;
            }
            else{
                cout<<2;
                i+=2;
            }

        }
    }  
    return 0;
}
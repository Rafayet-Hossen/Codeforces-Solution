#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    n++;
    while(true){
        int a = n%10;
        int b = (n%100)/10;
        int c = (n/100)%10;
        int d = (n/1000);
        if(a!= b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout << n << endl;
            break;
        }
        else{
            n++;
        }
    } 
    return 0;
}
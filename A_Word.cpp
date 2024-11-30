#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.length();
    int upper = 0, lower = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else
            upper++;
    }
    if (lower >= upper)
    {
        for (int i = 0; i < size; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}
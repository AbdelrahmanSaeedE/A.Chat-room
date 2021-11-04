#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=0;
    string s;
    cin >> s;
    for(int i=0;i<s.size();++i){
        if(s[i]=='h'&&a==0) a++;
        else if(s[i]=='e'&&a==1) a++;
        else if(s[i]=='l'&&(a==2||a==3)) a++;
        else if(s[i]=='o'&&a==4) a++;
    }
    (a==5) ? cout << "YES" << endl : cout << "NO" << endl ;
    return 0;
}

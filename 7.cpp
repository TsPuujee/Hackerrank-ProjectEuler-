#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,j; cin >> t;
    bool as=true;
    vector<int>se;
    for(int i=2;i<=104729;i++){
        as=true;
        for(j=0;j<se.size();j++)
            if(i%se[j]==0) { as=false; break; }
        if(as) se.push_back(i);
    }
    for(int i=0;i<t;i++){
        int tem; cin>>tem;
        cout<<se[tem-1]<<endl;
    }
    return 0;
}

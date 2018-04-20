#include<bits/stdc++.h>

using namespace std;
vector<long long>F(15);

int main(){
    int t;
    cin >> t;
     F[0]=2; F[1]=8;
    for(int ii=2;ii<15;ii++)
        F[ii]=F[ii-1]*4+F[ii-2];
    
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        int ans=0,i=0;
        do{
            int t=F[i];
            if(t>n) break;
            ans=ans+t;
            i++;
        }while(ans<n);
        cout<<ans<<endl;
        
    }
    return 0;
}

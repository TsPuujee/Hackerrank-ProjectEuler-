#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n, lar=2, fact=2,sqroot,flag;
    cin >> t;
    for(long int i=0;i<t;i++){
        cin >> n;
        lar=2, fact=2;
        sqroot = sqrt(n);
        flag = 0;
        while(n>1){
            if((fact > sqroot) && (flag == 0)){
                cout << n << endl;
                break;
            }
            if(n%fact == 0){
                flag = 1;
                lar = fact;
                while(n%fact == 0)
                    n = n/fact;
            }
            fact++;
        }
        if(flag == 1)
            cout << lar << endl;
    }
}

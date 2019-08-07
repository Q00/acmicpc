#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;

    string::iterator it;
    int sum=0;
    for(it=str.begin();it<str.end();it++){
        int n = (int)*it;
        
        int cn = (n-65)/3+3;
        cout<<cn;
        if(*it=='S'|| *it=='V'|| *it=='Y' || *it=='Z')
            cn--;
        sum+=cn;
    }
    cout<<sum;
    return 0;
}


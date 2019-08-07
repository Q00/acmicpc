//그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다. 단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
// string distance -- string iterator
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
bool check(string str){
    int arr[26]={};
    for(int i=0;i<str.size();i++){ 
        arr[(int)str[i]-97]++;
    }
    
    bool check_flag=true;
    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++){

        if(arr[i]==0) continue;
        char l = (char)(i+97);
        string::iterator it = find(str.begin(),str.end(),l);
        int key = distance(str.begin(), it);
        string cstr = str.substr(key,arr[i]);
        if(check_flag){
            if(count(cstr.begin(),cstr.end(),l)==arr[i]) check_flag=true;
            else {
                check_flag= false;
                break;
            }
        }
    }

    return check_flag;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string str;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>str;
        if(check(str)) sum++;
    }

    cout<<sum;



    return 0;
}

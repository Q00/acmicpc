//첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열의 앞과 뒤에는 공백이 있을 수도 있다.
//문자열 처리
//newline을 만났을때까지 입력받을시 getline(cin,string)

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    getline(cin, str);
    int sum =0;
    if(str[0] == ' ') sum-=1;
    if(str[str.size()-1]==' ')sum-=1;
    int n = count(str.begin(),str.end(),' ')+1;
    sum+=n;
    cout<<sum;

    return 0;
}


//첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다. 단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.
//č	c=
//ć	c-
//dž	dz=
//đ	d-
//lj	lj
//nj	nj
//š	s=
//ž	z=
//boost/algorithm/string/replace.hpp
#include <boost/algorithm/string/replace.hpp>
#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin>>str;
    array<string,8>  strarr = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    for(int i = 0, i<strarr.size(),i++){
        boost::replace_all(str,strarr[i],"0");
    }

    cout<<str.size();
    return 0;
}



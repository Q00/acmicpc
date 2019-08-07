//알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
//문자열 처리
//std::transform(str.begin(), str.end(),str.begin(), ::toupper); uppercase
//vector find != verctor.end()
//vector iterator 에는 find의 주소값이 담겨서 distance 메소드로 찾을 수 있음
//고정배열에서는 안됨

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    string::iterator it; 
    cin>> str;
    std::transform(str.begin(), str.end(),str.begin(), ::toupper);
    int mmax =0;
    vector<int> arr;
    for (int i=0; i <26 ; i++){
        int current = (int)count(str.begin(),str.end(),(char)(i+65));
        mmax = max(mmax,current);
        arr.push_back(current);
    }
    if(count(arr.begin(),arr.end(),mmax)>1)
        cout<< '?';
    else
    {
        std::vector<int>::iterator it = std::find(arr.begin(), arr.end(), mmax);
        int c = distance(arr.begin(), it);

        cout<<(char)(c+65);
    }
     

    return 0;
}

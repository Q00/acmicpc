//알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
//문자열 처리
//find 메소드 위치 반환 안할시 string::npos return
//fill_n 메소드 array default value init

#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin>> str;
    int arr[26];
    std::fill_n(arr, 26, -1);
    for(int i=97; i<123;i++){
      int index = str.find((char)i);
        if(index != string::npos){
            arr[i-97]=index;
        }
    }
    for(int j=0;j<26;j++){
      cout << arr[j]<<" ";
    }
    return 0;
}


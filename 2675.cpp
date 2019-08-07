//문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다. S에는 QR Code "alphanumeric" 문자만 들어있다. QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.
//문자열 처리

#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>> n;
    string str;
    int h;
    for(int i=0; i<n;i++){
        cin>> h;
        cin>> str;
        string::iterator it;
        for (it = str.begin(); it < str.end(); it++){
            for(int j=0; j<h; j++)
                cout << *it;
        }
        cout << '\n';
    }
    return 0;
}


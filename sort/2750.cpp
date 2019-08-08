//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int number;
        cin>>number;
        arr.push_back(number);
    }
    sort(arr.begin(),arr.end());

    for(vector<int>::iterator it=arr.begin();it<arr.end();it++){
        cout<<*it<<'\n';
    }
    return 0;
}


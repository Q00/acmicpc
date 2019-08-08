//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
//첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 10,000보다 작거나 같은 자연수이다.
#include <iostream>
#include <string>
#include <algorithm>

short arr[10001];

using namespace std;
    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int number;
        cin>>number;
        arr[number]++;
        
    }

    //sort(arr,arr+n);
    for(int i = 0; i<10001; i++) {
        for(int j=0;j<arr[i];j++){
          cout<<i<<'\n';
        }
    }
    return 0;
}

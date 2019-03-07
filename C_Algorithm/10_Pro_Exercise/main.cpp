#include <iostream>
#include <algorithm>

using namespace std;

string a[20000];
int n;

bool compare(string a, string b){
    if(a.length() < b.length()){ //길이가 짧은 순서 우선
        return 1;
    }else if(a.length() > b.length()){
        return 0;
    }else { //길이가 같은 경우라면
        return a < b; //사전 순으로
    }
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n, compare);

    for(int i=0; i<n; i++){
        if(i>0 && a[i] == a[i-1]){
            continue;
        }else {
            cout << a[i] << '\n';
        }
    }

    return 0;
}

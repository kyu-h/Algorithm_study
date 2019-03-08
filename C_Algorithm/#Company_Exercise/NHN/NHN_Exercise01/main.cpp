#include <iostream>
#include <algorithm>

using namespace std;

int num;
string data[10];

bool low_compare(string a, string b){
    if(a.length() < b.length()){ //길이가 짧은 순서 우선
        if(a[0] - '0' < b[0] - '0'){
            return 1;
        }else if(a[0] - '0' > b[0] - '0'){
            return 0;
        }else {
            if(a[0] - '0' < b[1] - '0'){
                return 1;
            }else {
                return 0;
            }
        }
    }else if(a.length() > b.length()){
        if(a[0] - '0' > b[0] - '0'){
            return 0;
        }else if(a[0] - '0' < b[0] - '0'){
            return 1;
        }else {
            if(a[1] - '0' > b[0] - '0'){
                return 0;
            }else {
                return 1;
            }
        }
    }else {
        return a < b; //사전 순으로
    }
}

bool high_compare(string a, string b){
    if(a.length() < b.length()){ //길이가 긴게 순서 우선
        if(a[0] - '0' < b[0] - '0'){
            return 0;
        }else if(a[0] - '0' > b[0] - '0'){
            return 1;
        }else {
            if(a[0] - '0' < b[1] - '0'){
                return 0;
            }else {
                return 1;
            }
        }
    }else if(a.length() > b.length()){
        if(a[0] - '0' > b[0] - '0'){
            return 1;
        }else if(a[0] - '0' < b[0] - '0'){
            return 0;
        }else {
            if(a[1] - '0' > b[0] - '0'){
                return 1;
            }else {
                return 0;
            }
        }
    }else {
        return a > b; //사전 순 내림
    }
}

int main(){
    cin >> num;
    int low, high = 0;
    string s_low, s_high;

    for(int i=0; i<num; i++){
        cin >> data[i];
    }

    sort(data, data + num, low_compare);

    for(int i=0; i<num; i++){
        s_low += data[i];
    }

    low = atoi(s_low.c_str());

    sort(data, data + num, high_compare);

    for(int i=0; i<num; i++){
        s_high += data[i];
    }

    high = atoi(s_high.c_str());

    printf("%d\n", low + high);

    return 0;
}

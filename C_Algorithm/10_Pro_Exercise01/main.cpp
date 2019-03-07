#include <iostream>
#include <algorithm>

using namespace std;

int num;
string data[1000];

int getSum(string a){
    int length = a.length(), sum = 0;

    for(int i=0; i<length; i++){
        if(a[i] - '0' <= 9 && a[i] - '0' >= 0){
            sum += a[i] - '0';
        }
    }

    return sum;
}

bool compare(string a, string b){
    if(a.length() < b.length()){
        return 1;
    }else if(a.length() > b.length()){
        return 0;
    }else {
        int aSum = getSum(a);
        int bSum = getSum(b);

        if(aSum != bSum){
            return aSum < bSum;
        }else {
            return a < b;
        }
    }
}

int main(void){
    cin >> num;

    for(int i=0; i<num; i++){
        cin >> data[i];
    }

    sort(data, data + num, compare);

    for(int i=0; i<num; i++){
        cout << data[i] << '\n';
    }
    return 0;
}
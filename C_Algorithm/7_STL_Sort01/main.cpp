#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<string, pair<int, int>> a,
             pair<string, pair<int, int>> b){
    if(a.second.first == b.second.first){
        return a.second.second > b.second.second;
    }else {
        return a.second.first > b.second.first;
    }
}

int main(void){
    vector<pair<string, pair<int, int>>> v;
    v.push_back(pair<string, pair<int, int>> ("������", pair<int, int>(90, 19991111)));
    v.push_back(pair<string, pair<int, int>> ("�ٴٴ�", pair<int, int>(85, 19941111)));
    v.push_back(pair<string, pair<int, int>> ("������", pair<int, int>(77, 19921111)));
    v.push_back(pair<string, pair<int, int>> ("����", pair<int, int>(77, 19961111)));
    v.push_back(pair<string, pair<int, int>> ("�ٹٹ�", pair<int, int>(43, 20001111)));

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<v.size(); i++){
        cout << v[i].first << ' ';
    }

    return 0;
}

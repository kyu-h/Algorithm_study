#include <iostream>
#include <vector>

using namespace std;

int num = 7;
int c[7];
vector<int> a[8];

void dfs(int x) {
    if(c[x]) //그 함수에 방문했다면 끝내기
        return;
    c[x] = true; //처음 방문하는거라면

    cout << x << ' ';

    for(int i=0; i<a[x].size(); i++){
        int y = a[x][i];
        dfs(y);
    }
}

int main(void){
    a[1].push_back(2);
    a[2].push_back(1);

    a[1].push_back(3);
    a[3].push_back(1);

    a[2].push_back(3);
    a[3].push_back(2);

    a[2].push_back(4);
    a[4].push_back(2);

    a[2].push_back(5);
    a[5].push_back(2);

    a[3].push_back(6);
    a[6].push_back(3);

    a[3].push_back(7);
    a[7].push_back(3);

    a[4].push_back(5);
    a[5].push_back(4);

    a[6].push_back(7);
    a[7].push_back(6);

    dfs(1); //정점 1을 기준으로

    return 0;
}

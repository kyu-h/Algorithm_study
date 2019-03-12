#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int c[101];
vector<int> a[101];

void bfs(int start){
    queue<int> q;
    q.push(start);
    c[start] = true;
    int num = 0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        //printf("%d ", x);

        for(int i=0; i<a[x].size(); i++){
            int y = a[x][i];
            if(!c[y]) {
                q.push(y);
                c[y] = true;
            }
        }
        num++;
    }
    printf("%d", num-1);
}

int main(void){
    int c, line;
    int x, y;

    cin >> c;
    cin >> line;

    for(int i=0; i<line; i++){
        cin >> x;
        cin >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    bfs(1);

    return 0;
}

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 6;
int INF = 10000000;

vector<pair<int, int>> a[7]; //��������
int d[7]; //�ּ� ���

void dijkstra(int start){
    d[start] = 0;
    priority_queue<pair<int, int>> pq; //������
    pq.push(make_pair(start, 0));

    //����� ������� ó���ϹǷ� ť�� ����Ѵ�.
    while (!pq.empty()){
        int current = pq.top().first;

        //ª�� ���� ���� ������ ����ȭ(-) �Ѵ�.
        int distance = -pq.top().second;
        pq.pop();

        //�ִܰŸ��� �ƴ� ��� ��ŵ�Ѵ�.
        if(d[current] < distance)
            continue;
        for(int i=0; i<a[current].size(); i++){
            //���õ� ����� ���� ���
            int next = a[current][i].first;

            //���õ� ��� ���ļ� ���� ���� ���� ���
            int nextDistnace = distance + a[current][i].second;

            //������ �ּҺ�뺸�� �� �����ϴٸ� ��ü
            if(nextDistnace < d[next]){
                d[next] = nextDistnace;
                pq.push(make_pair(next, -nextDistnace));
            }
        }
    }
}

int main(void){
    //�⺻������ ������� ���� ��� ����� ����
    for(int i=1; i<= number; i++){
        d[i] = INF;
    }

    a[1].push_back(make_pair(2,2));
    a[1].push_back(make_pair(3,5));
    a[1].push_back(make_pair(4,1));

    a[2].push_back(make_pair(1,2));
    a[2].push_back(make_pair(3,3));
    a[2].push_back(make_pair(4,2));

    a[3].push_back(make_pair(1,5));
    a[3].push_back(make_pair(2,3));
    a[3].push_back(make_pair(4,3));
    a[3].push_back(make_pair(5,1));
    a[3].push_back(make_pair(6,5));

    a[4].push_back(make_pair(1,1));
    a[4].push_back(make_pair(2,2));
    a[4].push_back(make_pair(3,3));
    a[4].push_back(make_pair(5,1));

    a[5].push_back(make_pair(3,1));
    a[5].push_back(make_pair(4,1));
    a[5].push_back(make_pair(6,2));

    a[6].push_back(make_pair(3,5));
    a[6].push_back(make_pair(5,2));

    dijkstra(1);

    for(int i=1; i<=number; i++){
        printf("%d ", d[i]);
    }

    return 0;
}
//***************************************
//
// ������ȸ: �ڱ��ڽ� -> �����ڽ� -> ������ �ڽ�
// ������ȸ: �����ڽ� -> �ڱ��ڽ� -> ������ �ڽ�
// ������ȸ: �����ڽ� -> ������ �ڽ� -> �ڱ��ڽ�
//
//***************************************

#include <iostream>

using namespace std;

int num = 15;

//�ϳ��� ��� ������ �����Ѵ�.
typedef struct node *treePointer;
typedef struct node {
    int data;
    treePointer leftChild, rightChild;
} node;

//������ȸ
void preorder(treePointer ptr){
    if(ptr){
        cout << ptr -> data << ' ';
        preorder(ptr ->leftChild);
        preorder(ptr -> rightChild);
    }
}

//������ȸ
void inorder(treePointer ptr){
    if(ptr){
        inorder(ptr ->leftChild);
        cout << ptr -> data << ' ';
        inorder(ptr -> rightChild);
    }
}

//������ȸ
void postorder(treePointer ptr){
    if(ptr){
        postorder(ptr ->leftChild);
        postorder(ptr -> rightChild);
        cout << ptr -> data << ' ';
    }
}

int main(){
    node nodes[num + 1];
    for(int i=1; i<=num; i++){
        nodes[i].data = i;
        nodes[i].leftChild = NULL;
        nodes[i].rightChild = NULL;
    }

    for(int i=1; i<=num; i++){
        if(i % 2 == 0){
            nodes[i / 2].leftChild = &nodes[i];
        }else {
            nodes[i / 2].rightChild = &nodes[i];
        }
    }

    //preorder(&nodes[1]);
    //inorder(&nodes[1]);
    postorder(&nodes[1]);

    return 0;
}

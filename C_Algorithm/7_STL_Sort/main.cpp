#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    int score;
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }

    //���ı����� ������ ���� ����
    bool operator<(Student &student){
        return this->score < student.score;
    }
};


int main(void){
    Student student[] = {
        Student("������", 90),
        Student("�󳪴�", 55),
        Student("������", 44),
        Student("�볪��", 33),
        Student("�̳���", 22)
    };
    sort(student, student + 5);

    for(int i=0; i<5; i++){
        cout << student[i].name << ' ';
    }

    return 0;
}

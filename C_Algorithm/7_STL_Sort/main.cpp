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

    //정렬기준은 점수가 작은 순서
    bool operator<(Student &student){
        return this->score < student.score;
    }
};


int main(void){
    Student student[] = {
        Student("가나다", 90),
        Student("라나다", 55),
        Student("베나다", 44),
        Student("대나다", 33),
        Student("미나다", 22)
    };
    sort(student, student + 5);

    for(int i=0; i<5; i++){
        cout << student[i].name << ' ';
    }

    return 0;
}

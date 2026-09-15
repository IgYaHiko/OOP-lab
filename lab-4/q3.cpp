// mutiple inheritance
#include<iostream>
using namespace std;

class Academic {
public:
    int marks;
};

class Sports {
public:
    int sport_score;

};

class Result : public Academic, public Sports {
      // making contructor
public:
    int res = 0;
    Result(int marks, int sport_score) {
        this-> marks = marks;
        this-> sport_score = sport_score;
    }

    int score() {
        res = marks + sport_score;
        return res;
    }
    void display() {
        cout << "result is: " << res << endl;
    }



};

int main() {
    Result r(100,100);
    r.score();
    r.display();
    return 0;
}
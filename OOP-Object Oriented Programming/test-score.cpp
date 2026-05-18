#include <iostream>
using namespace std;

class Student {
private:
    int score;

public:
    void setScore(int s) {
        score = s;
    }

    int getScore() {
        return score;
    }
};

int main() {

    // Create object
    Student s1;

    // Set score
    s1.setScore(95);

    // Get and print score
    cout << "Student Score: " << s1.getScore() << endl;

    return 0;
}
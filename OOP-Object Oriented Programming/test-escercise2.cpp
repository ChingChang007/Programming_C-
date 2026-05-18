#include <iostream>
using namespace std;

class Retangle {
public:
    float width;
    float height;
};

int main() {
    Retangle s1;

    s1.width = 30;
    s1.height = 20;

    cout << "Width: " << s1.width << endl;
    cout << "Height: " << s1.height << endl;
    cout << "Rectangle Area: " << s1.width * s1.height << endl;

    return 0;
}
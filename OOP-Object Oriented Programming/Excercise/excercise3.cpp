#include <iostream>
using namespace std;

class Result {
public:
    double math;
    double phys;
    double chem;

    double calculateTotal() {
        return math + phys + chem;
    }

    double calculateAverage() {
        return (math + phys + chem) / 3;
    }
};

int main() {
    Result r1;

 

    cout << "Math: " << endl;
    cin>>r1.math;

    cout << "Physics: " << endl;
    cin>>r1.phys;

    cout << "Chemistry: " << endl;
    cin>>r1.chem;


    cout << "Total: " << r1.calculateTotal() << endl;
    cout << "Average: " << r1.calculateAverage() << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    double price;

public:
    // Setters
    void setTitle(string t) {
        title = t;
    }
    void setPrice(double p) {
        price = p;
    }

    // Getters
    string getTitle() {
        return title;
    }
    double getPrice() {
        return price;
    }
};

int main() {
    Book myBook;
    
    // Set price via Setter
    myBook.setTitle("C++ Basics");
    myBook.setPrice(15.50);
    
    // Take price come show via Getter
    cout << "Book Title: " << myBook.getTitle() << endl;
    cout << "Book Price: $" << myBook.getPrice() << endl;
    
    return 0;
}
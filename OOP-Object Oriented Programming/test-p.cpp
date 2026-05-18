#include <iostream>
#include <string>
using namespace std;

class product {
public:
    int productID;
    string ProductName;
    float qty, price;

    float total() {
        return qty * price;
    }
};

int main() {
    product p1;

    p1.productID = 101;
    p1.ProductName = "Laptop";
    p1.price = 950;
    p1.qty = 3;

    cout << "Product ID: " << p1.productID << endl;
    cout << "Product Name: " << p1.ProductName << endl;
    cout << "Product Price: " << p1.price << endl;
    cout << "Product Qty: " << p1.qty << endl;
    cout << "Total: " << p1.total() << endl;

    return 0;
}
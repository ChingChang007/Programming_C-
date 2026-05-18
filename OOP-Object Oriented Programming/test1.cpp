#include<iostream>
#include <string>
using namespace std;
class Product{
    public:
    int productID;
    string proName;
    float qty, price;
    float total(){
        return qty*price;
    }
};
int main(){
    Product product;
    product.productID = 1;
    product.proName = "Coca";
    product.qty = 15;   
    product.price = 2;
    cout<<"Total : "<< product.total();
    return 0;

}
#include <iostream>
using namespace std;
int main(){
    system("cls");
    float total_price;
    cout<<"Enter value total_price: ";cin>> total_price;
    if(total_price >=0 && total_price <=30){
        cout<<"Discount 5% = "<<(total_price * 0.05)<< endl;
    }else if(total_price >30 && total_price <=50){
        cout<<"Discount 10% = "<<(total_price * 0.1)<< endl;
    }else if(total_price >50 && total_price <=100){
        cout<<"Discount 15% = "<<(total_price * 0.15)<< endl;
    }else if(total_price >100)
	{
        cout<<"Discount 20% = "<<(total_price * 0.2)<< endl;
    }else{
    	cout<<"Invalid total price!"<<endl;
	}
    return 0;
}

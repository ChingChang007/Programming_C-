#include <iostream>
using namespace std;
int main(){
    system("cls");
    float total_score;
    cout<<"Enter value total_score: ";cin>> total_score;
    if(total_score >=90){
        cout<<"A"<<endl;
    }else if(total_score >=80){
        cout<<"B"<<endl;
    }else if(total_score >=70){
        cout<<"C"<<endl;
    }else if(total_score >=60){
        cout<<"D"<<endl;
    }else if(total_score >=50){
        cout<<"E"<<endl;
    }else{
        cout<<"fail."<< endl;
    }
    return 0;
}

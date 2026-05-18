#include <iostream>
using namespace std;
int main(){
    int *id = new int;
    string *name = new string;
    string *gender = new string;
    *id = 1001;
    *name = "Sok San";
    *gender = "Male";
    cout<<"=========Person Info========="<<endl;
    cout<<*id <<"\t" <<*name <<"\t\t" <<*gender<<endl;
    delete id;
    delete name;
    delete gender;
    return 0;
}
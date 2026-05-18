#include<iostream>
#include<string>
using namespace std;

int main(){
    string *courseName = new string[100]; 
    string search;
    int op, n=0, i;

    do{
        cout<<"======MENU====="<<endl;
        cout<<"1. Input"<<endl;
        cout<<"2. Output"<<endl;
        cout<<"3. Search"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Input Option: "; cin>>op;

        switch(op){
            case 1:{
                cout<<"Input Course Name: "; 
                cin>>*(courseName + n); 
                n++;
                break;
            }
            case 2:{
                cout<<"======List Course======"<<endl;
                for(i=0; i<n; i++){
                    cout<<*(courseName + i)<<endl;
                }
                break;
            }
            case 3:{
                cout<<"Course Name for Search: "; cin>>search;
                int indexFound = -1;
                for(int i=0; i<n; i++){
                    if(search == *(courseName + i)){
                        indexFound = i;
                        break;
                    }
                }
                if(indexFound == -1){
                    cout<<search<<" Not Found in Course Name!"<<endl;
                } else {
                    cout<<search<<" are Found in Course Name!"<<endl;
                }
                break;
            }
            case 4:{
                cout<<"======Exit======"<<endl;
                break;
            }
        }
    } while(op != 4);

    delete[] courseName; // deallocate memory
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    string name[5];

    for(int i=0;i<5;i++)
    {
        cout<<"Enter name : ";
        cin>>name[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<"Name : "<<name[i]<<endl;
    }

    return 0;
}

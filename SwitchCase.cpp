#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a charecter: "<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
        cout<<"namaste"<<endl;
        break;

        case 'c':
        cout<<"hola"<<endl;
        break;
        case 'd':
        cout<<"salute"<<endl;
        break;
        case 'e':
        cout<<"ciao"<<endl;
        break;

        default:
            cout<<"im still learning"<<endl;
            break;

    }
    return 0;
}

#include<iostream>
#include <iomanip>
using namespace std;

int calculate(int number)
{
    return number*number;
}


int main()
{
    int number;
    cout<<"enter a no";
    cin>>number;
    int squre=calculate(number);
    cout<<squre;
    return 0;
}


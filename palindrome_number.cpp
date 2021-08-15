#include <iostream>
using namespace std;

int main()
{
    cout<<"enter a no";
    int n,num,digit,rev=0;
    cin>>num;
    n=num;
    while (num!=0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;

    }
    if (n==rev)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

void DisplayHexaDecimal(int iNo)
{

    int iDigit=0;

    cout<<"HeaxDecimal of :"<<iNo<<"\n";
     

    while(iNo!=0)
    {
        iDigit=iNo%16;
        cout<<iDigit;
        iNo=iNo/16;
    }
    cout<<"\n";

}


int main()
{

    int iValue=0;
    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    DisplayHexaDecimal(iValue);



    return 0;
}
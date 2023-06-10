#include<iostream>
using namespace std;

void DisplayBinaryResults(int iNo1,int iNo2)
{

    int iResult=0;

    iResult=iNo1 & iNo2;
    cout<<"Result uf & is :"<<iResult<<"\n";

    iResult=iNo1 | iNo2;
    cout<<"Result uf | is :"<<iResult<<"\n";

    iResult=iNo1 ^ iNo2;
    cout<<"Result uf ^ is :"<<iResult<<"\n";

    

}


int main()
{

    int iValue1=0;
    int iValue2=0;
    cout<<"Enter number :"<<"\n";
    cin>>iValue1;

     cout<<"Enter number :"<<"\n";
    cin>>iValue2;


    DisplayBinaryResults(iValue1,iValue2);



    return 0;
}
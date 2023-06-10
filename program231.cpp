/*
        Check weather 3rd bit is ON or OFF.
*/


#include<iostream>

using namespace std;
bool CheckBit(int iNo)
{
    int iMask=4;
    int iResult=0;
    iResult=iNo & iMask;
    if((iResult==iMask))
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{

    int iValue=0;
    bool bRet=false;
    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    bRet=CheckBit(iValue);

    if(bRet==true)
    {
        cout<<"3rd bit is ON"<<"\n";
    }
    else
    {
        cout<<"3rd bit id OFF"<<"\n";
    }

    


    return 0;
}
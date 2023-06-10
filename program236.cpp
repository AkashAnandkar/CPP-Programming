/*
        Check weather 11th bit is ON or OFF.
*/


#include<iostream>

using namespace std;
typedef unsigned int UNIT;

bool CheckBit(UNIT iNo)
{
    UNIT iMask=0X40;
    UNIT iResult=0;
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

     unsigned int iValue=0;
    bool bRet=false;
    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    bRet=CheckBit(iValue);

    if(bRet==true)
    {
        cout<<"11th bit is ON"<<"\n";
    }
    else
    {
        cout<<"11th bit id OFF"<<"\n";
    }

    


    return 0;
}
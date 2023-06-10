/*
        Check weather 14th and 7th and 21th  bits are ON or OFF.
*/


#include<iostream>

using namespace std;
typedef unsigned int UNIT;

bool CheckBit(UNIT iNo)
{
    UNIT iMask=0x102040;
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
        cout<<"14th  and 7th and 21th bits are ON"<<"\n";
    }
    else
    {
        cout<<"14th  and 7th and 21th bits are OFF"<<"\n";
    }

    


    return 0;
}
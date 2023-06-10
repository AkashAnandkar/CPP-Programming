/*

        Write a program which checks wheather first and last bit is ON or OFF.
        First bit means number 1 and last bit means bit number 32.       

*/


#include<iostream>

using namespace std;
typedef unsigned int UNIT;



bool CheckBit(UNIT iNo)
{
    UNIT iResult=0;
    UNIT iMask=0x80000001;

    iResult= iNo & iMask;

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

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    bRet=CheckBit(iValue);

    if((bRet==true))
    {
        cout<<"1st and last bit of given number is ON"<<"\n";
    }
    else
    {
        cout<<"1st and last  bit of given number is OFF"<<"\n";
    }
    return 0;
}


/*

          Write a program which checks wheather 5th & 18th bit is ON or OFF.  

*/

#include<iostream>

using namespace std;
typedef unsigned int UNIT;



bool CheckBit(UNIT iNo)
{
    UNIT iResult=0;
    UNIT iMask=0x20010;

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
        cout<<"5th and 18th  bit of given number is ON"<<"\n";
    }
    else
    {
        cout<<"5th and 18th bit of given number is OFF"<<"\n";
    }
    return 0;
}

/*
                    TestCase

            1 4 5 8 5 2 0= 5th and 18th  Bit is ON

            4 5 8 6 8 7 =  5th and 18th  Bit is ON
*/
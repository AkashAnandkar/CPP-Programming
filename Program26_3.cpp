/*

          Write a program which checks wheather 7th , 15th  and 21st bit is ON or OFF.  

*/

#include<iostream>

using namespace std;
typedef unsigned int UNIT;



bool CheckBit(UNIT iNo)
{
    UNIT iResult=0;
    UNIT iMask=0x104040;

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
        cout<<"7th ,15th and 21st bit of given number is ON"<<"\n";
    }
    else
    {
        cout<<"7th ,15th and 21st  bit of given number is OFF"<<"\n";
    }
    return 0;
}

/*
                    TestCase

            1 5  4 7 8  9 3 2 0= 7th ,15th and 21st Bit is ON

            
*/
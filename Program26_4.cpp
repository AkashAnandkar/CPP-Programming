/*

        Write a program which checks wheather 7th ,8th and 9th bit is ON or OFF

*/


#include<iostream>

using namespace std;
typedef unsigned int UNIT;



bool CheckBit(UNIT iNo)
{
    UNIT iResult=0;
    UNIT iMask=0x1C0;

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
        cout<<"7th ,8thth and 9th bit of given number is ON"<<"\n";
    }
    else
    {
        cout<<"7th ,8th and 9th  bit of given number is OFF"<<"\n";
    }
    return 0;
}

/*
                    TestCase

            1 4 5 5 1 0 2 = 7th ,8th and 9th Bit is ON

            
*/
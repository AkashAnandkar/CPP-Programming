/*

        Write a program which checks wheather 15th bit is ON or OFF.

        

*/

#include<iostream>

using namespace std;

typedef unsigned int UNIT;

bool CheckBit(UNIT iNo)
{
    UNIT iResult=0;
    UNIT iMask=0x4000;

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

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    bRet=CheckBit(iValue);

    if((bRet==true))
    {
        cout<<"15th bit of given number is ON"<<"\n";
    }
    else
    {
        cout<<"15th bit of given number is OFF"<<"\n";
    }



    return 0;
}

/*
                    TestCase

            5 8 6 4 7 8 3= 15th Bit is ON
*/
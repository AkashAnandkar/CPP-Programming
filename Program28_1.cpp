/*

        Write a program which accept one number and position from user and check wheather bit at that position
        is ON or OFF.If bit is ON return true otherwise return false.

*/


#include<iostream>
using namespace std;
 typedef unsigned int UINT;

 bool CheckBit(UINT iNo ,int iPos)
 {

    UINT iMask=0x00000001;
    UINT iResult=0;

    iMask= iMask <<(iPos-1);
    
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

    UINT iValue=0;
    int iBit=0;

    bool bRet=false;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position : "<<"\n";
    cin>>iBit;

    bRet= CheckBit(iValue,iBit);

    if((bRet==true))
    {
        cout<<"Bit is ON ."<<"\n";

    }
    else
    {
        cout<<"Bit is OFF."<<"\n";
    }


    return 0;
 }

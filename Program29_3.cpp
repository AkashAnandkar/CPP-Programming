/*

       Write a program which accept one number from user and check wheather 9th or 12 th bit is ON or  OFF;

*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask1=0x00000001;
    UINT iMask2=0x00000001;
    UINT iMask=0;

    int iPos1=9;
    int iPos2=12;

    iMask1=iMask1<<(iPos1-1);
     iMask2=iMask2<<(iPos2-1);

     iMask= iMask1 | iMask2;
     
     iResult= iNo & iMask;
    if((iResult==iMask1))  //Bit is ON
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
    bool  bRet=false;

    cout<<"Enter the  Number : "<<"\n";
    cin>>iValue;

    bRet= CheckBit(iValue);
    
    if((bRet==true))
    {
        cout<<"9th and 12 th bit is ON"<<"\n";
    }
    else
    {
        cout<<"Bits are OFF"<<"\n";
    }

   

    return 0;
}
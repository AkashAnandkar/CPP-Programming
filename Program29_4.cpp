/*

       Write a program which accept one number and two postions from user and check at first or bit at second position is ON or OFF
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo ,int iPos1,int iPos2)
{
    UINT iResult=0;
    UINT iMask1=0x00000001;
    UINT iMask2=0x00000001;
    UINT iMask=0;

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
    int iBit1=0;
    int iBit2=0;
    bool bRet=false;

    cout<<"Enter the  Number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the first bit position : "<<"\n";
    cin>>iBit1;

    cout<<"Enter the second bit Position : "<<"\n";
    cin>>iBit2;

    bRet= CheckBit(iValue,iBit1,iBit2);
    
    if((bRet==true))
    {
        cout<<"Bit is ON"<<"\n";
    }
    else
    {
        cout<<"Bits are OFF"<<"\n";
    }

   

    return 0;
}
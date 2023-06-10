/*
        Check Nth and Nth  bit is  ON or OFF.
*/


#include<iostream>

using namespace std;
typedef unsigned int UNIT;

bool CheckBit(UNIT iNo,UNIT iPos1,UNIT iPos2)
{
    UNIT iMask1=0x00000001;
    UNIT iMask2=0x000000001;
    UNIT iMask=0x00000000;
    UNIT iResult=0;
    if(((iPos1<1)||(iPos1>32))||((iPos2<0)||(iPos2>32)))
    {
        cout<<"Invalid Input"<<"\n";     //Filter
        return false;
    }
    iMask1=iMask1<<(iPos1-1);

    iMask2=iMask2<<(iPos2-1);

    iMask = iMask1 |iMask2;

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

      UNIT iValue=0;
      UNIT iBit1=0;
      UNIT iBit2=0;
    bool bRet=false;
    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    cout<<"Enter the  first bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit1;

     cout<<"Enter the  second bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit2;

    bRet=CheckBit(iValue,iBit1,iBit2);

    if(bRet==true)
    {
        cout<<"Bit is  ON"<<"\n";
    }
    else
    {
        cout<<"Bit is  OFF"<<"\n";
    }

    


    return 0;
}
/*
        Check Nth bit is  ON or OFF.
*/


#include<iostream>

using namespace std;
typedef unsigned int UNIT;

bool CheckBit(UNIT iNo,UNIT iPos)
{
    UNIT iMask=0x00000001;
    UNIT iResult=0;
    if((iPos<1)||(iPos>32))
    {
        cout<<"Invalid Input"<<"\n";     //Filter
        return false;
    }
    iMask=iMask<<(iPos-1);
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
      UNIT iBit=0;
    bool bRet=false;
    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit;

    bRet=CheckBit(iValue,iBit);

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
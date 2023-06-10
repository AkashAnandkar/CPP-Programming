/*
        Accept number and OFF the 7th bit of number and return the modified number.
*/


#include<iostream>

using namespace std;
typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo)
{
    UNIT iMask=0x00000040;
    UNIT iResult=0;

    iResult=iNo & iMask;

    if((iResult==iMask))  //Bit is ON
    {
        return  (iNo ^ iMask);
        
    }
    else   //Bit is OFF
    {
        return iNo;

    }


}


int main()
{

      UNIT iValue=0;
     
    UNIT iRet=0;
    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    iRet=OffBit(iValue);
    cout<<"Modified Number  is :"<<iRet<<"\n";

    


    return 0;
}
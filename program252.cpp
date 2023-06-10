/*
        Accept number and OFF the N th bit of number and return the modified number.
*/


#include<iostream>

using namespace std;
typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo,UNIT iPos)
{
    UNIT iMask=0x00000001;
    UNIT iResult=0;
    iMask=iMask<<(iPos-1);
    iMask=~iMask;

    iResult=iNo & iMask;
    return iResult;



}


int main()
{

      UNIT iValue=0;
      UNIT iBit=0;
     
    UNIT iRet=0;
    cout<<"Enter number :"<<"\n";
    cin>>iValue;
    cout<<"Enter the position of bit : "<<"\n";
    cin>>iBit;
    iRet=OffBit(iValue,iBit);
    cout<<"Modified Number  is :"<<iRet<<"\n";

    


    return 0;
}
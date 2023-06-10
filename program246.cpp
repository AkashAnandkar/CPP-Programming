/*
        Accept number and toggle the 7th bit of number and return the modified number.
*/


#include<iostream>

using namespace std;
typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo)
{
    UNIT iMask=0x00000040;
    UNIT iResult = 0;

    iResult =iNo ^ iMask;
    return iResult;


}


int main()
{

      UNIT iValue=0;
     
    UNIT iRet=0;
    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    iRet=ToggleBit(iValue);
    cout<<"Modified Number  is :"<<iRet<<"\n";

    


    return 0;
}
/*

       Write a program which accept one number from user and off 7th and 10 th bit off that number .
       Return modified number. 

*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask1=0x00000001;
    UINT iMask2=0x00000001;
    UINT iMask=0;
    
    int iPos1=7;
    int iPos2=10;

    iMask1= iMask1 <<(iPos1-1);
    iMask2=iMask2<<(iPos2-1);

    iMask=iMask1 | iMask2;

    iResult=iNo & iMask;

    if((iMask==iNo))   // If Bit is ON
    {
        return (iNo ^  iMask);
    }
    else
    {
        return iNo;    // If Bit is already OFF        
    }

}


int main()
{
    UINT iValue=0;
    UINT iRet=0;

    cout<<"Enter the  Number : "<<"\n";
    cin>>iValue;

    iRet= OffBit(iValue);

   cout<<"Modified value is : "<<iRet<<"\n";

    return 0;
}
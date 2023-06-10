/*

       Write a program which accept one number from user and On its first 4 bits.
       Return modified number. 

*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ONBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask1=0x0000000F;

    iResult= iNo & iMask1;
    if((iResult==iMask1))  //Bit is ON
    {
        return iNo;
    }
    else
    {
        return (iNo ^ iMask1);
    }
    

}


int main()
{
    UINT iValue=0;
    UINT iRet=0;

    cout<<"Enter the  Number : "<<"\n";
    cin>>iValue;

    iRet= ONBit(iValue);

   cout<<"Modified value is : "<<iRet<<"\n";

    return 0;
}
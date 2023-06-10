/*

        Write a program which accept one number and position from user and Toggle thay bit.
        Return modified number.

*/


#include<iostream>
using namespace std;
 typedef unsigned int UINT;

 UINT OnBit(UINT iNo ,int iPos)
 {

    UINT iMask=0x00000001;
    UINT iResult=0;

    iMask= iMask <<(iPos-1);
    
    iResult= iNo ^ iMask;
    return iResult;

    


 }

 int main()
 {

    UINT iValue=0;
    int iBit=0;

    UINT iRet=false;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position : "<<"\n";
    cin>>iBit;

    iRet= OnBit(iValue,iBit);

    cout<<"Modified Number is : "<<iRet<<"\n";


    return 0;
 }

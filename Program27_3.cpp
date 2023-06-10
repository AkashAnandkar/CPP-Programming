/*

       Write a program which accept one number from user and toogle 7th bit off that number .
       Return modified number. 

*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask=0x00000001;


    
    int iPos1=7;
    int iPos2=10;

    iMask= iMask <<(iPos1-1);


    iResult=iNo ^ iMask;
    return iResult;


}


int main()
{
    UINT iValue=0;
    UINT iRet=0;

    cout<<"Enter the  Number : "<<"\n";
    cin>>iValue;

    iRet= ToggleBit(iValue);

   cout<<"Modified value is : "<<iRet<<"\n";

    return 0;
}
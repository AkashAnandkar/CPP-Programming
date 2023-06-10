/*

        Write a program which accept one number from user and off 7th bit of that number if it is ON.
        Return modified number.

*/


#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT OffBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask=0x40;
    bool bFlag=false;
    int iPos=7;
    

    iResult= iNo & iMask;

    if((iResult==iMask))
    {
        bFlag=true;
    }

    if((bFlag==true))
    {
        
       return (iNo &(~(1<<(iPos-1)))); 
        

    }
    



}

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    iRet=OffBit(iValue);

    if((iRet==iValue))
    {
        cout<<"7th bit is already off"<<"\n";
    }
    else
    {
        cout<<"Modified number after making 7th bit off is :"<<iRet<<"\n";
    }

    return 0;
}
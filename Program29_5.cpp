/*

       Write a program which accept one number from user and range of positions from user.
        Toggle all bits from that number.
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT  CheckBit(UINT iNo ,int iPos1,int iPos2)
{

    int iresult = iNo;
    int i=0;
    for ( i = iPos1; i <= iPos2; i++) {
 
        
        if ((iNo & (1 << (i - 1))) != 0) {
 
        
            iresult = iresult ^ (1 << (i - 1));
        }
 
        
        else {
            
            iresult = iresult | (1 << (i - 1));
        }
    }
    return iresult;
}
 






int main()
{
    UINT iValue=0;
    int iStart=0;
    int iEnd=0;
    UINT iRet=false;

    cout<<"Enter the  Number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the first bit position : "<<"\n";
    cin>>iStart;

    cout<<"Enter the second bit Position : "<<"\n";
    cin>>iEnd;

    iRet= CheckBit(iValue,iStart,iEnd);
    
    cout<<"Modified Number is "<<iRet<<"\n";

    return 0;
}
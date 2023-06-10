/*

       Write a program which accept one number from user and count number of ON(1)bits in it. 

*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnBitsN(UINT iNo)
{
    UINT iCnt=0;

    while((iNo!=0))
    {
        if(iNo & 1 == 1)
        {
            iCnt++;
        }
        iNo= iNo >> 1;   //for right shigting
    }
    return iCnt;
}
int main()
{
    UINT iValue=0;
    UINT iRet=0;

    cout<<"Enter the  Number : "<<"\n";
    cin>>iValue;

    iRet=OnBitsN(iValue);

   cout<<"Number of ON bits is : "<<iRet<<"\n";

    return 0;
}
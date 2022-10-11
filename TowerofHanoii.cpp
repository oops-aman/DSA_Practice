#include<bits/stdc++.h>
using namespace std;
void towerofHanoii(int n,char a,char b,char c)
{
    if(n==0)
    {
        return;
    }
    towerofHanoii(n-1,a,c,b);
    cout<<"Move disk "<<n<<"from rod "<<a<<"to rod "<<b<<endl;
    towerofHanoii(n-1,c,b,a);
}
int main()
{
    int n;
    cout<<"Enter number of disks"<<endl;
    cin>>n;
    towerofHanoii(n,'a','b','c');
    return 0;
}
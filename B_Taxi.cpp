#include<bits/stdc++.h>
using namespace std;
#define lo long long
#define ff(i,a,b) for(int i=a;i<b;i++)
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
  ios::sync_with_stdio(0);
     cin.tie(0);
     lo k,i,c1=0,c2=0,c3=0,c4=0,c22;
    cin>>k;
    lo arr[k],s=0;
    ff(i,0,k)
       cin>>arr[i];
    ff(i,0,k)
    {
        if(arr[i]==4)
           c4++;
        else if(arr[i]==3)
           c3++;
        else if(arr[i]==2)
           c2++;
        else if(arr[i]==1)
           c1++;
    }
    if(c2%2==0)
       c22=c2/2;
    else
       c22=(c2/2)+1;
    lo t=c2*2-(c3-c1),ex;
    if(t%4==0)
       ex=t/4;
    else
       ex=(t/4)+1;

    if(c3-c1>=0)
      cout<<c4+c3+c22;
    else if(c3-c1<0)
      cout<<c4+c3+ex;
return 0;
}
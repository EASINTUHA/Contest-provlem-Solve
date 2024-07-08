#include <bits/stdc++.h>
using namespace std;
int n;
int A[277777];
int B[277777];
int C[277777];
int S1[277777];
int S2[277777];
int S3[277777];
int p;
int flag=false;
int la,ra,lb,rb,lc,rc;
void check(int a[],int b[],int c[],int n1,int n2,int n3)
{
    if(flag)
    {
        return;
    }
    int l=1,r=n;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(a[mid]>=p)
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    int pos1=l+1;
    l=pos1,r=n;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(b[mid]-b[pos1-1]>=p)
        {
            r=mid;
        }
        else
        {
            l=++mid;
        }
    }
    int pos2=l+1;
    if(c[n]-c[pos2-1]>=p && pos2<=n)
    {
        flag=true;
        if(n1==1)
        {
            la=1,ra=pos1-1;
        }
        if(n1==2)
        {
            lb=1,rb=pos1-1;
        }
        if(n1==3)
        {
            lc=1,rc=pos1-1;
        }
        if(n2==1)
        {
            la=pos1;
            ra=pos2-1;
        }
        if(n2==2)
        {
            lb=pos1,rb=pos2-1;
        }
        if(n2==3)
        {
            lc=pos1,rc=pos2-1;
        }
        if(n3==1)
        {
            la=pos2;
            ra=n;
        }
        if(n3==2)
        {
            lb=pos2,rb=n;
        }
        if(n3==3)
        {
            lc=pos2,rc=n;
        }
        // cout<<1<<" "<<pos1-1<<" "<<pos1<<" "<<pos2-1<<" "<<pos2<<" "<<n<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        la=0,ra=0,lb=0,rb=0,lc=0,rc=0;
        flag=false;
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
            S1[i]=S1[i-1]+A[i];
            sum=sum+A[i];
        }
        p=sum/3;
        if(sum%3>0)
        {
            p++;
        }
        for(int i=1;i<=n;i++)
        {
            cin>>B[i];
            S2[i]=S2[i-1]+B[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>C[i];
            S3[i]=S3[i-1]+C[i];
        }
        check(S1,S2,S3,1,2,3);
        check(S1,S3,S2,1,3,2);
        check(S2,S1,S3,2,1,3);
        check(S2,S3,S1,2,3,1);
        check(S3,S1,S2,3,1,2);
        check(S3,S2,S1,3,2,1);
        if(flag)
        {
            cout<<la<<" "<<ra<<" "<<lb<<" "<<rb<<" "<<lc<<" "<<rc<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
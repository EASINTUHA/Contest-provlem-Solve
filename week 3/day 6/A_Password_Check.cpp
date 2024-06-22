#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
	cin>>s;
	int flag1=false,flag2=false,flag3=false;
	if(s.length()>=5)
	{
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z' && flag1==0)
            {
                flag1=true;
            }
            else if(s[i]>='a' && s[i]<='z' && flag2==0)
            {
                flag2=true;
            }
            else if(s[i]>='0'  && s[i] <='9' && flag3==0)
            {
                flag3=true;
            }
            if(flag1==true && flag2==true && flag3==true)
                break;
        }
	}
	if(s.length()>4 && flag1==true && flag2==true && flag3==true)
	{
        cout<<"Correct";
    }
	else
	{
        cout<<"Too weak";
    }
    return 0;
}
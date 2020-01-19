#include<bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    
    while(cin>>inp)
    {
    string s="#";
    for(int i=0;i<inp.length();i++)
    {
        s+=inp[i];
        s+='#';
    }
    int len=s.length();
    vector<int> manacher(len);
    int centre=0,r=0,mirror;
    for(int i=1;i<len;i++)
    {
        mirror=2*centre-i;
        if(i<=r)
        {
            manacher[i]=min(r-i,manacher[mirror]);
        }
        while(i+1+manacher[i]<=len-1 && i-1-manacher[i]>=0 && s[i+1+manacher[i]]==s[i-1-manacher[i]])
        manacher[i]++;
        if(i+manacher[i]>r)
        {
            centre=i;
            r=i+manacher[i];
        }
    }
    
    int maxlen=0;
    for(int i=1;i<len;i++)
    {
        if(i+manacher[i]==len-1 &&manacher[i]>=maxlen)
        {
            maxlen=manacher[i];
            centre=i;
        }
    }
    string appenstr="";
    string fin=inp;
    // cout<<inp.substr((centre-maxlen)/2,maxlen)<<endl;
    if(maxlen==inp.length())
    cout<<inp<<endl;
    else
    {
        for(int i=(centre-maxlen)/2-1;i>=0;i--)
        fin+=inp[i];
        cout<<fin<<endl;
    }
    
    
    }
    return 0;
}

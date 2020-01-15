/*Given an array of integers where every integer occurs three times except for one integer,
which only occurs once, find and return the non-duplicated integer.
For example, given [6, 1, 3, 3, 3, 6, 6], return 1. Given [13, 19, 13, 13], return 19.
Do this in O(N) time and O(1) space.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,n,sum_of_ith_bit,result=0,x,max=INT_MIN;
  vector<int> v;
  cin>>n;
  cout<<"n"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    v.push_back(a);
    if(a>max)
    max=a;
  }
  // cout<<"Nubers entered\n";
  int bits=0;
  while(max!=0)
  {
    max=max/2;
    bits++;
  }
  for(int i=0;i<bits;i++)
  {
    // cout<<i<<endl;
    sum_of_ith_bit=0;
    x=(1<<i);
    for(int j=0;j<n;j++)
    {
      if(v[j]&x)
      sum_of_ith_bit++;
    }
    if(sum_of_ith_bit%3)
    result=result|x;
  }
cout<<"Unique value :";
cout<<result<<endl;



  return 0;
}

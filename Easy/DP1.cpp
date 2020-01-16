/*Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.*/


#include<bits/stdc++.h>
using namespace std;
/* Brute force O(n^2)
int main()
{

  int n,number,k;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    cin>>number;
    v.push_back(number);
  }

  cin>>k;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(v[i]+v[j]==k)
      {
        cout<<"True";
        exit(0);
      }
    }
  }
  cout<<"False";
  return 0;
}*/

//O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a;
  vector<int>v;
  unordered_set<int> m;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    v.push_back(a);
  }
  int k,diff;
  cin>>k;
  for(int i=0;i<n;i++)
  {
    diff=k-v[i];
    if(m.find(diff)!=m.end())
    {
      cout<<"True"<<endl;
      exit(0);
    }
    m.insert(v[i]);
  }
  cout<<"False"<<endl;
  return 0;
}

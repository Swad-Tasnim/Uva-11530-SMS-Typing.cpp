
#include <bits/stdc++.h>
#define ll unsigned long long int
#define M   10000000



using namespace std;
int main()
{


      ll c,cn;
      string k[9]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"," "};
      cin>>cn;
       string s;
            getline(cin,s);
            ll i=1;
      while(cn--)
      {   getline(cin,s);
      c=0;
      for(ll i=0; i<s.length(); i++)
      {
            for(ll j=0; j<9; j++)
            {
                  for(ll l=0; l<k[j].length(); l++)
                  {
                        if(s[i]==k[j][l])
                              {c+=l+1;
                                //cout<<l+1<<endl;
                              }
                  }
            }
      }

      cout<<"Case #"<<i<<": "<<c<<"\n";
      i++;
      }
}



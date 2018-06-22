#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int  main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int c1=0,c2=0;
        int n;
        cin>>n;
        string str1="",str2="";
        string str;
        for(int i=0;i<n;i++)
        {
           cin>>str;
           if(str1=="")
           {
               str1=str;
               c1++;
           }
           else if(str==str1)
           {
               c1++;
           }
           else if(str2=="")
           {
               str2=str;
               c2++;
           }
           else
           {
               c2++;
           }
        }
        if(c1>c2)
        {
           cout<<str1;
        }
        else if(c1<c2)
        {
            cout<<str2;
        }
        else
        {
            cout<<"Draw";
        }
        cout<<"\n";
    }
    return 0;
}

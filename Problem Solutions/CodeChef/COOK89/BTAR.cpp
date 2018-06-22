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
        int n;
        cin>>n;
        ll steps=0;
        int one=0;
        int two=0;
        int three=0;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            num=num%4;
            if(num==1)
                one++;
            else if(num==2)
                two++;
            else if(num==3)
                three++;
        }
        steps+=two/2;
        two=two%2;
        if(one>three)
        {
            steps+=three;
            one = one-three;
            three = 0;
            steps+=(one/4)*3;
            one=one%4;
            if(one==2&&two==1)
            {
                steps+=2;
                one=0;
                two=0;
            }
        }
        else
        {
            steps+=one;
            three=three-one;
            one = 0;
            steps+=(three/4)*3;
            three=three%4;
            if(three==2&&two==1)
            {
                steps+=2;
                three=0;
                two=0;
            }
        }
        if(one==0&&two==0&&three==0)
            cout<<steps<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}

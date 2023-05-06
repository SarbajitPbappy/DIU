#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    map<string,int>marks;
    while (q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            string name;
            int x;
            //marks.insert({name,x});
            cin>>name>>x;
            if (marks.find(name)!=marks.end())
            {
                marks[name]+=x;
            }
            else
            {
                marks.insert({name,x});
            }
            
        }
        else if(type==2)
        {
            string nm;
            cin>>nm;
            marks.erase({nm});
        }
        else if(type==3)
        {
            string name;
            cin>>name;
            if (marks.find(name)!=marks.end())
            {
                cout<<marks[name]<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
    

    return 0;
}
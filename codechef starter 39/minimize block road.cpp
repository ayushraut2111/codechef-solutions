#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int kanxanns;
    cin>>kanxanns;
    while(kanxanns--)
    {
       int nauisj,nsakcjnsa;
       cin>>nauisj>>nsakcjnsa;
       nsakcjnsa=nauisj-nsakcjnsa;
       vector<vector<int>>ckjna(nauisj);
       set<pair<int,int>> hscbascsab;
       for(int i=0;i<nauisj-1;i++)
       {
           int u,v,x;cin>>u>>v>>x;
           u--;
           v--;
           if(x==true)
           {
               hscbascsab.insert({min(u,v),max(u,v)});
           }
           ckjna[u].push_back(v);
           ckjna[v].push_back(u);
       }
       vector<int> jsnsak(nauisj);
       auto skjcsjcnsakc=[&](int u,int laksbcnm,const auto &skjcsjcnsakc)-> void
       {
           jsnsak[u]=1;
           for(int v:ckjna[u])
           { //. 💕💕💕💕💕💕💕💕❤️❤️❤️❤️❤️❤️❤️❤️👌🤣😂
               if(v!=laksbcnm)
               {
                   skjcsjcnsakc(v,u,skjcsjcnsakc);
                   jsnsak[u]+=jsnsak[v];
               }
           }
       };
       skjcsjcnsakc(0,-1,skjcsjcnsakc);
       multiset<int,greater<int>>lasuc;
       auto lsbxsklsa=[&](int u,int laksbcnm,const auto &lsbxsklsa)->void
       {
           for(int v:ckjna[u])
           {
               if(v!=laksbcnm)   //😒😒😒😒😒😒😒😒😒
               {
                   if(hscbascsab.find({min(u,v),max(u,v)})!=hscbascsab.end())
                   {
                       lasuc.insert(jsnsak[v]);
                   }
                   else
                   lsbxsklsa(v,u,lsbxsklsa);
               }
           }
       };
       lsbxsklsa(0,-1,lsbxsklsa);
       int vbsakjn=0;
       for(int x:lasuc)
       {
           if(nsakcjnsa<=0)
           {
               break;

           }
           nsakcjnsa-=x;
           vbsakjn++;
       }
       if(nsakcjnsa>0)
       cout<<-1<<endl;
       else
       cout<<vbsakjn<<endl;
    }
}
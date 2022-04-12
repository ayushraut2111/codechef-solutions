// #include<bits/stdc++.h>
// using namespace std;
// void brokenlife(string s,int n,string a,int m)
// {
//     string s1(n,0);
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(s[j]=='?')
//             {
//                 s1[j]=char(i+'a');
//             }
//             else
//             s1[j]=s[j];
//         }
//     }
//     int count=0;
//     int k=0;
//     for(int i=0;i<m;i++)
//     {
//         for(int j=k;j<n;j++)
//         {
//             if(a[i]==s[j])
//             {
//                 count++;
//                 k=j;
//             }
//         }
//     }
//     if(count==m)
//     cout<<-1<<endl;
//     else
//     cout<<s1<<endl;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//     int n,m;
//     cin>>n>>m;
//     string s,a;
//     cin>>s>>a;
//     brokenlife(s,n,a,m);
//     }
    
// }

#include <bits/stdc++.h>
using namespace std;
void brokenlife(string s,string t,int n,int m)
{
    bool ok1=false;
    for(char i='a';i<'f';i++){ 
        int k=0;
        string s1(s.size(),0); 
        for(int j=0;j<s.size();j++){ 
            if(s[j]=='?'){ 
                s1[j]=i; 
            } 
            else{ 
                s1[j]=s[j];  
            } 
            if(s1[j]==t[k] and k < m){
                    k++;
            }
        }
        if(k!=m){ 
            cout<<s1<<endl; 
            ok1=true;
            break; 
        } 
    } 
    if(!ok1)
    cout<<-1<<endl; 
    }

int main() {
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m; 
    string s,a;
    cin>>s>>a; 
    brokenlife(s,a,n,m);
}
}
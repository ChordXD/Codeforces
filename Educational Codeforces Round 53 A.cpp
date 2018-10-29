
 #include<bits/stdc++.h>
using namespace std;

int main(void)
{
   string a;
   int n;
   cin>>n;
   cin>>a;
   for(int i = 0 ; i < n - 1 ; i++)
   {
        if(a[i]!=a[i+1])
        {
            cout<<"YES"<<endl;
            cout<<a.substr(i,2);
            return 0;
        }
   } 
   cout<<"NO"<<endl;
   //system("pause");
   return 0;
}
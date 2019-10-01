#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string sa,sb;
        cin>>sa>>sb;
        ll a=0;
		ll b=0;
        ll n=sa.length();
		ll m=sb.length();
        for(ll i=0;i<sb.length();i++){
            if(sb[i]=='b'){
            	b++;
			}
            else{
           	 	a++;
			}
        }
        
        for(ll i=0;i<sa.length();i++){
            if(sa[i]=='b'){
            	b--;
			}
            else{
            	a--;
			}
        }
        
        ll flag = 1;
        if(a<0 || b<0){
            flag=0;
        }
        
        if(flag==0){
            cout<<"Impossible"<<endl;
        }
        
        else{
            string str=sa;
            while(a){
                ans='a'+ans;
                a--;
            }
            while(b){
                ans=ans+'b';
                b--;
            }
            cout<<ans<<endl;
        }
    }
    vector <ll> v;
    v.push_back(0);
    return 0;
}

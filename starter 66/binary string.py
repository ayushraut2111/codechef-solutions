
# int main() {
# 	int t;
# 	cin>>t;
# 	while(t--){
# 	    string str;
# 	    cin >> str;
	    
# 	    int n = str.size();
# 	    if(str[0] == str[n-1]){
# 	    	cout<<n-2<<endl;
# 		}
# 		else{
# 			cout<<2<<endl;
# 		}
# 	}
# 	return 0;
# }

for _ in range(int(input())):
    s=input()
    n=len(s)
    if s[0]==s[n-1]:
        print(n-2)
    else:
        print(2)

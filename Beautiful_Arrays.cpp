#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	while(num--){
	    int len_arr;
	    cin>>len_arr;
	    int arr[len_arr],gre=0,zero=0,min=0,one=0;
	    for(int i=0;i<len_arr;i++){
	        cin>>arr[i];
	        if(arr[i]==0) zero++;
	        else if(arr[i]==-1) min++;
	        else if(arr[i]==1) one++;
	        else gre++;
	    }
	    if(gre>1) cout<<"no"<<endl;
	    else if(min>1 && one==0) cout<<"no"<<endl;
	    else if(gre==1 && min>=1) cout<<"no"<<endl;
	    else cout<<"yes"<<endl;
	}
	
	return 0;
}

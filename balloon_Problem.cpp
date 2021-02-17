#include<bits/stdc++.h>
using namespace std;

class cost_of_balloons{
	public:
	int solution(int grn,int pur,int part){
		int first=0;
		int second=0;
		int ist,nd;
		for(int i=0;i<part;i++){
			cin>>ist>>nd;
			if(ist==1)
			    first++;
			if(nd==1)
				second++;
		}
		if( (first*grn + second*pur) < (first*pur + second*grn)  )
		    return (first*grn + second*pur);
		else
			return (first*pur + second*grn);
		return 0;		
	}
};

int main(){
	int limit;
	cin>>limit;
	int grn_bal,pupl_bal;
	int part;
	cost_of_balloons mem1;
	for(int i=0;i<limit;i++){
		cin>>grn_bal>>pupl_bal;
		cin>>part;
		cout<<mem1.solution(grn_bal,pupl_bal,part)<<endl;
	}
}

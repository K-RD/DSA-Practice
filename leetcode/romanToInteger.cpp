#include<iostream>
using namespace std;

int romanToInt(string s){
	int sum=0;
	string temp=s;
	while(temp!=""){
		if(temp[0]=='I' && temp[1]=='V'){
			sum+=4;
			temp.erase(0,2);
		}else if(temp[0]=='I' && temp[1]=='X'){
			sum+=9;
			temp.erase(0,2);
		}else if(temp[0]=='X' && temp[1]=='L'){
			sum+=40;
			temp.erase(0,2);
		}else if(temp[0]=='X' && temp[1]=='C'){
			sum+=90;
			temp.erase(0,2);
		}else if(temp[0]=='C' && temp[1]=='D'){
			sum+=400;
			temp.erase(0,2);
		}else if(temp[0]=='C' && temp[1]=='M'){
			sum+=900;
			temp.erase(0,2);
		}else if(temp[0]=='I'){
			sum+=1;
			temp.erase(0,1);
		}else if(temp[0]=='V'){
			sum+=5;
			temp.erase(0,1);
		}else if(temp[0]=='X'){
			sum+=10;
			temp.erase(0,1);
		}else if(temp[0]=='L'){
			sum+=50;
			temp.erase(0,1);
		}else if(temp[0]=='C'){
			sum+=100;
			temp.erase(0,1);
		}else if(temp[0]=='D'){
			sum+=500;
			temp.erase(0,1);
		}else if(temp[0]=='M'){
			sum+=1000;
			temp.erase(0,1);
		}
	}
	return sum;
}

int main(){
	string roman1 = "III";
	string roman2 = "LVIII";
	string roman3 = "MCMXCIV";

	cout<<roman1<<" : "<<romanToInt(roman1)<<endl;
	cout<<roman2<<" : "<<romanToInt(roman2)<<endl;
	cout<<roman3<<" : "<<romanToInt(roman3)<<endl;

	return 0;
}

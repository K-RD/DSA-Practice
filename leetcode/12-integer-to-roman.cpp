#include<iostream>
using namespace std;

class Solution{
	public:
	string intToRoman(int num){
		string roman = "";

		while(num/1000){
			roman = roman+"M";
			num = num - 1000;
		}
		
		if(num/900){
			roman += "CM";
			num -= 900;
		}
		if(num>=500){
			roman += "D";
			num -= 500;
			while(num/100){
				roman += "C";
				num -= 100;
			}
		}
		if(num >= 400){
			roman += "CD";
			num -= 400;
		}
		while(num/100){
			roman += "C";
			num -= 100;
		}
		
		if(num/90){
			roman += "XC";
			num -= 90;
		}
		if(num>=50){
			roman += "L";
			num -= 50;
			while(num/10){
				roman += "X";
				num -= 10;
			}
		}
		if(num >= 40){
			roman += "XL";
			num -= 40;
		}
		while(num/10){
			roman += "X";
			num -= 10;
		}


		if(num/9){
			roman += "IX";
			num -= 9;
		}
		if(num>=5){
			roman += "V";
			num -= 5;
			while(num/1){
				roman += "I";
				num -= 1;
			}
		}
		if(num >= 4){
			roman += "IV";
			num -= 4;
		}
		while(num/1){
			roman += "I";
			num -= 1;
		}
			

		return roman; 

	}
};

int main()
{
	Solution s;
	int num1 = 3;
	string res1 = s.intToRoman(num1);
	cout<<num1<<"\t"<<res1<<endl;

	int num2 = 58;
	string res2 = s.intToRoman(num2);
	cout<<num2<<"\t"<<res2<<endl;

	int num3 = 1994;
	string res3 = s.intToRoman(num3);
	cout<<num3<<"\t"<<res3<<endl;

	int num4 = 3999;
	string res4 = s.intToRoman(num3);
	cout<<num4<<"\t"<<res4<<endl;

	return 0;
}



#include<iostream>
using namespace std;

int main(){
	pair<int, int> p;
	p.first=10;
	p.second=20;

	cout<<"p.first is "<< p.first<<" "<<"p.second is"<<p.second<<endl;

	// using make_pair function to create a new pair;
	pair<string, int> student1;
	student1 = make_pair("robind", 20);
	cout<<"student1.first is "<< student1.first<<" "<<"student1.second is"<<student1.second<<endl;

	// Using pair array to store students name and age.
	// int n;
	// cout<<"Enter the number of students :";
	// cin>> n;
	// pair<string, int> student[n];

	// cout<<"Enter the name od student followed by their age"<<endl;

	// for(int i=0;i<n;i++){
	// 	string s;
	// 	cin>>s;
	// 	int age;
	//	cin>>age;
	//	student[i]=make_pair(s, age);
	//}

	// for(int i=0;i<n;i++){
	//	cout<<"Name : "<< student[i].first << "\t\t"<<" age : "<<student[i].second<<endl;
	// }
	// return 0;
	
	// Using pairs inside vector to store multiple pairs.
	vector < pair < int, string > > prof;
	
insertNewProf:
	cout<<"\nAge : ";
	int age;
	cin>> age;
	
	cout<< "\nName : ";
	string name;
	cin>> name;

	pair< int, string> tempProf;
	tempProf = make_pair(age, name);
	prof.push_back(tempProf);

	cout<<endl<<"Do you wish to insert a new professor in the list \n type 0 for No other for yes ::";
	int opt;
	cin>> opt;
	if(opt){
		goto insertNewProf;
	}

	cout<<endl<<"printing the list of all the prof"<<endl;

	for(int i=0;i<prof.size();i++){
		cout<<"Name : "<<prof[i].second<<"\t\t"<<"Age : "<<prof[i].first<<endl;
	}

	return 0;
}

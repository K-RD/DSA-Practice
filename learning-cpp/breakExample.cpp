#include <iostream>
using namespace std;

int main() {
	for(int i=0;i<10;i++){
	    std::cout << "i:: " <<i<< std::endl;
	    
	    for(int j=0;j<10;j++){
	        std::cout << "\t"<< "j:: " <<j;
            if(i==j){
                break;
            }
	    }
	    std::cout << std::endl;
	}
	return 0;
}
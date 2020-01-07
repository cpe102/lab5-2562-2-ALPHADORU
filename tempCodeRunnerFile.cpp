#include<iostream>
#include<string>
using namespace std;

int main(){
	int N , i=0;
	std::cout << "Enter the number of student: ";
	std::cin >> N;
	
	string name[i];
	int age[i] ;
	while(i < N){
		std::cout << "Name of student = ";
	    std::cin >> name[i];
		std::cout << "Age of student = ";
		std::cin >> age[i];
		i++;
	}

	
	int key;
	std::cout << "--------------------------------------\n";
	std::cout << "Enter an age to search: ";
	std::cin >> key;
	std::cout << "--------------------------------------\n";
	while(i < N){
		if(age[i] = key){
			std::cout << name[i];
			i++;
		}
	}


	
	cout << "--------------------------------------\n";
	
	return 0;
}

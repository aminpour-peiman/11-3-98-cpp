#include<iostream>
#include<conio.h>
using namespace std;
main(){
	
	int n,counter=1,number,failed=0,passed=0;
	cin>>n;
	while(counter<=n){
		cin>>number;
		++counter;
		if(number>=0 &&number<10){
			++failed;
			
		}else if(number>=10 && number<20){
			
			++passed;
	}else if (number>20){
		cout<<"unknown";
	}
		
		
		
	}
	cout<<"passed"<<passed<<endl;
	cout<<"failed"<<failed<<endl;
}


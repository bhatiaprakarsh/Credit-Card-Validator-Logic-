#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>

using namespace std;

bool validcard(string input){
	
	vector<int> creditCardInt;
	//converting input to integer
	for(int i=0; i<input.length();i++){
		creditCardInt.push_back(input[i] - '0'); // minus 0 is used to char to interger value
	}
	
	for(int i=input.length(); i>=0; i=i-2){
		int temp = creditCardInt[i];
		temp = temp*2;
		if(temp>9){
			temp = temp % 10 + 1; 
		}
		creditCardInt[i] = temp;
	}
	
	int total = 0;
	
	for(int i=0; i<creditCardInt.size(); i++){
		total += creditCardInt[i];
	}
	
	if(total % 10 == 0){
		return true;
	}
	else{
		return false;
	}
	
}

int main()
{
	string number;
	getline(cin, number);
	cout<< validcard(number);
	
}
	
	
	
	
	
	/*
    int number[16];
    cout<<"enter the card number:";
    
    
    int num = atoi(number);
     cout<<num;
    //cout<< validcard(number);
    
    
    /*
    cout<<"your card number is:";
    for(int i=0;i<16;i++){
        cout<<number[i];;
    }9*/


#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string fucncheck(string x,string y){
	int i =0, L = x.size();
	string palindrome_text;
	while(i<L)
	{
		if(x[i] == y[i])
		{
			palindrome_text = "Yes";
			i++;
		}
		else
		{
			palindrome_text = "No";
			L = 0;
		}

	}
	return palindrome_text;


}

int main(){
	string inputtext;
	string reversetext;

    cout << "Input text: ";
	cin >> inputtext;
	reversetext = func1(inputtext);
    cout << "Reversed text: " << reversetext << "\n";

	inputtext = func2(inputtext);
	reversetext = func2(reversetext);

    cout << "Palindrome: " << fucncheck(inputtext,reversetext);
    return 0;
}

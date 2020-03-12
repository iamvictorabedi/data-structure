#include <iostream>
using namespace std;

class Seqeunce{
	private:
		
	public: int findSequence(int n){
		if(n==1){
			return 1;
		}else{
			return (n+ findSequence(n-1));
		}
	}
};

int main(){
	Seqeunce sq;
	int input, output;
	cout<< "Enter n: \n";
	cin>>input;
	output= sq.findSequence(input);
	cout<< "The value of n term is "<< output<<endl;
}

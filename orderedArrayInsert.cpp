#include<iostream>
using namespace std;
class arr {
	private:
	int x[5];
	
	public:
	void orderedInsert(){
		int val, j,z;
		cout<< "Enter numbers \n";
		for(int i = 0; i<5; i++){
			cin>>val;
			for(j =0; j<5; j++){
				if(val<x[j])
				break;
			}
			for(z= 0; z>j; z++){
				x[z] = x[z - 1];
			}
			x[z] = val;
		}
	}
};
int main(){
	arr arr1;
	arr1.orderedInsert();
	return 0;
}

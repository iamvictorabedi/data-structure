//linked list
#include <iostream>
using namespace std;
class link{
	private:
//	string name;
//	double cost;
	
	public:
		link *pnext;
		string name;
		double cost;
		link(string n, double c)//create link
				{
			name= n;
			cost =c;
			pnext=NULL;
		}
		//displays one link
		void display(){
		cout<< "{name: "<< name << "  cost: "<< cost<< "}->";
		}
};
class linkedList{
	private:
			link *pfirst;
			link *plast;

	public:
		linkedList()//create first link
		{
			pfirst = NULL;
			plast = NULL;
		}
		//creates a link and adds it to the list
		void insert(string name, double cost){
			link *pnewLink = new link(name, cost);
			pnewLink->pnext=pfirst;//make the new link pont at pfirst;
			pfirst= pnewLink;
		}
		//loops through all links displying the linked list
		void displayList(){
			link *pcurrent;
			pcurrent = pfirst;
			while(pcurrent!=NULL){
				
			pcurrent->display();
			pcurrent=pcurrent->pnext;// moves the content of the next list where the pointer is pointng to
			}
		}
		void pop(){
		//delete
		pfirst = pfirst->pnext;
		}
		
		int search(){
			link *pValue;
			string a;
			cout<< "\nEnter the name of the item your looking  for?\n";
			cin>> a;
			pValue = pfirst;
			while(pValue!=NULL){
				if(a == pValue->name){
					cout << a<< " Found!! \n";
					return 0;
				}else{
				pValue = pValue->pnext;
				}
			}
			cout<<a<< " Not Found!!";
		}
		
		void totalCost(){
			link *psum;
			double total;
			total = 0;
			psum = pfirst;
			while(psum!=NULL){
				total = total + psum->cost;
				psum = psum->pnext;
			}
			cout<< "Total Sum of cost = "<< total<<"\n";
		}
		
		int getExpensive(){
			//expensive items are above 1000
			link *pcurrent;
			pcurrent = pfirst;
			while(pcurrent!=NULL){
				if(pcurrent->cost >1000){
						pcurrent->display();
			pcurrent=pcurrent->pnext;
				}
			}
				return 0;
		}
		
		void orderedInsert(string a, double co){
			link *pnewlink = new link(a, co);
			link *pcurrent;
			link *pprev;
			pcurrent= pfirst;
			pprev=pfirst;
			while(pcurrent!=NULL){
				pprev = pcurrent;
				pcurrent = pcurrent->pnext;
			}
			if(pcurrent==pfirst){
			 pnewlink->pnext=pfirst;
			 pfirst=pnewlink;
			}else{
				pprev->pnext = pnewlink;
				pnewlink->pnext = pcurrent;
			}
		}
		
		void bubblesort(){
			link *pcurrent= pfirst;
			link *pafter = pcurrent->pnext;
			int out, in, n=4;
			for(out=0; out<4; out++){
				n--;
				for(in=0; in<4-out; in++){
					if(pcurrent->name > pafter->name){
						string tempname = pcurrent->name;
						double tempcost = pcurrent->cost;
						
						pafter->name= tempname;
						pafter->cost = tempcost;
					}
				}
			}
		}
		
		//error to debug
		void insertLast( string na, double co){
		 link *pnewlink = new link(na, co);
		 if(pfirst==NULL){
		 	pfirst = pnewlink;
		 }
		 	else{
		 	plast->pnext = pnewlink;
		 	plast = pnewlink;	
			 }
		}
		//error to debug
		void displayFirst(){
			link *pcurrent;
			pcurrent = pfirst;
			pcurrent->display();
		}
};
int main(){
	linkedList users;
	users.insertLast("John", 100.00);
	users.insertLast("Maila", 50.00);
	users.insertLast("Kimbo", 1000.00);
	users.insertLast("Onyango", 5000.00);
	users.insertLast("Simi", 8900.00);
	users.displayFirst();
		users.pop();
	users.displayFirst();
//
//	users.search();
//	users.totalCost();
//	users.getExpensive();
//	users.pop();
//
//	users.displayList();
//users.s
	
	return 0;
}

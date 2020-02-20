//linked list
#include <iostream>
using namespace std;
class link{
	private:
	string name;
	double cost;
	
	public:
		link *pnext;
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

	public:
		linkedList()//create first link
		{
			pfirst=NULL;
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
};
int main(){
	linkedList users;
	users.insert("John", 100.00);
	users.insert("Maila", 50.00);
	users.insert("Kimbo", 1000.00);
	users.insert("Onyango", 5000.00);
	users.insert("Simi", 8900.00);
	users.displayList();
	return 0;
}

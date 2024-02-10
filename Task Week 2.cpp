#include<iostream>
using namespace std;
struct data{
	string name;
	double payment;
	char pay;
	double meal_cost;
	double ticket_cost;
	double sum;
	double per_person_cost;
	double carer_cost;
};
data group1(int n) {
	struct data d;
	cout<<endl;
	cout<<"***Orignial cost for outing***"<<endl;
	cout<<"The cost of hiring coach for 10-16 senior ciztizens is 150$."<<endl;
	cout<<"The cost of meal per person is 14.00$."<<endl;
	cout<<"The cost of theatre ticket per person is 21.00$"<<endl;
	cout<<endl;
	cout<<"***Total cost for outing***"<<endl;
	cout<<"The cost of hiring coach is: 150$"<<endl;
	d.meal_cost=n*14.00;
	d.ticket_cost=n*21.00;
	cout<<"The cost of meal is: "<<d.meal_cost<<"$"<<endl;
	cout<<"The cost of theatre ticket is: "<<d.ticket_cost<<"$"<<endl;
	d.sum=d.meal_cost+d.ticket_cost+150;
	cout<<"The total cost is: "<<d.sum<<"$"<<endl;
	d.per_person_cost=d.sum/n;
	cout<<"The cost per person is: "<<d.per_person_cost<<"$"<<endl;
	d.carer_cost=d.per_person_cost*2;
	cout<<"The cost for taking 2 carers on outing is: "<<d.carer_cost<<"$"<<endl;
	
	return d;	
}
data group2(int n) {
	struct data d;
	cout<<endl;
	cout<<"***Orignial cost for outing***"<<endl;
	cout<<"The cost of hiring coach for 17-26 senior ciztizens is 190$."<<endl;
	cout<<"The cost of meal per person is 13.50$."<<endl;
	cout<<"The cost of theatre ticket per person is 20.00$"<<endl;
	cout<<endl;
	cout<<"***Total cost for outing***"<<endl;
	cout<<"The cost of hiring coach is: 190$"<<endl;
	d.meal_cost=n*13.50;
	d.ticket_cost=n*20.00;
	cout<<"The cost of meal is: "<<d.meal_cost<<"$"<<endl;
	cout<<"The cost of theatre ticket is: "<<d.ticket_cost<<"$"<<endl;
	d.sum=d.meal_cost+d.ticket_cost+190;
	cout<<"The total cost is: "<<d.sum<<"$"<<endl;
	d.per_person_cost=d.sum/n;
	cout<<"The cost per person is: "<<d.per_person_cost<<"$"<<endl;
	if(n>24 && n<=26) {
	d.carer_cost=d.per_person_cost*3;
	cout<<"The cost for taking 3 carers on outing is: "<<d.carer_cost<<"$"<<endl;
	} else {
	d.carer_cost=d.per_person_cost*2;
	cout<<"The cost for taking 2 carers on outing is: "<<d.carer_cost<<"$"<<endl;
	}
	return d;	
}
data group3(int n) {
	struct data d;
	cout<<endl;
	cout<<"***Orignial cost for outing***"<<endl;
	cout<<"The cost of hiring coach for 27-36 senior ciztizens is 225$."<<endl;
	cout<<"The cost of meal per person is 13.00$."<<endl;
	cout<<"The cost of theatre ticket per person is 19.00$"<<endl;
	cout<<endl;
	cout<<"***Total cost for outing***"<<endl;
	cout<<"The cost of hiring coach is: 225$"<<endl;
	d.meal_cost=n*13.00;
	d.ticket_cost=n*19.00;
	cout<<"The cost of meal is: "<<d.meal_cost<<"$"<<endl;
	cout<<"The cost of theatre ticket is: "<<d.ticket_cost<<"$"<<endl;
	d.sum=d.meal_cost+d.ticket_cost+225;
	cout<<"The total cost is: "<<d.sum<<"$"<<endl;
	d.per_person_cost=d.sum/n;
	cout<<"The cost per person is: "<<d.per_person_cost<<"$"<<endl;
	d.carer_cost=d.per_person_cost*3;
	cout<<"The cost for taking 3 carers on outing is: "<<d.carer_cost<<"$"<<endl;
	
	return d;	
}
data in_out(int n, double total_cost, double percost, double carercost) {
	
		cout<<endl;
	cout<<"***Enter the data of Citizens going on Outing***"<<endl<<endl;
		double sum=0;
 		struct data d[n];
	cin.ignore();
		for (int i=0; i<n; i++) {
		cout<<"Enter the name of citizen "<<i+1<<": ";
		getline (cin, d[i].name); 
		cout<<"Enter the payment "<<i+1<<": ";
		cin>>d[i].payment>>d[i].pay;
		sum+=d[i].payment;
		cout<<endl;
	cin.ignore();
		}
	
	double sum2=0;
	string choice;
	cout<<"Are there any additional citizens?"<<endl; 
	cout<<"Enter the choice(yes/no): ";
	cin>>choice;
	cout<<endl;
	if (choice=="yes") {
		cout<<"Enter the number of additional citizen: ";
		int a;
		cin>>a;
		cout<<endl;
	cin.ignore();
		for (int i=0; i<a; i++) {
		cout<<"Enter the name of citizen "<<i+1<<": ";
		getline (cin, d[i].name); 
		cout<<"Enter the payment "<<i+1<<": ";
		cin>>d[i].payment>>d[i].pay;
		sum2+=d[i].payment;
		cout<<endl;
	cin.ignore();	
	}
	cout<<"***The Given Data is***"<<endl<<endl;
		for (int i=0; i<n; i++) {
			cout<<"Data of Citizen "<<i+1<<": "<<endl;
			cout<<"Name of citizen: "<<d[i].name<<endl;
			cout<<"Payment of citizen: "<<d[i].payment<<d[i].pay<<endl;
			cout<<endl;
		}
			for (int i=0; i<a; i++) {
			cout<<"Data of Additional Citizen "<<i+1<<": "<<endl;
			cout<<"Name of citizen: "<<d[i].name<<endl;
			cout<<"Payment of citizen: "<<d[i].payment<<d[i].pay<<endl;
			cout<<endl;
		}
	double sum3=sum+sum2;
	double addpercost=percost*a;
	double updatecost=total_cost+addpercost;
	cout<<"***PAYMENT Detail and Profit/Loss***"<<endl<<endl;
	cout<<"The total payment paid by citizens: "<<sum<<"$"<<endl;
	cout<<"The total payment paid by additional citizens: "<<sum2<<"$"<<endl;
	cout<<"The total payment paid by citizens including additional citizen:  "<<sum3<<"$"<<endl;	
	cout<<"The original cost was: "<<total_cost<<"$"<<endl;
	cout<<"The updated total cost is: "<<updatecost<<"$"<<endl;
	cout<<"The carers cost is: "<<carercost<<"$"<<endl;
	if (updatecost<sum3){
		cout<<"The profit is: "<<sum3-updatecost-carercost<<"$"<<endl;
	} else {
		cout<<"The loss is: "<<-(sum3-updatecost-carercost)<<"$"<<endl;
	}
	
} else{

	cout<<"***The Given Data is***"<<endl<<endl;
		for (int i=0; i<n; i++) {
			cout<<"Data of Citizen "<<i+1<<": "<<endl;
			cout<<"Name of citizen: "<<d[i].name<<endl;
			cout<<"Payment of citizen: "<<d[i].payment<<d[i].pay<<endl;
			cout<<endl;
		}
	cout<<"***PAYMENT Detail and Profit/Loss***"<<endl<<endl;
	cout<<"The total payment paid by citizens:  "<<sum<<"$"<<endl; 
	cout<<"The original cost is: "<<total_cost<<"$"<<endl;
	cout<<"The carers cost is: "<<carercost<<"$"<<endl;

	
		if (total_cost<sum){
		cout<<"The profit is: "<<sum-total_cost-carercost<<"$"<<endl;
	} else {
		cout<<"The loss is: "<<-(sum-total_cost-carercost)<<"$"<<endl;
	}
		
}
}
int main () {
	int n;
	cout<<"***Welcome to the Club Organizing System***"<<endl<<endl;
	while (true) {
	cout<<"Enter the number of people going on outing including carers: ";
	cin>>n;
	data d;
	if (n>= 10 && n<=16) {
	data d=group1(n);
		in_out(n, d.sum, d.per_person_cost, d.carer_cost);
	} else if (n>=17 && n<=26) {
		data d=group2(n);
		in_out(n, d.sum, d.per_person_cost, d.carer_cost);
	} else if (n>=27 && n<=36) {
		data d=group3(n);
		in_out(n, d.sum, d.per_person_cost, d.carer_cost);
	} else {
		cout<<"invalid input!!!"<<endl;
	}
}
	return 0;
} 

#include<iostream>
#include <limits>
#include<cstdlib>
using namespace std;	
string generateBookingNumber() {
	
    return "BK" + to_string(rand() % 10000);
}
void oneday() {
	
    cout<<"Select the Ticket Type: "<<endl;
    cout<<"1. Adult"<<endl;
    cout<<"2. Child"<<endl;
    cout<<"3. Senior"<<endl;
    cout<<"4. Family Ticket(upto two adults or seniors, and three childrens)"<<endl;
    cout<<"5. Group"<<endl<<endl;
    int choice;
    int n;
    double sum = 0;

    cout<<"Choose the option 1/2/3/4/5: ";
    cin>>choice;

    switch (choice) {
        case 1:
            cout<<"Enter the number of Adults: ";
            cin>>n;
            sum=n*20.0;
            break;
        case 2:
            cout<<"Enter the number of Children: ";
            cin>>n;
            sum=n*12.0;
            break;
        case 3:
            cout<<"Enter the number of Seniors: ";
            cin>>n;
            sum=n*16;
            break;
        case 4:
            cout << "Enter the number of Families: ";
            cin>>n;
            sum=n*60;
            break;
        case 5:
            cout<<"Enter the number of persons in a Group: ";
            cin>>n;
            sum=n*15.0;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            return;
}

    string choice1;
    cout << "Would you like to feed the lion or Penguin? yes/no" << endl;
    cin >> choice1;
    if (choice1 == "yes") {
        cout<<"Select the Animal to feed: "<<endl;
        cout<<"1. Lion" << endl;
        cout<<"2. Penguin" << endl;
        int choice2;
        cout<<"Enter the choice 1/2: ";
        cin>>choice2;

        switch (choice2) {
            case 1:
                int n1;
                cout<<"Enter the number of persons willing to feed the Lion: ";
                cin>>n1;
                sum+=n1*2.50; 
                break;
            case 2:
                int n2;
                cout<<"Enter the number of persons willing to feed the Penguin: ";
                cin>>n2;
                sum+=n2*2.0; 
                break;
            default:
                cout<<"Invalid choice!"<<endl;
                return; 
        }
    }
   	string bookingNumber=generateBookingNumber();
	cout<<"Booking Number: "<<bookingNumber<<endl;
    cout<<"Total Cost: $"<<sum<<endl;
}
void twoday() {
    cout<<"Select the Ticket Type: "<<endl;
    cout<<"1. Adult"<<endl;
    cout<<"2. Child"<<endl;
    cout<<"3. Senior"<<endl;
    cout<<"4. Family Ticket(upto two adults or seniors, and three childrens)"<<endl;
    cout<<"5. Group"<<endl<<endl;
    int choice;
    int n;
    double sum = 0;

    cout<<"Choose the option 1/2/3/4/5: ";
    cin>>choice;

    switch (choice) {
        case 1:
            cout<<"Enter the number of Adults: ";
            cin>>n;
            sum=n*30;
            break;
        case 2:
            cout<<"Enter the number of Children: ";
            cin>>n;
            sum=n*18;
            break;
        case 3:
            cout<<"Enter the number of Seniors: ";
            cin>>n;
            sum=n*24;
            break;
        case 4:
            cout << "Enter the number of Families: ";
            cin>>n;
            sum=n*90;
            break;
        case 5:
            cout<<"Enter the number of persons in a Group: ";
            cin>>n;
            sum=n*22.5;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            return;
        
}

    string choice1;
    cout << "Would you like to feed the lion/Penguin or Join the Barbecue? yes/no" << endl;
    cin >> choice1;
    if (choice1 == "yes") {
        cout<<"Enter the choice 1/2/3: "<<endl;
        cout<<"1. Lion"<<endl;
        cout<<"2. Penguin"<<endl;
        cout<<"3. Evening Barbecue"<<endl;
        int choice2;
        cout<<"Enter the choice 1/2/3: ";
        cin>>choice2;

        switch (choice2) {
            case 1:
                int n1;
                cout<<"Enter the number of persons willing to feed the Lion: ";
                cin>>n1;
                sum+=n1*2.50; 
                break;
            case 2:
                int n2;
                cout<<"Enter the number of persons willing to feed the Penguin: ";
                cin>>n2;
                sum+=n2*2.0; 
                break;
            case 3:
            	int n3;
                cout<<"Enter the number of persons Willing to join the Evening Barbecue: ";
                cin>>n3;
                sum+=n3*5; 
                break;
            default:
                cout<<"Invalid choice!"<<endl;
                return; 
        }
    }
   	string bookingNumber=generateBookingNumber();
	cout<<"Booking Number: "<<bookingNumber<<endl;
    cout<<"Total Cost: $"<<sum<<endl;
}
int main() {
    cout<<"*** Welcome to WildLife Park Ticketing System ***"<<endl<<endl;

    cout<<"*** Costing Details ***"<<endl<<endl;
    cout<<"Cost for One day booking: "<<endl;
    cout<<"One Adult: $20.00"<<endl;
    cout<<"One Child: $12.00"<<endl;
    cout<<"One Senior: $16.00"<<endl;
    cout<<"Family Ticket(upto two adults or seniors, and three childrens): $60.00"<<endl;
    cout<<"Group of six people of more: $15.00 per person."<<endl<<endl;

    cout<<"Cost for two days booking: "<<endl;
    cout<<"One Adult: $30.00"<<endl;
    cout<<"One Child: $18.00"<<endl;
    cout<<"One Senior: $24.00"<<endl;
    cout<<"Family Ticket(upto two adults or seniors, and three childrens): $90.00"<<endl;
    cout<<"Group of six people of more: $22.50 per person."<<endl<<endl;

    cout<<"EXTRA ATTRACTIONS"<<endl;
    cout<<"Lion Feeding: $2.50"<<endl;
    cout<<"Penguin Feeding: $2.00"<<endl;
    cout<<"Evening Barbeque(Two Days Ticketing only): $5.00"<<endl<<endl;

    cout<<"Booking is closed for Friday otherwise OPEN!!!"<<endl<<endl;

    cout<<"Select the Ticketing Option: "<<endl;
    cout<<"1. Book Tickets for One day. "<<endl;
    cout<<"2. Book Tickets for Two days. "<<endl;
    cout<<"3. Exit!!!"<<endl<<endl;
    int choice;
    cout<<"Enter the choice 1/2/3: ";
    cin>>choice;
	do {
	
    switch (choice) {
        case 1:
            oneday();
            break;
        case 2:
            twoday();
            break;
        case 3:
            cout<<"Exiting..."<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            break;
    }
} while (true);
	return 0;
}


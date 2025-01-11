//this is management system
#include<iostream>
using namespace std;
void Inputdata(string names[], double weights[], int n, string wei[]) {
    for (int i=0; i<n; i++) {
        cout<<"Enter the name: ";
        cin>>names[i];

        do {
            cout<<"Enter the weight of student: ";
            cin>>weights[i]>>wei[i];

            if (weights[i]<=0) {
                cout<<endl;
                cout<<"Invalid weight, Please enter the greater value than zero."<<endl;
            }
        } while (weights[i]<=0);

        cout<<endl;
    }
}

void Outputdata(string names[], double weights[], int n, string wei[]) {
    cout<<"***Names and Weights of Pupils:***"<<endl;
    for (int i=0; i<n; i++) {
        cout<<"Name: "<<names[i]<<", Weight: "<<weights[i]<<" "<<wei[i]<<endl;
    }
}

bool nameExists(string names[], int n, string name30days) {
    for (int i=0; i<n; i++) {
        if (names[i]==name30days) {
            return true;
        }
    }
    return false;
}

void Inputdata30days(string names[], double weights30days[], int n, string we[]) { 
		cout<<endl;
        cout<<"***Enter the data after 30 days***"<<endl<<endl;
        
    for (int i=0; i<n; i++) {
     
        cout<<"Enter the name of student: ";
        string name30days;
        cin>>name30days;

        if (!nameExists(names, n, name30days)) {
            cout<<"Invalid name. Please enter a name from the initial data."<<endl;
            i--;
            continue;
        }

        do {
            cout<<"Enter the weight of student in kg: ";
            cin>>weights30days[i]>>we[i];

            if (weights30days[i]<=0) {
                cout<<endl;
                cout<<"Invalid weight, Please enter the greater value than zero."<<endl;
            }
        } while (weights30days[i]<=0);
        cout<<endl;
        
    }
}
void CompareWeightChanges(string names[], double weights[], double weights30days[], int n) {
    cout<<"***Weight Changes After 30 Days:***"<<endl<<endl;

    for (int i=0; i<n; i++) {
        double weightDifference=weights30days[i]-weights[i];

        cout<<"Name: "<<names[i]<<", Initial Weight: "<<weights[i]<<" kg, Weight after 30 Days: "<<weights30days[i]<<" kg";

        if (weightDifference>2.5) {
            cout<<", Rise: "<<weightDifference<<" kg"<<endl;
            
        } else if (weightDifference<-2.5) {
            cout<<", Fall: "<<-weightDifference<<" kg"<<endl;
            
        } else {
            cout<<", No Significant Change"<<endl;
        }
    }
}

int main() {
    int n;
	int choice;
    cout<<"***Welcome to the Weight Checking System***"<<endl<<endl;
	
    cout<<"How many student's data do you want to enter?"<<endl;
    cout<<"Enter the number of students: ";
    cin>>n;
    cout<<endl;
	
    string names[n];
    double weights[n];
    string wei[n];

    Inputdata(names, weights, n, wei);
    Outputdata(names, weights, n, wei);
    
	double weights30days[n];
    Inputdata30days(names, weights30days, n, wei);
    
    CompareWeightChanges(names, weights, weights30days, n);
	
	

    return 0;
}


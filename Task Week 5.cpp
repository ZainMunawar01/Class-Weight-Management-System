#include<iostream>
#include <unordered_map>
using namespace std;
struct data {
    int number;
    int hour;
    int stay;
};
unordered_map<string, float> dailyTotalWithDiscount;
unordered_map<int, bool> frequentParkingMap;
const int MAX_PLATE_NUMBER = 100;
bool doesNumberExist(int plateNumber) {
    return frequentParkingMap.find(plateNumber) != frequentParkingMap.end();
}
void sunday() {
	double total=0;
    data d;  
	double discount=0;
	
    cout << "Enter the car plate number: ";
    cin >> d.number;
    cout << "Enter the arrival time: ";    
    cin >> d.hour;
    cout << "Enter the hours to stay: ";
    cin >> d.stay;
    
 if (doesNumberExist(d.number) && frequentParkingMap[d.number]) {
 	
 	cout<<"Frequent parking number recognized. Discount applied."<<endl;
    if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=8) {
		int total=2*d.stay;
	    discount= total-(total*10/100);
	    total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Sunday"] += total;
    }
    else if (d.hour>=11 && d.hour<=15 && d.stay<=5 && d.stay>=1) {
    	int total=2*d.stay;
        discount= total-(total*10/100);
         total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Sunday"] += total;
	}
	else if (d.hour>=11 && d.hour<=15 && d.stay<=8 && d.stay>=6) {
        int hours_remaining = 16 - d.hour;
        int total = 2 * hours_remaining + 2;
       discount= total-(total*10/100);
         total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Sunday"] += total;
    }
    else if (d.hour>=16 && d.stay<=8 && d.stay>=1) {
    	int total=1;
        cout<<"Your parking Bill is: "<<total<<endl;
         dailyTotalWithDiscount["Sunday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
} else{
    cout<<"Not a frequent parking number. No discount applied."<<endl;
     if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=8) {
		int total=2*d.stay;
    cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Sunday"] += total;
    }
    else if (d.hour>=11 && d.hour<=15 && d.stay<=5 && d.stay>=1) {
    	int total=2*d.stay;
    	cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Sunday"] += total;
	}
	else if (d.hour>=11 && d.hour<=15 && d.stay<=8 && d.stay>=6) {
        int hours_remaining = 16 - d.hour;
        int total = 2 * hours_remaining + 2;
       cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Sunday"] += total;
    }
    else if (d.hour>=16 && d.stay<=8 && d.stay>=1) {
    	int total=2;
        cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Sunday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
}
 if (discount > 0) {
   dailyTotalWithDiscount["Sunday"] += total;
}
	if (!doesNumberExist(d.number)) {
        frequentParkingMap[d.number] = true;
    }
	
}
void monday() {
	double total=0;
    data d; 
	float discount=0; 
	  
    cout << "Enter the car plate number: ";
    cin >> d.number;
    cout << "Enter the arrival time: ";    
    cin >> d.hour;
    cout << "Enter the hours to stay: ";
    cin >> d.stay;
 if (doesNumberExist(d.number) && frequentParkingMap[d.number]) {
 	
 	cout<<"Frequent parking number recognized. Discount applied."<<endl;
    if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
		discount= total-(total*10/100);
    total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Monday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    discount= total-(total*10/100);
    	total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Monday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
     discount= total-(total*10/100);
        total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Monday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	total=1;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Monday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
    
  }	else {
    cout<<"Not a frequent parking number. No discount applied."<<endl;
    if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
    	cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Monday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Monday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Monday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	total=2;
        cout<<"Your parking Bill is: 2"<<total<<endl;
        dailyTotalWithDiscount["Monday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
}
     if (discount > 0) {
   dailyTotalWithDiscount["Monday"] += total;
}
if (!doesNumberExist(d.number)) {
        frequentParkingMap[d.number] = true;
    }
}
void tuesday() {
	double total=0;
    data d;  
	float discount=0;  
	
    cout << "Enter the car plate number: ";
    cin >> d.number;
    cout << "Enter the arrival time: ";    
    cin >> d.hour;
    cout << "Enter the hours to stay: ";
    cin >> d.stay;
if (doesNumberExist(d.number) && frequentParkingMap[d.number]) {
 	
 	cout<<"Frequent parking number recognized. Discount applied."<<endl;
    if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
		discount= total-(total*10/100);
    	total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Tuesday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    	discount= total-(total*10/100);
    	total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Tuesday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
       discount= total-(total*10/100);
       total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Tuesday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	total=1;
        cout<<"Your parking Bill is: "<<total<<endl;
        	dailyTotalWithDiscount["Tuesday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
} else {
    cout<<"Not a frequent parking number. No discount applied."<<endl;
    if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
    	cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Tuesday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    	cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Tuesday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        	cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Tuesday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	total=2;
        cout<<"Your parking Bill is: "<<total<<endl;
        	dailyTotalWithDiscount["Tuesday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
}
 if (discount > 0) {
  	dailyTotalWithDiscount["Tuesday"] += total;
}
if (!doesNumberExist(d.number)) {
        frequentParkingMap[d.number] = true;
    }
}
void wednesday() {
	double total=0;
    data d; 
		float discount=0;     
		
    cout << "Enter the car plate number: ";
    cin >> d.number;
    cout << "Enter the arrival time: ";    
    cin >> d.hour;
    cout << "Enter the hours to stay: ";
    cin >> d.stay;
if (doesNumberExist(d.number) && frequentParkingMap[d.number]) {
 	
 	cout<<"Frequent parking number recognized. Discount applied."<<endl;
    if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
		discount= total-(total*10/100);
    total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Wednesday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    	discount= total-(total*10/100);
    	total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Wednesday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        discount= total-(total*10/100);
       total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Wednesday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	total=1;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Wednesday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
} else {
    cout<<"Not a frequent parking number. No discount applied."<<endl; 
    if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
    	cout << "Your parking Bill is: " << total << endl;
        dailyTotalWithDiscount["Wednesday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	dailyTotalWithDiscount["Wednesday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Wednesday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	int total=2;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Wednesday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
}
 if (discount > 0) {
 dailyTotalWithDiscount["Wednesday"] += total;
}
if (!doesNumberExist(d.number)) {
        frequentParkingMap[d.number] = true;
    }
}
void thursday() {
	double total=0;
    data d;   
	float discount=0; 
	 
    cout << "Enter the car plate number: ";
    cin >> d.number;
    cout << "Enter the arrival time: ";    
    cin >> d.hour;
    cout << "Enter the hours to stay: ";
    cin >> d.stay;
if (doesNumberExist(d.number) && frequentParkingMap[d.number]) {
 	
 	cout<<"Frequent parking number recognized. Discount applied."<<endl;
    if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
	total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Thursday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    	discount= total-(total*10/100);
    	total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Thursday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        discount= total-(total*10/100);
        total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Thursday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	int total=1;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Thursday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }   
}else {
    cout<<"Not a frequent parking number. No discount applied."<<endl; 
     if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	dailyTotalWithDiscount["Thursday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	dailyTotalWithDiscount["Thursday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Thursday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	int total=2;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Thursday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
}
 if (discount > 0) {
  dailyTotalWithDiscount["Thursday"] += total;
}
if (!doesNumberExist(d.number)) {
        frequentParkingMap[d.number] = true;
    }
}
void friday() {
	double total=0;
    data d;  
	float discount=0;    
    cout << "Enter the car plate number: ";
    cin >> d.number;
    cout << "Enter the arrival time: ";    
    cin >> d.hour;
    cout << "Enter the hours to stay: ";
    cin >> d.stay;
if (doesNumberExist(d.number) && frequentParkingMap[d.number]) {
 	
 	cout<<"Frequent parking number recognized. Discount applied."<<endl;
    if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
		discount= total-(total*10/100);
    	total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Friday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    	discount= total-(total*10/100);
    	total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Friday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        discount= total-(total*10/100);
        total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Friday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	int total=1;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Friday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
}else {
    cout<<"Not a frequent parking number. No discount applied."<<endl; 
 if (d.hour>=8 && d.hour<=10 && d.stay>=1 && d.stay<=2) {
		int total=10*d.stay;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	dailyTotalWithDiscount["Friday"] += total;
    }
    else if (d.hour>=11 && d.hour<=14 && d.stay<=2 && d.stay>=1) {
    	int total=10*d.stay;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	dailyTotalWithDiscount["Friday"] += total;
	}
	else if (d.hour>=15 && d.hour<16 && d.stay<=2 && d.stay>=1) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Friday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	int total=2;
        cout<<"Your parking Bill is: 2"<<total<<endl;
        dailyTotalWithDiscount["Friday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
}
 if (discount > 0) {
  dailyTotalWithDiscount["Friday"] += total;
}
if (!doesNumberExist(d.number)) {
        frequentParkingMap[d.number] = true;
    }
}
void saturday() {
	double total=0;
    data d;  
		float discount=0;    
    cout << "Enter the car plate number: ";
    cin >> d.number;
    cout << "Enter the arrival time: ";    
    cin >> d.hour;
    cout << "Enter the hours to stay: ";
    cin >> d.stay;
if (doesNumberExist(d.number) && frequentParkingMap[d.number]) {
 	
 	cout<<"Frequent parking number recognized. Discount applied."<<endl;
    if (d.hour>=8 && d.hour<=12 && d.stay>=1 && d.stay<=4) {
		int total=3*d.stay;
		discount= total-(total*10/100);
    total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Saturday"] += total;
    }
    else if (d.hour>=13 && d.hour<=15 && d.stay<=2 && d.stay>=1) {
    	int total=3*d.stay;
    	discount= total-(total*10/100);
    	total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Saturday"] += total;
	}
	else if (d.hour>=13 && d.hour<16 && d.stay<=4 && d.stay>=2) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        discount= total-(total*10/100);
       total -= discount;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	 dailyTotalWithDiscount["Saturday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	int total=1;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Saturday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
}else {
    cout<<"Not a frequent parking number. No discount applied."<<endl; 
if (d.hour>=8 && d.hour<=12 && d.stay>=1 && d.stay<=4) {
		int total=3*d.stay;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	dailyTotalWithDiscount["Saturday"] += total;
    }
    else if (d.hour>=13 && d.hour<=15 && d.stay<=2 && d.stay>=1) {
    	int total=3*d.stay;
    	cout<<"Your parking Bill is: "<<total<<endl;
    	dailyTotalWithDiscount["Saturday"] += total;
	}
	else if (d.hour>=13 && d.hour<16 && d.stay<=4 && d.stay>=2) {
        int hours_remaining = 16-d.hour;
        int total = 10*hours_remaining + 2;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Saturday"] += total;
    }
    else if (d.hour>=16 && d.stay<=2 && d.stay>=1) {
    	int total=2;
        cout<<"Your parking Bill is: "<<total<<endl;
        dailyTotalWithDiscount["Saturday"] += total;
    }
    else {
        cout<<"Invalid input."<<endl;
    }
}
 if (discount > 0) {
  dailyTotalWithDiscount["Saturday"] += total;
}
if (!doesNumberExist(d.number)) {
        frequentParkingMap[d.number] = true;
    }
}
int main() {
	
	for (int plateNumber = 0; plateNumber < MAX_PLATE_NUMBER; plateNumber++) {
        frequentParkingMap[plateNumber] = false;
    }
	
	dailyTotalWithDiscount["Sunday"] = 0;
    dailyTotalWithDiscount["Monday"] = 0;
    dailyTotalWithDiscount["Tuesday"] = 0;
    dailyTotalWithDiscount["Wednesday"] = 0;
    dailyTotalWithDiscount["Thursday"] = 0;
    dailyTotalWithDiscount["Friday"] = 0;
    dailyTotalWithDiscount["Saturday"] = 0;

    cout << "*** Welcome to the Car Parking System ***" << endl << endl;
    cout << "Select the Day" << endl;
    cout << "1. Sunday" << endl;
    cout << "2. Monday" << endl;
    cout << "3. Tuesday" << endl;
    cout << "4. Wednesday" << endl;
    cout << "5. Thursday" << endl;
    cout << "6. Friday" << endl;
    cout << "7. Saturday" << endl;
    cout << "8. Exit" << endl;
	int choice;
   do {
    cout<<endl;
    cout << "Enter the choice (1/2/3/4/5/6/7/8): ";
    cin >> choice;
    cout << endl;
    
    
    switch (choice) {
    case 1:
        sunday();
        break;
    case 2:
    	monday();
    	break;
    case 3:
    	tuesday();
		break;
	case 4:
		wednesday();
		break;
	case 5:
		thursday();
		break;
	case 6:
		friday();
		break;
	case 7:
		saturday();
		break;
	case 8:
		cout<<"Exit!!!"<<endl<<endl;
		break;
	default:
        cout << "Invalid choice";
    }
} while (choice!=8); 
 cout << "Daily Total:" << endl;
    for (auto& day : dailyTotalWithDiscount) {
        cout << day.first << ": " << day.second << endl;
    }
    return 0;
} 

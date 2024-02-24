#include <iostream>
#include <string>
using namespace std;
struct Item {
    int itemNo;
    string description;
    double reservePrice;
    int numBids;
    double highestBid;
};
struct Buyer {
    string name;
    string fatherName;
    double CNIC;
    int registrationNo;
};
void displayItems(Item items[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << items[i].itemNo << ". " << items[i].description << ", Reserve Price: $" << items[i].reservePrice << ", No. of Bids: " << items[i].numBids << endl;
    }
}
Buyer registerBuyer() {
    Buyer buyer;
    cout << "Enter the name: ";
    cin.ignore();
    getline(cin, buyer.name);
    cout << "Enter the Father name: ";
    getline(cin, buyer.fatherName);
    cout << "Enter the CNIC number: ";
    cin >> buyer.CNIC;
    static int regNo = 45210;
    buyer.registrationNo = regNo++;
    cout << "You are successfully Registered for the Auction!!!" << endl;
    cout << "Your Registration ID is: " << buyer.registrationNo << endl << endl;
    return buyer;
}
void placeBid(Item& item, Buyer& buyer) {
    cout << "Enter your bid for item " << item.itemNo << ": $";
    double bid;
    cin >> bid;
    if (bid > item.highestBid) {
        item.highestBid = bid;
        item.numBids++;
        cout << "Bid successfully placed!" << endl;
    } else {
        cout << "Please enter a higher bid amount." << endl;
    }
}

double calculateFee(double finalBid) {
    return 0.1 * finalBid; 
}
int main() {
    const int numItems = 10;
    Item items[numItems] = {
        {520, "Porcshe 911 Coupe 1975 Vintage Car", 69750, 0, 0},
        {521, "Da Vinci's Monna Lisa Painting", 200000, 0, 0},
        {522, "Vintage Persian Rug", 1000, 0, 0},
        {523, "Rare Mehanical Rolex Watch", 5000, 0, 0},
        {524, "Rare Opal Gemstone 24carat", 10000, 0, 0},
        {525, "Diamond 24carat Ring", 5000, 0, 0},
        {526, "Afridi Signatured Bat", 4500, 0, 0},
        {527, "Antique Chinease Pot", 1200, 0, 0},
        {528, "Persian Sword", 2500, 0, 0},
        {529, "Antique Ornament", 8500, 0, 0}
    };

    int choice;
    Buyer buyer;
    double totalFee = 0;
    int soldItems = 0, itemsBelowReserve = 0, unsoldItems = numItems;

    cout << "Welcome to the Auction" << endl << endl;

    do {
        cout << "1. Show items for auction." << endl;
        cout << "2. Register for auction." << endl;
        cout << "3. Bid the Item." << endl;
        cout << "4. Exit" << endl << endl;

        cout << "Enter the choice (1/2/3/4): ";
        cin >> choice;
        cout << endl;
    int itemNo; 
 	Item& selected = items[itemNo - 520];
        switch (choice) {
            case 1:
                displayItems(items, numItems);
                break;
            case 2:
                buyer = registerBuyer();
                break;
            case 3:
                if (buyer.registrationNo == 0) {
                    cout << "Please register first." << endl << endl;
                    break;
                }
                cout << "Enter the Item Number: ";
                int itemNo;
                cin >> itemNo;
                if (itemNo < 520 || itemNo > 529) {
                    cout << "Invalid Item Number" << endl << endl;
                    break;
                }

                placeBid(selected, buyer);
                if (selected.highestBid >= selected.reservePrice) {
                    cout << "Sold" << endl;
                    totalFee += calculateFee(selected.highestBid);
                    soldItems++;
                    unsoldItems--;
                } else {
                    cout << "Not sold - Bid did not meet the reserve price" << endl;
                    itemsBelowReserve++;
                }
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid Choice!!!" << endl << endl;
                break;
        }
    } while (true);

    cout << "Total fee for sold items: $" << totalFee << endl;
    cout << "Number of items sold: " << soldItems << endl;
    cout << "Number of items that did not meet the reserve price: " << itemsBelowReserve << endl;
    cout << "Number of unsold items: " << unsoldItems << endl;

    return 0;
}


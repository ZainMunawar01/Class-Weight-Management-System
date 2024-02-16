#include <iostream>
using namespace std;
struct Cow {
    int identityCode;
    double yield[7][2];
    int milkings[7]; 
    int totalMilkings;
};

void recordYield(Cow cows[], int size) {
    cout<<"***Welcome to DairyFarmStats***\n\n";
    cout<<"***Enter milk yield for each cow every day***\n";
    for (int i=0; i<size; ++i) {
        cout<<"Cow "<<cows[i].identityCode<<":\n";
        for (int day = 0; day < 7; ++day) {
            cout<<"How many times was cow "<<cows[i].identityCode<<" milked on day "<<day+1<<": ";
            cin>>cows[i].milkings[day];
            for (int milk = 0; milk<cows[i].milkings[day]; ++milk) {
                cout<<"Milk "<<milk+1<<": ";
                cin>>cows[i].yield[day][milk];
            }
        }
    }
}
void calculateStatistics(Cow cows[], int size) {
    double totalMilk = 0;
    int totalMilkings = 0;
    
    for (int i=0; i<size; ++i) {
        for (int day=0; day<7; ++day) {
            for (int milk=0; milk<cows[i].milkings[day]; ++milk) {
                totalMilk+=cows[i].yield[day][milk];
                ++totalMilkings;
            }
        }
    }

    double averageYield=totalMilk/totalMilkings;
	
    cout<<"Total weekly volume of milk for the herd: "<<totalMilk<<" litres\n";
    cout<<"Average yield per cow in a week: "<<averageYield<<" litres\n";
}
void identifyCows(Cow cows[], int size) {
    double maxMilk=0;
    int maxCowIndex=-1;
    int lowVolumeCount=0;

    for (int i=0; i<size; ++i) {
        double weeklyMilk=0;
        for (int day=0; day<7; ++day) {
            for (int milk=0; milk<cows[i].milkings[day]; ++milk) {
                weeklyMilk+=cows[i].yield[day][milk];
            }
        }

        if (weeklyMilk>maxMilk) {
            maxMilk=weeklyMilk;
            maxCowIndex=i;
        }

        int daysLowVolume=0;
        for (int day=0; day<7; ++day) {
            if (cows[i].milkings[day]==0) {
                ++daysLowVolume;
            }
        }
        if (daysLowVolume>=4) {
            ++lowVolumeCount;
            cout<<"Cow "<< cows[i].identityCode<<" produced less than 12 litres of milk on four or more days.\n";
        }
    }

    if (maxCowIndex!=-1) {
        cout<<"Cow "<<cows[maxCowIndex].identityCode<<" is the most productive cow this week.\n";
    } else {
        cout<<"No data available.\n";
    }

    if (lowVolumeCount==0) {
        cout<<"No cows produced less than 12 litres of milk on four or more days this week.\n";
    }
}

int main() {
    int herdSize=5;
    Cow cows[herdSize];

    for (int i=0; i<herdSize; ++i) {
        cows[i].identityCode=i+320; 
    }

    recordYield(cows, herdSize);
    calculateStatistics(cows, herdSize);
    identifyCows(cows, herdSize);

    return 0;
}



#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    double price[5],total=0, avg;
    string name[5],location[5];
    cout << "Prices of hawker food at different hawker centres"<<endl;
    cout << "================================================="<< endl<<endl;
    for(int i=0;i<5;i++)
    {
        cout << "Enter price of hawker food " << i+1 << " in dollars: ";
        cin >> price[i];
        total += price[i];
         cout << "Name of hawker food(without spacing) " << i+1 << ": ";
        cin >> name[i];
        cout << "Location " << i+1 << " of hawker centre food was bought at: ";
        cin >> location[i];
    }
    avg = total / 5;
    cout << "\nAverage cost of all food if you were to order 1 of everything = $" << avg << endl;
    cout << "\nTotal cost of all items in SGD = " << total << endl;
    cout << "I hope you enjoyed your meals at the hawker centres, support our local hawkers!" << endl;

    ofstream myFile("final.txt");
    for(int i=0;i<5;i++)
    {
        myFile << "Price of hawker food " << i+1 << ": ";
        myFile << price[i] << endl;
        myFile << "Name of hawker food " << i+1 << ": ";
        myFile << name[i] << endl;
        myFile << "Location " << i+1 << " of hawker centre food was bought at : ";
        myFile << location[i] << endl;
    }

    myFile << "Average cost of all food = $ " << avg;
    myFile << endl << "Total cost of all food items: " << total;
    myFile << endl << "I hope you enjoyed your meals at the hawker centres, support our local hawkers!";
    myFile.close();
	return 0;
}

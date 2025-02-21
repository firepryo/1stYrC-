#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    double price[5],total=0.0,avg;
    string name[5];
    int i=0;
    cout<<"Prices of gaming consoles and games"<<endl;
    cout<<"==================================="<< endl;
    ifstream myFile ("score.txt");
    //fstream myFile ("C:\\Read_Marks.txt",ios::in); // Same
    while(!myFile.eof())
    {
        myFile>>price[i];
        myFile>>name[i];
        total+=price[i];
        i++;
    }
    avg = total / 5;
    for(i=0;i<5;i++){
        cout<<"Price of gaming console or game"<<i+1<<" in SGD(closest dollar): "<<price[i]<<endl;
        cout<<"Name of gaming console or game(without spacing) "<<i+1<<" in SGD: "<<name[i]<<endl;
    }
    cout<<"\nAverage cost of all items in SGD: " << avg << endl;
    cout <<"\nTotal cost of all items in SGD: " << total << endl;
    cout << "\nI hope you had fun gaming, don't forget to study!" << endl;
	return 0;
}

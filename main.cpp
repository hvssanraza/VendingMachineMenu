#include <iostream>
using namespace std;

int main() {

    char choice;
    cout<<"---Vending Machine---"<<endl;
    cout<<"Items we have in our stock : "<<endl;
    cout<<"1: Fries"<<endl;
    cout<<"2: Drinks"<<endl;
    cout<<"3: Cooked Meals"<<endl;
    cout<<"4: Frozen Meals"<<endl;
    cout<<"5: Desserts"<<endl;
    cout<<""<<endl;
    cout<<"Enter Choice: ";
    cin>>choice;

    switch(choice) {
        case '1':
            cout<<"You have Selected Fries"<<endl;
        cout<<"Your Total is Rs 100"<<endl;
        break;
        case '2':
            cout<<"You have Selected Drinks"<<endl;
        cout<<"Your Total is Rs 120"<<endl;
        break;
        case '3':
            cout<<"You have Cooked Meals"<<endl;
        cout<<"Your Total is Rs 200"<<endl;
        break;
        case '4':
            cout<<"You have Frozen Meals"<<endl;
        cout<<"Your Total is Rs 180"<<endl;
        break;
        case '5':
            cout<<"You have Desserts"<<endl;
        cout<<"Your Total is Rs 250"<<endl;
        break;
        default:
            cout<<"Invalid Choice"<<endl;
        break;
    }

    return 0;

}

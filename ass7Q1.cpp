		#include <iostream>
#include <iomanip>
using namespace std;
class Item 
{
public:
    int item_no;
    string item_name;
    float item_price;

    void ItemData()
	 {
        cout << "Enter Item Number: ";
        cin >> item_no;
        cout << "Enter Item Name: ";
        cin >>item_name;
        cout << "Enter Item Price: ";
        cin >> item_price;
    }
};

class Discount:public Item
 {
public:
    float d;

    void Discountdata()
	 {
        cout << "Enter Discount Percentage: ";
        cin>>d;
    }

    void generateBill(int quantity)
	 {
        float total = item_price * quantity;
        float d_amount = (total * d) / 100;
        float n_amount = total - d;

        // Display bill for this item
        cout << fixed << setprecision(2);
        cout << "\nItem No: " << item_no;
        cout << "\nItem Name: " << item_name;
        cout << "\nPrice: " << item_price;
        cout << "\nQuantity: " << quantity;
        cout << "\nTotal: " << total;
        cout << "\nDiscount: " << d_amount;
        cout << "\nAmount to Pay: " << n_amount << endl;
    }
};

int main() 
{
    int n;
    cout <<"enter limit:";
    cin >> n;

    Discount d[n];
    int quantity[n];

    // Input for each item
    for (int i = 0; i < n; i++)
	 {
        cout << "\nEnter details for item " << i + 1 << ":\n";
        d[i].ItemData();
        d[i].Discountdata();
        cout << "Enter Quantity: ";
        cin >> quantity[i];
    }

    // Generate and show bill
    cout << "\nFinal Bill\n";
    for (int i = 0; i < n; i++)
	 {
        d[i].generateBill(quantity[i]);
        cout << "\n";
    }

}


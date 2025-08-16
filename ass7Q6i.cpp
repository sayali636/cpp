#include<iostream>
#include<iomanip>
using namespace std;

class Manager 
{
public:
    int mid, sal;
    char mname[20];
    char mno[15];  // Mobile number as string for better handling

    void acceptm() 
	{ 
        cout << "Enter Manager ID, Name, Mobile Number, Salary: ";
        cin >> mid >> mname >> mno >> sal;
    }

    void display() 
	{
        cout << "\nManager ID ="<<mid;
        cout << "\nManager Name = " << mname;
        cout << "\nMobile No="<<mno;
        cout << "\nSalary="<<sal<<endl;
    }

    // static function to search by ID
    static void searchById(Manager ob[], int n, int m_id)
	 {
        bool found = false;
        for (int i = 0; i < n; i++)
		 {
            if (ob[i].mid == m_id) 
			{
                cout << "\n--- Manager Found ---";
                ob[i].display();
                found = true;
                break;
            }
        }
        if (!found)
		 {
            cout << "\nRecord not found.";
        }
    }
};

int main() 
{
    int n, m_id;
    Manager ob[10];

    cout << "Enter number of managers: ";
    cin >> n;

    for (int i = 0; i < n; i++)
	 {
        cout << "\nEnter details for manager " << i + 1 << ":\n";
        ob[i].acceptm();
    }

    cout << "\nEnter Manager ID to search: ";
    cin >> m_id;

    Manager::searchById(ob, n, m_id);

    return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define MAX 20
int current = 0;
class book
{
private:
    int id;
    string name;
    string auth;
    int price;
    int qty;

public:
    book()
    {
        id = 0;
        name = "";
        auth = "";
        price = 0;
        qty = 0;
    }
    void add();
    friend void update_price(book b[]);
    friend void update(book b[]);
    friend void display(book b[]);
    friend void buy(book b[]);
};
void book::add()
{
    cout << "Enter the name of the book : ";
    cin >> name;
    cout << "Enter the ID of the book : ";
    cin >> id;
    cout << "Enter the name of the author : ";
    cin >> auth;
    cout << "Enter the Price : ";
    cin >> price;
    cout << "Enter the Qty Recived : ";
    cin >> qty;
    cout << endl;
}
void update_price(book b[])
{
    int search;
    cout << "Enter the id of the book for update in price : ";
    cin >> search;
    book t;
    bool f = false;
    for (int i = 0; i < current; i++)
    {
        if (b[i].id == search)
        {
            f = true;
            t = b[i];
        }
    }
    if (f)
    {
        cout << "Enter the new price of the book: ";
        cin >> t.id;
        cout << "Price updated" << endl;
    }
    else
    {
        cout << "BOOK NOT FOUND" << endl;
    }
    cout << endl
         << endl
         << endl;
}
void update(book b[])
{
    int search;
    cout << "Enter the id of the book for update in price : ";
    cin >> search;
    book t;
    bool f = false;
    for (int i = 0; i < current; i++)
    {
        if (b[i].id == search)
        {
            f = true;
            t = b[i];
        }
    }
    if (f)
    {
        cout << "Enter the name of the book : ";
        cin >> t.name;
        cout << "Enter the name of the author : ";
        cin >> t.auth;
        cout << "Enter the Price : ";
        cin >> t.price;
        cout << "Enter the Qty Recived : ";
        cin >> t.qty;
        cout << endl;
        cout << "Details updated" << endl;
    }
    else
    {
        cout << "BOOK NOT FOUND" << endl;
    }
    cout << endl
         << endl
         << endl;
}
void buy(book b[])
{
    int search;
    cout << "Enter the id of the book for update in price : ";
    cin >> search;
    book t;
    bool f = false;
    for (int i = 0; i < current; i++)
    {
        if (b[i].id == search)
        {
            f = true;
            t = b[i];
        }
    }
    if (f)
    {
        int q;
        cout << "Enter quantity you want to buy" << endl;
        cin >> q;
        if (q > t.qty)
        {
            cout << "Required Copies not in Stock" << endl;
        }
        else
        {
            t.qty = t.qty - q;
            cout << "Books Bought Sucessfully" << endl;
            cout << "Price is: $" << q * t.price << endl;
        }
    }
    else
    {
        cout << "BOOK NOT FOUND" << endl;
    }
    cout << endl
         << endl
         << endl;
}
void display(book b[])
{
    cout << "*************************************************" << endl;
    cout << "                 CURRENT BOOK" << endl;
    cout << "*************************************************" << endl;
    for (int i = 0; i < current; i++)
    {
        cout << "The Details of Book Id " << b[i].id << endl;
        cout << "The Name of the book is : " << b[i].name << endl;
        cout << "THE Author of " << b[i].name << " is " << b[i].auth << endl;
        cout << "The Price of the book is : " << b[i].price << endl;
        cout << "The inventory count is " << b[i].qty << endl;
    }
    cout << endl
         << endl
         << endl;
}
int main()
{
    book b[MAX];
    int choice;
    while (1)
    {
        cout << "*************************************************" << endl;
        cout << "                  BOOK MENU" << endl;
        cout << "*************************************************" << endl;
        cout << "   1. ADD" << endl;
        cout << "   2. UPDATE PRICE" << endl;
        cout << "   3. BUY" << endl;
        cout << "   4. UPDATE STATUS" << endl;
        cout << "   5. DISPLAY ALL" << endl;
        cout << "   6. RETURN TO MAIN MENU" << endl
             << endl
             << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            b[current++].add();
            break;
        case 2:
            update_price(b);
            break;
        case 3:
            buy(b);
            break;
        case 4:
            update(b);
            break;
        case 5:
            display(b);
            break;
        case 6:
            return 0;
            break;
        default:
            cout << "Wrong Input" << endl
                 << "Invalid input";
            break;
        }
    }
    return 0;
}
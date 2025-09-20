#include "DoublyList.hpp"

using namespace std;

int main()
{
    DoublyList<int> dlist;
    cout << dlist.getLength() << endl;
    cout << dlist.isEmpty() << endl;

    dlist.append(4);
    dlist.append(7);
    dlist.append(3);
    dlist.append(1);
    cout << dlist << endl;
    cout << dlist.getLength() << endl;
    try
    {
        dlist.getElement(-1);
    }
    catch (string e)
    {
        cout << e << endl;
    }
    try
    {
        dlist.getElement(4);
    }
    catch (string e)
    {
        cout << e << endl;
    }
    dlist.insert(4, 9);
    dlist.insert(5, 12);
    cout << dlist << endl;
    try
    {
        dlist.insert(7, 100);
    }
    catch (string e)
    {
        cout << e << endl;
    }
    dlist.remove(0);
    dlist.remove(4);
    cout << dlist << endl;

    try
    {
        dlist.remove(5);
    }
    catch (string e)
    {
        cout << e << endl;
    }

    cout << dlist.search(9) << endl;
    cout << dlist.search(999) << endl;
    dlist.replace(0, 5);
    try
    {
        dlist.replace(-1,2);
    }
    catch (string e)
    {
        cout << e << endl;
    }
    dlist.clear();
    cout << dlist << endl;
    cout << dlist.getLength() << endl;

}
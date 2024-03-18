#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];

    for (i = 0; i < 5; i++)
    {
        cout << i << " : " << "Salmaa Rifhani Rayyan" << endl;
    }

    for (i = 0; i < 5; i++){
        cout << "masukan bilangan = ";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++){
        cout << "bilangan ke - " << i << " : " << arr[i] << endl;
    }
}
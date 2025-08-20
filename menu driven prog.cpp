#include <iostream>
#include <cstdlib>
using namespace std;

int arr[100], sizeArr = 0;

void create() {
    cout << "Enter number of elements: ";
    cin >> sizeArr;
    cout << "Enter elements: ";
    for (int i = 0; i < sizeArr; i++) {
        cin >> arr[i];
    }
}

void display() {
    if (sizeArr == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    cout << "Array: ";
    for (int i = 0; i < sizeArr; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert() {
    int pos, val;
    cout << "Enter position (0 to " << sizeArr << "): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;

    if (pos < 0 || pos > sizeArr) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = sizeArr; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    sizeArr++;
    cout << "Element inserted." << endl;
}

void deletes() {
    int pos;
    cout << "Enter position (0 to " << sizeArr - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= sizeArr) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = pos; i < sizeArr - 1; i++) {
        arr[i] = arr[i + 1];
    }
    sizeArr--;
    cout << "Element deleted." << endl;
}

void search() {
    int val, found = 0;
    cout << "Enter value to search: ";
    cin >> val;
    for (int i = 0; i < sizeArr; i++) {
        if (arr[i] == val) {
            cout << "Element found at position " << i << endl;
            found = 1;
            break;
        }
    }
    if (!found) cout << "Element not found." << endl;
}

int main() {
    int choice;
    while (1) {
        cout << "\n---- MENU ----" << endl;
        cout << "1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. SEARCH\n6. EXIT" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: deletes(); break;
            case 5: search(); break;
            case 6: exit(0);
            default: cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}


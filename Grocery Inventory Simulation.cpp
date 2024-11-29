#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> current = {"apples", "bananas", "oranges", "pears"};
    vector<string> shipment = {"kiwis", "bananas", "grapes"};
    vector<string> sold = {"apples", "oranges"};

  
    cout << "Current: ";
    for (const auto& item : current) {
        cout << item << " ";
    }
    cout << endl;

    cout << "Shipment: ";
    for (const auto& item : shipment) {
        cout << item << " ";
    }
    cout << endl;

    cout << "Sold: ";
    for (const auto& item : sold) {
        cout << item << " ";
    }
    cout << endl;

    for (const auto& item : shipment) {
        current.push_back(item);
    }

   
    for (const auto& item : sold) {
        auto it = find(current.begin(), current.end(), item);
        if (it != current.end()) {
           
            current.erase(it);
        }
    }

   
    cout << "Updated Current: ";
    for (const string& item : current) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}

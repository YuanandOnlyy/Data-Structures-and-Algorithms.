#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Crush {
    string name;
    string likes;
    string memorableMoment;
};


void displayCrushes(const vector<Crush>& crushes) {
    if (crushes.empty()) {
        cout << "No crushes available." << endl;
        return;
    }
    for (size_t i = 0; i < crushes.size(); ++i) {
        cout<<"CRUSHICAKESS KO!!"<<endl;
        cout << i + 1 << ". " << crushes[i].name 
             << " - Likes: " << crushes[i].likes 
             << ", Memorable Moment: " << crushes[i].memorableMoment << endl;
    }
}


void createCrush(vector<Crush>& crushes) {
    string name, likes, memorableMoment;

    cout << "Enter crush's name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter what they like: ";
    getline(cin, likes);
    cout << "Enter a memorable moment with them: ";
    getline(cin, memorableMoment);

    crushes.push_back(Crush{name, likes, memorableMoment});
    cout << "Crush '" << name << "' added." << endl;
}


void updateCrush(vector<Crush>& crushes) {
    if (crushes.empty()) {
        cout << "No crushes to update." << endl;
        return;
    }

    int crushIndex;
    displayCrushes(crushes);
    cout << "Select a crush to update (Enter number): ";
    cin >> crushIndex;
    
    if (crushIndex < 1 || crushIndex > crushes.size()) {
        cout << "Invalid selection." << endl;
        return;
    }

    Crush& selectedCrush = crushes[crushIndex - 1];
    cout << "Updating crush: " << selectedCrush.name << endl;
    
    cout << "Enter new likes: ";
    cin.ignore();
    getline(cin, selectedCrush.likes);
    cout << "Enter a new memorable moment: ";
    getline(cin, selectedCrush.memorableMoment);

    cout << "Crush details updated." << endl;
}


void deleteCrush(vector<Crush>& crushes) {
    if (crushes.empty()) {
        cout << "No crushes to delete." << endl;
        return;
    }

    int crushIndex;
    displayCrushes(crushes);
    cout << "Select a crush to delete (Enter number): ";
    cin >> crushIndex;

    if (crushIndex < 1 || crushIndex > crushes.size()) {
        cout << "Invalid selection." << endl;
        return;
    }

    crushes.erase(crushes.begin() + crushIndex - 1);
    cout << "Crush deleted." << endl;
}

int main() {
    vector<Crush> crushes;
    int choice;

    do {
        cout << "\n                               Crush Management System                             \n";
        cout << "1. Add Crush\n";
        cout << "2. Update Crush Details\n";
        cout << "3. Delete a Crush\n";
        cout << "4. Display Crushes\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createCrush(crushes);
                break;
            case 2:
                updateCrush(crushes);
                break;
            case 3:
                deleteCrush(crushes);
                break;
            case 4:
                displayCrushes(crushes);
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}

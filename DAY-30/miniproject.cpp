#include <iostream>
using namespace std;

struct Player {
    int jerseyNo;
    string name;
    string position;
};

void addPlayers(Player team[], int &count) {
    int n;
    cout << "Enter number of players to add: ";
    cin >> n;
    for (int i = count; i < count + n; i++) {
        cout << "Enter Jersey No: ";
        cin >> team[i].jerseyNo;
        cout << "Enter Player Name: ";
        cin.ignore();
        getline(cin,team[i].name);
        cout << "Enter Position: ";
        cin >> team[i].position;
    }
    count += n;
    cout << "Players added successfully!\n";
}

void viewPlayers(Player team[], int count) {
    if (count == 0) {
        cout << "No players found!\n";
    } else {
        cout << "\n--- Team Players ---\n";
        for (int i = 0; i < count; i++) {
            cout << "Jersey No: " << team[i].jerseyNo << endl;
            cout << "Name: " << team[i].name << endl;
            cout << "Position: " << team[i].position << endl;
            cout << "----------------------\n";
        }
    }
}

void searchPlayer(Player team[], int count) {
    if (count == 0) {
        cout << "No players found!\n";
    } else {
        int searchNo;
        cout << "Enter Jersey No to search: ";
        cin >> searchNo;
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (team[i].jerseyNo == searchNo) {
                cout << "Player Found!\n";
                cout << "Name: " << team[i].name << endl;
                cout << "Position: " << team[i].position << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "No player found!\n";
        }
    }
}

int main() {
    cout << "***** Welcome to Sports Team Management System *****" << endl;
    Player team[100];
    int choice, count = 0;

    while (true) {
        cout << "\n1. Add Players\n2. View All Players\n3. Search Player\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            addPlayers(team, count);
        } else if (choice == 2) {
            viewPlayers(team, count);
        } else if (choice == 3) {
            searchPlayer(team, count);
        } else if (choice == 4) {
            cout << "Exited successfully!\n";
            break;
        } else {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}

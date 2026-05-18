#include <iostream>
#include <string>
using namespace std;

// Function declarations
void intro();
void room1();
void room2();
void room3();
void gameOver(string reason);
void victory();

int main() {
    intro();
    room1();
    return 0;
}

void intro() {
    cout << "Welcome to the Text Adventure Game!" << endl;
    cout << "You wake up in a dark room. There are 3 doors in front of you." << endl;
    cout << "Choose wisely to escape the dungeon alive..." << endl << endl;
}

void room1() {
    int choice;
    cout << "Room 1: You see three doors. Which one will you choose?" << endl;
    cout << "1. Go through the left door" << endl;
    cout << "2. Go through the middle door" << endl;
    cout << "3. Go through the right door" << endl;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            room2();
            break;
        case 2:
            gameOver("You walked into a trap room filled with spikes!");
            break;
        case 3:
            gameOver("A dragon burnt you to ashes!");
            break;
        default:
            gameOver("Invalid input! You got lost in the dark.");
    }
}

void room2() {
    int choice;
    cout << "\nRoom 2: You enter a dimly lit room with a treasure chest and a door." << endl;
    cout << "1. Open the treasure chest" << endl;
    cout << "2. Ignore the chest and move to the next room" << endl;
    cout << "Enter choice (1-2): ";
    cin >> choice;

    if (choice == 1) {
        gameOver("It was a trap! Poison gas fills the room.");
    } else if (choice == 2) {
        room3();
    } else {
        gameOver("Invalid input! You tripped and hit your head.");
    }
}

void room3() {
    int choice;
    cout << "\nRoom 3: You see a final door with a puzzle lock." << endl;
    cout << "Solve the puzzle: What is 3 + 4 * 2?" << endl;
    cout << "Enter your answer: ";
    cin >> choice;

    if (choice == 11) {
        victory();
    } else {
        gameOver("Wrong answer! The floor collapses under you.");
    }
}

void gameOver(string reason) {
    cout << "\nGame Over: " << reason << endl;
    cout << "Better luck next time!" << endl;
}

void victory() {
    cout << "\nCongratulations! You solved the puzzle and escaped the dungeon!" << endl;
    cout << "You Win!" << endl;
}


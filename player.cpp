#include "player.h"

Player::Player() {
    cout << "Entrer votre nom : ";
    getline(cin, name);
}

int Player::setChoice() {
    srand(time(0));
    int number_guessing = rand() % 100;
    do {
        cout << name << " choisissez un nombre entre 0 et 99: ";
        cin >> choice;
        cin.get(); 
        if(choice > number_guessing) {
            cout << choice << " est plus grand que le nombre à deviner." << endl;
        }
        else {
            cout << choice << " est plus petit que le nombre à deviner." << endl;
        }
    } while(choice != number_guessing);
    return choice;
}

void Player::winner() {
    int win = setChoice();
    cout << name << " a gagné ! Le nombre était "<< choice << endl;
}
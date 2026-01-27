#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

void Instructions() {
    cout << "Goal:" << endl;
    cout << "- Be the first player to reach 100." << endl << endl;
	cout << "Game Mechanics:" << endl;
    cout << "Each turn you choose which dice to use:" << endl;
    cout << "   - Enter 1 for Basic Dice:" << endl;
    cout << "       * Rolls a random number from 1 to 6." << endl;
    cout << "       * You move forward by that many spaces." << endl;
    cout << "   - Enter 2 for Special Dice:" << endl;
    cout << "       * First, pick a number between 3 and 6." << endl;
    cout << "       * The special dice rolls a random number from 3 to 6." << endl;
    cout << "       * If your guess MATCHES the roll, you move DOUBLE the number of spaces." << endl;
    cout << "       * If your guess is WRONG, you do NOT move the turn." << endl << endl;
    cout << "Movement Rules:" << endl;
    cout << "- If your move would go past 100, you stay where you are and your turn is skipped." << endl;
    cout << "- If you land on a ladder, you climb a number of spaces." << endl;
    cout << "- If you land a snake, you go down a number of spaces." << endl << endl;
}
// show positions of snakes and ladders
void snakes(vector<int>& snakeMouths) {
	cout << "The snakes are at positions: ";
    for(int i = 0; i < snakeMouths.size(); i++) {
		cout << snakeMouths[i] << " ";
	}

}
void ladders(vector<int>& ladderStart) {
    cout << "The ladders are at positions: ";
    for (int i = 0; i < ladderStart.size(); i++) {
        cout << ladderStart[i] << " ";
    }
}
// dice functions
int rollBasicDice() {
    return rand() % 6 + 1;
}
int rollSpecialDice() {
    return (rand() % 4) + 3;
}


int main() {
    srand(time(0));
    int roll;
    int choiceDice;
    int guess;
    int move = 0;
    int turn = 0;

    //player names
    vector<string> names(2);
    cout << "Player 1 name: " << endl;
    cin >> names[0];
    cout << "Player 2 name: " << endl;
    cin >> names[1];
	cout << endl;
    

    //starting position
    vector<int> pos = { 0 , 0 };

    //snakes
    vector<int> snakeMouths = { 13 , 34 , 54 , 78 , 85, 99 };
    vector<int> snakeTail = { 9 , 29 , 48 , 70 , 26 , 83 };

    //ladders
    vector<int> ladderStart = { 5 , 15 , 28 , 37 , 61 , 75 };
    vector<int> ladderEnd = { 10 , 30 , 35 , 50 , 70 , 90 };

	// instructions
	cout << "Would you like to see the instructions? (1 = Yes , 2 = No): " << endl;
	cin >> choiceDice;
    if (choiceDice == 1) {
        Instructions();
    }
    while (true) {
        cout << names[0] << " is at position " << pos[0] << " || " << names[1] << " is at position " << pos[1] << endl;

        cout << "It's " << names[turn] << "'s turn." << endl;

        cout << "Choose dice (1 = Basic  2 = Special ";
		cout << "3 = If you want to see the positions of the snakes and ladders): " << endl;
        cin >> choiceDice;

        if (choiceDice == 3) {
            snakes(snakeMouths);
			cout << endl;
            ladders(ladderStart);
            cout << endl;
            cout << "Now choose your dice (1 = Basic  2 = Special): " << endl;
            cin >> choiceDice;
        }


        if (choiceDice == 1) {
            roll = rollBasicDice();
            cout << "You rolled: " << roll << endl;
            move = roll;
        }
        else if (choiceDice == 2) {
            cout << "Pick a number between 3 and 6: " << endl;
            cin >> guess;
            int roll = rollSpecialDice();
            cout << "Special dice rolled: " << roll << endl;
            if (guess == roll) {
                cout << "Correct guess! Movement doubled!" << endl;
                move = roll * 2;
            }
            else {
                cout << "Wrong guess! Stay in place." << endl;
                move = 0;
            }

        }
        

        // checks if you pass 100
        if (pos[turn] + move > 100) {
            cout << "You passed 100! Turn skipped." << endl;
        }
        else {
            pos[turn] += move;
        }
        //checks if you landed on a snake
        for( int i = 0; i < snakeMouths.size(); i++) {
            if (pos[turn] == snakeMouths[i]) {
                cout << "Oh no! You landed on a snake!" << endl;
                pos[turn] = snakeTail[i];
                cout << "You slid down to " << pos[turn] << endl;
            }
		}
		//checks if you landed on a ladder
        for(int i = 0; i < ladderStart.size(); i++) {
            if (pos[turn] == ladderStart[i]) {
                cout << "Yay! You landed on a ladder!" << endl;
                pos[turn] = ladderEnd[i];
                cout << "You climbed up to " << pos[turn] << endl;
            }
		}

        if (pos[turn] == 100) {
            cout << "Congrats player " << names[turn] << " won the game!!!" << endl;
            break;
        }

        turn = abs(turn - 1); // switch turns
		


    }










    return 0;
}
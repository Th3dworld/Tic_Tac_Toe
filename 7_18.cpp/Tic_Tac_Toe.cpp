#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*
* This program is a tic tac toe game
* It will utilize the use of Arrays to store player positions
* 
* Matanda Hillary Phiri.
*/
void play_game(string);

int main() {
	//Declare Variables
	const int spec = 3;
	char board[spec][spec] = { {'*','*','*'},{'*','*','*'},{'*','*','*'} };
	char boardis[spec][spec] = { {'X','*','*'},{'*','*','*'},{'*','*','*'} }, playchar;
	int rows[spec] = { 1, 2, 3 };
	char column[spec] = { 'M', 'A', 'T' },start;
	string play;
	int M1, M2, M3, A1, A2, A3, T1, T2, T3;
	M1 = M2 = M3 = A1 = A2 = A3 = T1 = T2 = T3 = 0;

	 
	cout << "Welcome to Tick Tack Toe, to get started simply press enter";
	cin.get(start);
	cin.clear();

	//Display bored
	cout << "\n\t\t";
	for (int i = 0; i < spec; i++) {
		cout << "    " << column[i];
	}
	cout << "\n\n";
	for (int i = 0; i < spec; i++) {
		cout << "\t\t" << rows[i] << "   ";
		for (int x = 0; x < spec; x++) {
			cout << board[i][x] << "    ";
		}
		cout << endl;
	}

	//Give user instructions
	cout << "\nTo play simply input the column and row number for example M1, will play the following:\n";

	//Display bored example
	cout << "\n\t\t";
	for (int i = 0; i < spec; i++) {
		cout << "    " << column[i];
	}
	cout << "\n\n";
	for (int i = 0; i < spec; i++) {
		cout << "\t\t" << rows[i] << "   ";
		for (int x = 0; x < spec; x++) {
			cout << boardis[i][x] << "    ";
		}
		cout << endl;
	}
	
	cout << "\n\n";
	//Assign values to rows and columns
	for (int x = 1; x <= 9; x++) {	
		if (x % 2 != 0) {
			cout << "\nPlayer 1(X)  please choose the posiotion you would like to play:";
			cin >> play;
			play[0] = toupper(play[0]);

			//Input Validation
			while ((play != "M1" && play != "M2") && (play != "M3" && play != "A1") && (play != "A2" && play != "A3") && (play != "T1" && play != "T2") && play != "T3") {
				cout << "\n!ERROR! You can only play in a row between and including 1 and 3.\n"
					<< "Please input the correct value:";
				cin >> play;
				play[0] = toupper(play[0]);
			}
			//Set character to X
			playchar = 'X';
		}
		else {
			cout << "\nPlayer 2(O)  please choose the posiotion you would like to play:";
			cin >> play;
			play[0] = toupper(play[0]);

			//Input Validation
			while ((play != "M1" && play != "M2")&& (play != "M3" && play != "A1")&& (play != "A2" && play != "A3")&& (play != "T1" && play != "T2") && play != "T3") {
				cout << "\n!ERROR! You can only play in a row between and including 1 and 3.\n"
					<< "Please input the correct value:";
				cin >> play;
				play[0] = toupper(play[0]);
			}
			//Set character to O
			playchar = 'O';
		}
		//Input validation for positions
		while (play == "M1" && M1 == 1) {
			cout << "\n!ERROR! Postion already used please play somewhere else:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		while (play == "M2" && M2 == 1) {
			cout << "\n!ERROR! Postion already used please play somewhere else:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		while (play == "M3" && M3 == 1) {
			cout << "\n!ERROR! Postion already used please play somewhere else:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		while (play == "A1" && A1 == 1) {
			cout << "\n!ERROR! Postion already used please play somewhere else:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		while (play == "A2" && A2 == 1) {
			cout << "\n!ERROR! Postion already used please play somewhere else:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		while (play == "A3" && A3 == 1) {
			cout << "\n!ERROR! Postion already used please play somewhere else:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		while (play == "T1" && T1 == 1) {
			cout << "\n!ERROR! Postion already used please play somewhere else:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		while (play == "T2" && T2 == 1) {
			cout << "\n!ERROR! Postion already used please play somewhere else:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		while (play == "T3" && T3 == 1) {
			cout << "\n!ERROR! Postion already used please play somewhere else:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		while ((play != "M1" && play != "M2") && (play != "M3" && play != "A1") && (play != "A2" && play != "A3") && (play != "T1" && play != "T2") && play != "T3") {
			cout << "\n!ERROR! You can only play in a row between and including 1 and 3.\n"
				<< "Please input the correct value:";
			cin >> play;
			play[0] = toupper(play[0]);
		}
		//Determine position player has played
		if (play == "M1" ) {
			//Input validation
			if (M1 < 1) {
				board[0][0] = playchar;
				M1 += 1;
			}
		}
		 else if (play == "M2") {
				if (M2 < 1) {
					board[1][0] = playchar;
					M2 += 1;
			}
		}
		else if (play == "M3") {
				if (M3 < 1) {
					board[2][0] = playchar;
					M3 += 1;
				}
			
		}
		else if(play == "A1") {
				if (A1 < 1) {
					board[0][1] = playchar;
					A1 += 1;
				}
		}
		else if (play == "A2") {
				if (A2 < 1) {
					board[1][1] = playchar;
					A2 += 1;
				}	
		}
		else if (play == "A3") {
				if (A3 < 1) {
					board[2][1] = playchar;
					A3 += 1;
				}
		}
		else if (play == "T1") {
				if (T1 < 1) {
					board[0][2] = playchar;
					T1 += 1;
				}

		}
		else if (play == "T2") {
				if (T2 < 1) {
					board[1][2] = playchar;
					T2 += 1;
				}
		}
		if (play == "T3") {
				if (T3 < 1) {
					board[2][2] = playchar;
					T3 += 1;
				}
			
		}

		//Display bored
		cout << "\n\t\t";
		for (int i = 0; i < spec; i++) {
			cout << "    " << column[i];
		}
		cout << "\n\n";
		for (int i = 0; i < spec; i++) {
			cout << "\t\t" << rows[i] << "   ";
			for (int x = 0; x < spec; x++) {
				cout << board[i][x] << "    ";
			}
			cout << endl;
		}
		if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') || 
			(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')||
			(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')||
			(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
			(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||
			(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
			(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')||
			(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')) {
			cout << "\t\t\n\nPlayer 1 wins congratulations!\n\n\n";
			break;

		}
		if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') ||
			(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') ||
			(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||
			(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
			(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') ||
			(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||
			(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
			(board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')) {
			cout << "\t\t\n\nPlayer 2 wins. Congratulations!\n\n\n";
			break;

		}
	}
	return 0;
}


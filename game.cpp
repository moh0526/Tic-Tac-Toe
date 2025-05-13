#include <iostream> 
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace std; 

//Draws the Tic-Tac-Toe board

void drawBoard(char (&board)[9]){

		cout << "\n";
		cout << "     |       |     \n";
		cout << "  " << board[0] << "  |   " << board[1] << "   |  " << board[2] << "  \n";
		cout << "     |       |     \n";
		cout << "------------------\n";
		cout << "     |       |     \n";
		cout << "  " << board[3] << "  |   " << board[4] << "   |  " << board[5] << "  \n";
		cout << "     |       |     \n";
		cout << "------------------\n";
		cout << "     |       |     \n";
		cout << "  " << board[6] << "  |   " << board[7] << "   |  " << board[8] << "  \n";
		cout << "     |       |     \n";
		cout << "\n";
}

//Updates the board array with the player's move as long as the space is empty
//And calls the drawBoard function to redraw the updated board

void playerMove(char (&board)[9], char &player){
	unsigned short int chances = 3;
	char choice = ' ';
	
	while (chances > 0 ){
		cout << "Where would you like to place your X, any number 1 through 9: ";
		cin >> choice;
		switch (choice){
			case '1':
				if (board[0] == ' '){
					board[0] = player;
					drawBoard(board);
					chances = 0;
				}
				else{
					cout << "Spot is taken. Please select an open space.\n You have " << chances << " more chances to select open space.\n";
					chances--;
				}
				break;
			case '2':
				if (board[1] == ' '){
					board[1] = player;
					drawBoard(board);
					chances = 0;
				}
				else{
					cout << "Spot is taken. Please select an open space.\n You have " << chances << " more chances to select open space.\n";
					chances--;
				}
				break;
			case '3':
				if (board[2] == ' '){
					board[2] = player;
					drawBoard(board);
					chances = 0;
				}
				else{
					cout << "Spot is taken. Please select an open space.\n You have " << chances << " more chances to select open space.\n";
					chances--;
				}
				break;
			case '4':
				if (board[3] == ' '){
					board[3] = player;
					drawBoard(board);
					chances = 0;
				}
				else{
					cout << "Spot is taken. Please select an open space.\n You have " << chances << " more chances to select open space.\n";
					chances--;
				}
				break;
			case '5':
				if (board[4] == ' '){
					board[4] = player;
					drawBoard(board);
					chances = 0;
				}
				else{
					cout << "Spot is taken. Please select an open space.\n You have " << chances << " more chances to select open space.\n";
					chances--;
				}
				break;
			case '6':
				if (board[5] == ' '){
					board[5] = player;
					drawBoard(board);
					chances = 0;
				}
				else{
					cout << "Spot is taken. Please select an open space.\n You have " << chances << " more chances to select open space.\n";
					chances--;
				}
				break;
			case '7':
				if (board[6] == ' '){
					board[6] = player;
					drawBoard(board);
					chances = 0;
				}
				else{
					cout << "Spot is taken. Please select an open space.\n You have " << chances << " more chances to select open space.\n";
					chances--;
				}
				break;
			case '8':
				if (board[7] == ' '){
					board[7] = player;
					drawBoard(board);
					chances = 0;
				}
				else{
					cout << "Spot is taken. Please select an open space.\n You have " << chances << " more chances to select open space.\n";
					chances--;
				}
				break;
			case '9':
				if (board[8] == ' '){
					board[8] = player;
					drawBoard(board);
					chances = 0;
				}
				else{
					cout << "Spot is taken. Please select an open space.\n You have " << chances << " more chances to select open space.\n";
					chances--;
				}
				break;
		}
	}
}

//Checks for a potential winning move being available
//if it is available, the computer will make that move on the hard difficulty

bool winning_move(char (&board)[9], int &position_for_win){
	bool available_winning_move = false;
	//row1
	if (board [0] == board[1] && board[2] == ' '){
		position_for_win = 2;
		available_winning_move = true;
	}
	else if (board [1] == board[2] && board[0] == ' '){
		position_for_win = 0;
		available_winning_move = true;
	}
	else if (board [0] == board[2] && board[1] == ' '){
		position_for_win = 1;
		available_winning_move = true;
	}
	//row2
	if (board [3] == board[4] && board[5] == ' '){
		position_for_win = 5;
		available_winning_move = true;
	}
	else if (board [4] == board[5] && board[3] == ' '){
		position_for_win = 3;
		available_winning_move = true;
	}
	else if (board [3] == board[5] && board[4] == ' '){
		position_for_win = 4;
		available_winning_move = true;
	}
	//row3
	if (board [6] == board[7] && board[8] == ' '){
		position_for_win = 8;
		available_winning_move = true;
	}
	else if (board [7] == board[8] && board[6] == ' '){
		position_for_win = 6;
		available_winning_move = true;
	}
	else if (board [6] == board[8] && board[7] == ' '){
		position_for_win = 7;
		available_winning_move = true;
	}
	//col1
	if (board [0] == board[3] && board[6] == ' '){
		position_for_win = 6;
		available_winning_move = true;
	}
	else if (board [3] == board[6] && board[0] == ' '){
		position_for_win = 0;
		available_winning_move = true;
	}
	else if (board [0] == board[6] && board[3] == ' '){
		position_for_win = 3;
		available_winning_move = true;
	}
	//col2
	if (board [1] == board[4] && board[7] == ' '){
		position_for_win = 7;
		available_winning_move = true;
	}
	else if (board [4] == board[7] && board[1] == ' '){
		position_for_win = 1;
		available_winning_move = true;
	}
	else if (board [1] == board[7] && board[4] == ' '){
		position_for_win = 4;
		available_winning_move = true;
	}
	//col3
	if (board [2] == board[5] && board[8] == ' '){
		position_for_win = 8;
		available_winning_move = true;
	}
	else if (board [5] == board[8] && board[2] == ' '){
		position_for_win = 2;
		available_winning_move = true;
	}
	else if (board [2] == board[8] && board[5] == ' '){
		position_for_win = 5;
		available_winning_move = true;
	}
	//diag1
	if (board [0] == board[4] && board[8] == ' '){
		position_for_win = 8;
		available_winning_move = true;
	}
	else if (board [4] == board[8] && board[0] == ' '){
		position_for_win = 0;
		available_winning_move = true;
	}
	else if (board [0] == board[8] && board[4] == ' '){
		position_for_win = 4;
		available_winning_move = true;
	}
	//diag1
	if (board [2] == board[4] && board[6] == ' '){
		position_for_win = 6;
		available_winning_move = true;
	}
	else if (board [4] == board[6] && board[2] == ' '){
		position_for_win = 2;
		available_winning_move = true;
	}
	else if (board [2] == board[5] && board[4] == ' '){
		position_for_win = 4;
		available_winning_move = true;
	}

	return available_winning_move;
}

//The computer move algorithm, it is based on difficulty and what the player plays
//First difficulty has randomized moves, second difficulty has moves based on the best first 2-3 moves
//based on what the player plays, third difficulty has the same functionality as the second difficulty
//but also adds another algorithm to check for any possibly winning moves and plays that as its move

void computerMove(char (&board)[9], char &computer, char &difficulty, bool &player_turn, int &move_num, int &previous_move, int &position_for_win){
	bool completed_Move = false;
	srand(time(0));
	
	if (difficulty == '1'){
		while (completed_Move == false){
			char space = rand() % 9;
			if (board[space] == ' '){
				completed_Move = true;
				board[space] = computer;
			}
		}
	}

	else if (difficulty == '2'){

		if (player_turn == false){
			if (move_num == 1){
				char space = rand() % 4;
				if (space == 1){
					previous_move = 0;
					board[0] = computer;
					completed_Move = true;
				}
				else if (space == 2){
					previous_move = 2;
					board[2] = computer;
					completed_Move = true;
				}
				else if (space == 3){
					previous_move = 6;
					board[6] = computer;
					completed_Move = true;
				}
				else if (space == 4){
					previous_move = 8;
					board[8] = computer;
					completed_Move = true;
				}
			}
			if (move_num == 2){
				if (previous_move == 0 && board[8] == ' '){
					board[8] = computer;
					completed_Move = true;
				}
				else if (previous_move == 2 && board[6] == ' '){
					board[6] = computer;
					completed_Move = true;
				}
				else if (previous_move == 6 && board[2] == ' '){
					board[2] = computer;
					completed_Move = true;
				}
				else if (previous_move == 8 && board[0] == ' '){
					board[0] = computer;
					completed_Move = true;
				}
				else{
					board[4] = computer;
				}
			}
			else{
				while (completed_Move == false){
					char space = rand() % 9;
					if (board[space] == ' '){
						completed_Move = true;
						board[space] = computer;
					}
				}
			}
			
		}
		else{
			if (move_num == 1){
				if (board[0] != ' ' || board[2] != ' ' || board[6] != ' ' || board[8] != ' '){
					board[4] = computer;
					previous_move = 4;
					completed_Move = true;
				}
				else if (board[4] != ' '){
					char space = rand() % 4;
					if (space == 1){
						previous_move = 0;
						board[0] = computer;
						completed_Move = true;
					}
					else if (space == 2){
						previous_move = 2;
						board[2] = computer;
						completed_Move = true;
					}
					else if (space == 3){
						previous_move = 6;
						board[6] = computer;
						completed_Move = true;
					}
					else if (space == 4){
						previous_move = 8;
						board[8] = computer;
						completed_Move = true;
					}
				}
				else{
					board[4] = computer;
					previous_move = 4;
					completed_Move = true;
				}
			}
			else if (move_num == 2){
				if (board[0] != ' ' && board[8] != ' '){
					char space = rand() % 4;
					if (space == 1){
						previous_move = 1;
						board[1] = computer;
						completed_Move = true;
					}
					else if (space == 2){
						previous_move = 3;
						board[3] = computer;
						completed_Move = true;
					}
					else if (space == 3){
						previous_move = 5;
						board[5] = computer;
						completed_Move = true;
					}
					else if (space == 4){
						previous_move = 7;
						board[7] = computer;
						completed_Move = true;
					}
				}
				else if (board[2] != ' ' && board[6] != ' ' ){
					char space = rand() % 4;
					if (space == 1){
						previous_move = 1;
						board[1] = computer;
						completed_Move = true;
					}
					else if (space == 2){
						previous_move = 3;
						board[3] = computer;
						completed_Move = true;
					}
					else if (space == 3){
						previous_move = 5;
						board[5] = computer;
						completed_Move = true;
					}
					else if (space == 4){
						previous_move = 7;
						board[7] = computer;
						completed_Move = true;
					}
				}
				else{
					char space = rand() % 4;
					if (space == 1){
						previous_move = 0;
						board[0] = computer;
						completed_Move = true;
					}
					else if (space == 2){
						previous_move = 2;
						board[2] = computer;
						completed_Move = true;
					}
					else if (space == 3){
						previous_move = 6;
						board[6] = computer;
						completed_Move = true;
					}
					else if (space == 4){
						previous_move = 8;
						board[8] = computer;
						completed_Move = true;
					}
				}
			}
			else{
				while (completed_Move == false){
					char space = rand() % 9;
					if (board[space] == ' '){
						completed_Move = true;
						board[space] = computer;
					}
				}
			}
		}
	}
	else if (difficulty == '3'){
		if (player_turn == false){
			if (move_num == 1){
				char space = rand() % 4;
				if (space == 1){
					previous_move = 0;
					board[0] = computer;
					completed_Move = true;
				}
				else if (space == 2){
					previous_move = 2;
					board[2] = computer;
					completed_Move = true;
				}
				else if (space == 3){
					previous_move = 6;
					board[6] = computer;
					completed_Move = true;
				}
				else if (space == 4){
					previous_move = 8;
					board[8] = computer;
					completed_Move = true;
				}
			}
			if (move_num == 2){
				if (previous_move == 0 && board[8] == ' '){
					board[8] = computer;
					completed_Move = true;
				}
				else if (previous_move == 2 && board[6] == ' '){
					board[6] = computer;
					completed_Move = true;
				}
				else if (previous_move == 6 && board[2] == ' '){
					board[2] = computer;
					completed_Move = true;
				}
				else if (previous_move == 8 && board[0] == ' '){
					board[0] = computer;
					completed_Move = true;
				}
				else{
					board[4] = computer;
				}
			}
			else{
				while (completed_Move == false){
					char space = rand() % 9;
					if (winning_move(board, position_for_win)){
						board[position_for_win] = computer;
						completed_Move = true;
					}
					else if (board[space] == ' '){
						board[space] = computer;
						completed_Move = true;
					}
				}
			}
			
		}
		else{
			if (move_num == 1){
				if (board[0] != ' ' || board[2] != ' ' || board[6] != ' ' || board[8] != ' '){
					board[4] = computer;
					previous_move = 4;
					completed_Move = true;
				}
				else if (board[4] != ' '){
					char space = rand() % 4;
					if (space == 1){
						previous_move = 0;
						board[0] = computer;
						completed_Move = true;
					}
					else if (space == 2){
						previous_move = 2;
						board[2] = computer;
						completed_Move = true;
					}
					else if (space == 3){
						previous_move = 6;
						board[6] = computer;
						completed_Move = true;
					}
					else if (space == 4){
						previous_move = 8;
						board[8] = computer;
						completed_Move = true;
					}
				}
				else{
					board[4] = computer;
					previous_move = 4;
					completed_Move = true;
				}
			}
			else if (move_num == 2){
				if (board[0] != ' ' && board[8] != ' '){
					char space = rand() % 4;
					if (space == 1){
						previous_move = 1;
						board[1] = computer;
						completed_Move = true;
					}
					else if (space == 2){
						previous_move = 3;
						board[3] = computer;
						completed_Move = true;
					}
					else if (space == 3){
						previous_move = 5;
						board[5] = computer;
						completed_Move = true;
					}
					else if (space == 4){
						previous_move = 7;
						board[7] = computer;
						completed_Move = true;
					}
				}
				else if (board[2] != ' ' && board[6] != ' ' ){
					char space = rand() % 4;
					if (space == 1){
						previous_move = 1;
						board[1] = computer;
						completed_Move = true;
					}
					else if (space == 2){
						previous_move = 3;
						board[3] = computer;
						completed_Move = true;
					}
					else if (space == 3){
						previous_move = 5;
						board[5] = computer;
						completed_Move = true;
					}
					else if (space == 4){
						previous_move = 7;
						board[7] = computer;
						completed_Move = true;
					}
				}
				else{
					char space = rand() % 4;
					if (space == 1){
						previous_move = 0;
						board[0] = computer;
						completed_Move = true;
					}
					else if (space == 2){
						previous_move = 2;
						board[2] = computer;
						completed_Move = true;
					}
					else if (space == 3){
						previous_move = 6;
						board[6] = computer;
						completed_Move = true;
					}
					else if (space == 4){
						previous_move = 8;
						board[8] = computer;
						completed_Move = true;
					}
				}
			}
			else{
				while (completed_Move == false){
					char space = rand() % 9;
					if (winning_move(board, position_for_win)){
						board[position_for_win] = computer;
						completed_Move = true;
					}
					else if (board[space] == ' '){
						board[space] = computer;
						completed_Move = true;
					}
				}
			}
		}
	}
	
	drawBoard(board);
	
}

//Randomly determines whether the player or computer starts

void who_Starts(bool &player_turn, char &difficulty){
	srand(time(0));
	if (difficulty == '3'){
		player_turn = false;
	}
	else if (rand() % 2){
		player_turn = true;
	}
	else{
		player_turn = false;
	}
	
}

//Checks if there is a 3 in a row combination

bool is_winner(char (&board)[9]){

	bool won = false;

	//checking rows

	if (board[0] == board[1] && board[1] == board[2] && board[2] != ' '){
		won = true;
	}
	else if (board[3] == board[4] && board[4] == board[5] && board[5] != ' '){
		won = true;
	}
	else if (board[6] == board[7] && board[7] == board[8] && board[8] != ' '){
		won = true;
	}

	// checking coloumns

	if (board[0] == board[3] && board[3] == board[6] && board[6] != ' '){
		won = true;
	}
	else if (board[1] == board[4] && board[4] == board[7] && board[7] != ' '){
		won = true;
	}
	else if (board[2] == board[5] && board[5] == board[8] && board[8] != ' '){
		won = true;
	}

	//checking diagonals

	if (board[0] == board[4] && board[4] == board[8] && board[8] != ' '){
		won = true;
	}
	else if (board[2] == board[4] && board[4] == board[6] && board[6] != ' '){
		won = true;
	}
	return won;
}

//Checks if the board is filled

bool filled_board(char (&board)[9]){
	bool filled = true;
	for (int i = 0; i < 9; i++){
		if (board[i] == ' '){
			filled = false;
		}
	}
	return filled;
}

//Resets the board if the board is filled or if there is a winner so that the user can play again

void reset(char (&board)[9]){
	if (filled_board(board) || is_winner(board) == true){
		for (int i = 0; i < 9; i++){
			board[i] = ' ';
		}
	}
}

//The Game Algorithm that runs the player vs. computer mode, it simulates the computer and player moves
//It also checks for a winner and filled board. It resets the board when done and reports whoever won

void player_vs_computer(bool &player_turn, char (&board)[9], char &difficulty, int &move_num, int &previous_move, int &position_for_win, string (&user_info)[5], int &win, int &loss){
	win = stoi(user_info[2]);
	loss = stoi(user_info[3]);

	drawBoard(board);

	if (player_turn == true){
		char player = 'X';
		char computer = 'O';
		playerMove(board, player);
		for (int i = 0; i < 5; i++){
			if (!filled_board(board)){
				if ((!is_winner(board))){
					move_num++;
					computerMove(board, computer, difficulty, player_turn, move_num, previous_move, position_for_win);
				}
				else{
					reset(board);
					cout << "Player won! Congrats.\n";
					win+=1;
					break;
				}
				if ((!is_winner(board))){
					playerMove(board, player);
				}
				else{
					reset(board);
					cout << "Computer won! Good try.\n";
					loss+=1;
					break;
				}
			}
			else if (filled_board(board) && (!is_winner(board))){
				reset(board);
				cout << "The game ended in a draw.\n";
				break;
			}
			else if (is_winner(board)){
				reset(board);
				cout << "Player won! Congrats.\n";
				win+=1;
				break;
			}
		}
	}	
	
	else{
		char player = 'O';
		char computer = 'X';
		move_num = 1;
		computerMove(board, computer, difficulty, player_turn, move_num, previous_move, position_for_win);
		for (int i = 0; i < 5; i++){
			if (!filled_board(board)){
				if ((!is_winner(board))){
					playerMove(board, player);
				}
				else{
					reset(board);
					cout << "Computer won! Good try.\n";
					loss+=1;
					break;
				}
				if ((!is_winner(board)) && (!filled_board(board))){
					move_num++;
					computerMove(board, computer, difficulty, player_turn, move_num, previous_move, position_for_win);
				}
				else{
					reset(board);
					cout << "Player won! Congrats.\n";
					win+=1;
					break;
				}
			}
			else if (filled_board(board) && (!is_winner(board))){
				reset(board);
				cout << "The game ended in a draw.\n";
				break;
			}
			else if (is_winner(board)){
				reset(board);
				cout << "Computer won! Good try.\n";
				loss+=1;
				break;
			}
			
		}
	}

	user_info[2] = to_string(win);
	user_info[3] = to_string(loss);
}

//The Game Algorith for the player vs. player mode, it simulates two players playing against each other
//It reports whichever player wins

void player_vs_player(char (&board)[9]){
	drawBoard(board);
	char player1 = 'X';
	char player2 = 'O';
	cout << "It is Player 1's move first.\n";
	playerMove(board, player1);
	for (int i = 0; i < 5; i++){
		if (!filled_board(board)){
			if ((!is_winner(board))){
				playerMove(board, player2);
			}
			else{
				reset(board);
				cout << "Player 2 won! Congrats. Good try Player 1.\n";

				break;
			}
			if ((!is_winner(board))){
				playerMove(board, player1);
			}
			else{
				reset(board);
				cout << "Player 1 won! Congrats. Good try Player 2.\n";
				break;
			}
		}
		else if (filled_board(board) && (!is_winner(board))){
			reset(board);
			cout << "The game ended in a draw.\n";
		}
		else if (is_winner(board)){
			reset(board);
			cout << "Player 1 won! Congrats.\n";
		}
	}
}

//Opens the User_Info text file, scans through each line in the file, if the file,
//has a matching username and password to what the user inputted, then it verifies their
//login by returning true

bool verifyLogin(string username_input, string password_input, string &win_input, string &loss_input, string &games_played_input, string (&user_info)[5]){
	string username;
	string password;
	string line;

	ifstream infile;
	infile.open("User_Info.txt");
	while (getline(infile, line)){
		istringstream info(line);
		info >> username;
		info >> password;
		info >> win_input;
		info >> loss_input;
		info >> games_played_input;

		user_info[0] = username_input;
		user_info[1] = password_input;
		user_info[2] = win_input;
		user_info[3] = loss_input;
		user_info[4] = games_played_input;

		if (username == username_input && password == password_input){
			cout << "Thank you for logging in " + username + ".\n";
			infile.close();
			return true;
		}
	}
	infile.close();
	return false;
}

//Opens the User_Info text file, checks if the file is empty, if it is, then it add the user's info
//if the file isn't empty, then it checks through each line in the file,
//verifying that the user has inputted a new username

bool newLogin(string username_input, string password_input){
	string line;
	string username;
	string password;
	string temp_win;
	string temp_loss;

	ifstream infile;
	infile.open("User_Info.txt");
	if (infile.peek() == ifstream::traits_type::eof()){
		infile.close();
		ofstream outfile;
		outfile.open("User_Info.txt", ios::app);
		outfile << username_input + " " + password_input + " 0 0 0\n"; 
		outfile.close();
		return true;
	}
	else{
		while (getline(infile, line)){
			istringstream info(line);
			info >> username;
			info >> password;
			info >> temp_win;
			info >> temp_loss;
			if (username != username_input){
				infile.close();
				ofstream outfile;
				outfile.open("User_Info.txt", ios::app);
				outfile << username_input + " " + password_input + " 0 0 0\n"; 
				outfile.close();
				return true;
			}
			else{
				return false;
			}
	
		}
	}

	return false;
}

//This function opens User_Info text file in read mode, gets each line in the file, adding it to a vector,
//then, it loops through the vector changing the previous user's record, replacing it with the
//new data, then it rewrite the entire file with the new data in its proper position

void updateStat(string (&user_info)[5], string (&old_user_info)[5]){
	string line;
	vector <string> file_info;

	string old_record = old_user_info[0] + " "  + old_user_info[1] + " "  + old_user_info[2] + " "  + old_user_info[3] + " " + old_user_info[4];
	string record = user_info[0] + " "  + user_info[1] + " "  + user_info[2] + " "  + user_info[3] + " " + user_info[4];


	ifstream infile;
	infile.open("User_Info.txt");

	while(getline(infile, line)){
		file_info.push_back(line);
	}
	for (string &str : file_info){
		if(old_record == str){
			str = record;
			break;
		}
	}
	ofstream outfile;
	outfile.open("User_Info.txt");
	for (string str : file_info){
		outfile << str + "\n";
	}
	outfile.close();
	
}

int main(){

	//All variables

	char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	char menu;
	char mode;
	char difficulty;
	bool player_turn;
	bool running = true;
	bool played_before = false;
	int move_num = 0;
	int previous_move;
	int position_for_win;
	char sign_up;
	string username_input;
	string password_input;
	bool invalid_user = true;
	string user_info[5];
	string win_input;
	string loss_input;
	string games_played_input;
	int win;
	int loss;
	int games_played;


	cout << "Welcome to Tic-Tac-Toe.\nAre you a new user or a returning user?\n1. New User.\n2. Returning User.\nWhich would you like to do: ";
	cin >> sign_up;

	//Login in menu for New Users and Returning Users

	switch (sign_up){
	 	case '1': {
	 		while (invalid_user == true){
	 			string word;
	 			string games_played_input = "0";
	 			string win_input = "0";
				string loss_input = "0";
	 			

	 			cout << "Please input your username: ";
		 		cin >> username_input;
		 		cout << "Please input your password: ";
		 		cin >> password_input;

		 		if (newLogin(username_input, password_input)){
		 			user_info[0] = username_input;
		 			user_info[1] = password_input;
		 			user_info[2] = win_input;
		 			user_info[3] = loss_input;
		 			user_info[4] = games_played_input;
		 			cout << "Welcome, " + username_input + ". Thank you for creating an account.\n";
		 			invalid_user = false;
		 		}
		 		else{
		 			cout << "This username is taken already. Please input a different username.\n";

		 		}
	 		}

 			
	 
	 		break;
	 	}
	 	case '2': {

	 		while (invalid_user == true){

	 			cout << "Please input your username: ";
		 		cin >> username_input;
		 		cout << "Please input your password: ";
		 		cin >> password_input;



		 		if (verifyLogin(username_input, password_input, win_input, loss_input, games_played_input, user_info)){
		 			invalid_user = false;
		 		}
		 		else{
		 			cout << "The username or password that you inputed was invalid. Please try again.\n";
		 		}
	 		}
	 		
	 		break;
	 	}
	}

	string old_user_info[5] = {user_info[0], user_info[1], user_info[2], user_info[3], user_info[4]};	

	//Main game functionality

	while (running == true){

		//Checks if user has played already, if the user has, then it asks a different question

		if (played_before == false){
			cout << "Tic-Tac-Toe\n1. Play Tic-Tac-Toe\n2. Exit program.\nWhich would you like to do: ";
			cin >> menu;
		}
		else{
			cout << "Would you like to play again Tic-Tac-Toe? \n1. Play Tic-Tac-Toe\n2. Exit program.\nWhich would you like to do: ";
			cin >> menu;
		}
		
		//Main Menu

		switch (menu){
			case '1': {
				cout << "1. Player vs. Computer\n2. Player vs. Player\n3. Show your stats\nWhat would you like to do: ";
				cin >> mode;
				switch(mode){

					//Player vs. Computer mode

					case '1': {
						cout << "1. Easy\n2. Medium\n3. Hard\nWhat difficulty level would you like to play against: ";
						cin >> difficulty;
						games_played = stoi(user_info[4]);
						switch (difficulty){

							//Easy difficulty

							case '1': {
								who_Starts(player_turn, difficulty);
								player_vs_computer(player_turn, board, difficulty, move_num, previous_move, position_for_win, user_info, win, loss);
								played_before = true;
								break;
							}

							//Medium difficulty

							case '2': {
								who_Starts(player_turn, difficulty);
								player_vs_computer(player_turn, board, difficulty, move_num, previous_move, position_for_win, user_info, win, loss);
								played_before = true;
								break;
							}

							//Hard/Near Impossible difficulty

							case '3': {
								who_Starts(player_turn, difficulty);
								player_vs_computer(player_turn, board, difficulty, move_num, previous_move, position_for_win, user_info, win, loss);
								played_before = true;
								break;
							}
						}
						games_played++;
						games_played_input = to_string(games_played);
						user_info[4] = games_played_input;
						updateStat(user_info, old_user_info);
						break;
					}

					//Player vs. Player mode

					case '2': {
						player_vs_player(board);
						played_before = true;
						break;
					}

					//Printing out all the user's statistics

					case '3':{
						double win = stoi(user_info[2]);
						double game = stoi(user_info[4]);
						cout << "Username: " + user_info[0] + "\n";
						cout << "Password: " + user_info[1] + "\n";
						cout << "Wins: " + user_info[2] + "\n";
						cout << "Losses: " + user_info[3] + "\n";
						if (stoi(user_info[2]) > 0 && stoi(user_info[4]) > 0){
							cout << "Win Loss Percentage: " << fixed << setprecision(2) << (win / game) * 100 << "%\n";
						}
						else{
							cout << "Win Loss Percentage: 0%\n";
						}
						cout << "Total number of games played: " << user_info[4] << "\n";
						break;
					}
				}
				break;
			}

			//Ends the program

			case '2': {
				running = false;
				break;
			}				
			
		}
	}
	

	return 0;


}



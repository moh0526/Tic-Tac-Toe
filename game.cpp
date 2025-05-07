#include <iostream> 
using namespace std; 


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
					cout << "Spot is taken. Please select an open space. You have " << chances << " more chances to select open space.";
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
					cout << "Spot is taken. Please select an open space. You have " << chances << " more chances to select open space.";
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
					cout << "Spot is taken. Please select an open space. You have " << chances << " more chances to select open space.";
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
					cout << "Spot is taken. Please select an open space. You have " << chances << " more chances to select open space.";
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
					cout << "Spot is taken. Please select an open space. You have " << chances << " more chances to select open space.";
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
					cout << "Spot is taken. Please select an open space. You have " << chances << " more chances to select open space.";
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
					cout << "Spot is taken. Please select an open space. You have " << chances << " more chances to select open space.";
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
					cout << "Spot is taken. Please select an open space. You have " << chances << " more chances to select open space.";
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
					cout << "Spot is taken. Please select an open space. You have " << chances << " more chances to select open space.";
					chances--;
				}
				break;
		}
	}
}

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

void who_Starts(bool &player_turn, char &difficulty){
	srand(time(0));
	if (difficulty == '3'){
		player_turn = false;
	}
	else if (rand() % 2 == 0){
		player_turn = true;
	}
}

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



bool filled_board(char (&board)[9]){
	bool filled = true;
	for (int i = 0; i < 9; i++){
		if (board[i] == ' '){
			filled = false;
		}
	}
	return filled;
}

void reset(char (&board)[9]){
	if (filled_board(board) || is_winner(board) == true){
		for (int i = 0; i < 9; i++){
			board[i] = ' ';
		}
	}
}

void player_vs_computer(bool &player_turn, char (&board)[9], char &difficulty, int &move_num, int &previous_move, int &position_for_win){
	
	bool try_again = false;
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

					break;
				}
				if ((!is_winner(board))){
					playerMove(board, player);
				}
				else{
					reset(board);
					cout << "Computer won! Good try.\n";
					break;
				}
			}
			else if (filled_board(board) && (!is_winner(board))){
				reset(board);
				cout << "The game ended in a draw.\n";
			}
			else if (is_winner(board)){
				reset(board);
				cout << "Player won! Congrats.\n";
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
					break;
				}
				if ((!is_winner(board)) && (!filled_board(board))){
					move_num++;
					computerMove(board, computer, difficulty, player_turn, move_num, previous_move, position_for_win);
				}
				else{
					reset(board);
					cout << "Player won! Congrats.\n";
					break;
				}
			}
			else if (filled_board(board) && (!is_winner(board))){
				reset(board);
				cout << "The game ended in a draw.\n";
			}
			else if (is_winner(board)){
				reset(board);
				cout << "Computer won! Good try.\n";
			}
			
		}
	}
}

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

int main(){

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


	

	while (running == true){

		if (played_before == false){
			cout << "Tic-Tac-Toe\n1. Play Tic-Tac-Toe\n2. Exit program.\nWhich would you like to do: ";
			cin >> menu;
		}
		else{
			cout << "Would you like to play again Tic-Tac-Toe? \n1. Play Tic-Tac-Toe\n2. Exit program.\nWhich would you like to do: ";
			cin >> menu;
		}
		

		switch (menu){
			case '1':
				cout << "Which mode would you like to play? \n1. Player vs. Computer\n2. Player vs. Player\nWhich gamemode would you like to play: ";
				cin >> mode;
				switch(mode){
					case '1':
						cout << "1. Easy\n2. Medium\n3. Hard\nWhat difficulty level would you like to play against: ";
						cin >> difficulty;
						switch (difficulty){
							case '1':
								who_Starts(player_turn, difficulty);
								player_vs_computer(player_turn, board, difficulty, move_num, previous_move, position_for_win);
								played_before = true;
								break;
							case '2':
								who_Starts(player_turn, difficulty);
								player_vs_computer(player_turn, board, difficulty, move_num, previous_move, position_for_win);
								break;
							case '3':
								player_vs_computer(player_turn, board, difficulty, move_num, previous_move, position_for_win);
								break;
						}
						break;
					case '2':
						player_vs_player(board);
						break;
				}
			case '2':
				running = false;
				break;				
			
		}
	}
	
	


	

	return 0;


}



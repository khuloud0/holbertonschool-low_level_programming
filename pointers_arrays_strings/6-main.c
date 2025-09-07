#include "main.h"

/**
 * main - test print_chessboard function
 *
 * Return: Always 0
 */
int main(void)
{
	char board[8][8] = {
		{'R','N','B','Q','K','B','N','R'},
		{'P','P','P','P','P','P','P','P'},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{'p','p','p','p','p','p','p','p'},
		{'r','n','b','q','k','b','n','r'}
	};

	print_chessboard(board);

	return (0);
}

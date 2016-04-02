#include <stdio.h>
#include <stdlib.h>


void tabela(int linha, int coluna, int x);
int main(void)
{
	int i, j, x, linha, coluna, k = 0;
	int mat[9][9] = { { 3,6,0,9,0,0,0,8,2 },{ 0,2,4,6,0,3,5,7,0 },{ 0,0,0,0,4,0,0,0,0 },{ 0,0,2,0,6,0,9,0,0 },{ 1,0,9,0,2,5,0,4,0 },{ 0,8,0,0,0,1,0,5,7 },{ 2,0,0,0,3,0,7,0,1 },{ 0,1,0,5,0,0,0,0,4 },{ 6,4,0,0,7,9,8,0,0 } };
	int mat2[9][9] = { { 3,6,1,9,5,7,4,8,2 },{ 8,2,4,6,1,3,5,7,9 },{ 7,9,5,2,4,8,1,3,6 },{ 5,3,2,7,6,4,9,1,8 },{ 1,7,9,8,2,5,6,4,3 },{ 4,8,6,3,9,1,2,5,7 },{ 2,5,8,4,3,6,7,9,1 },{ 9,1,7,5,8,2,3,6,4 },{ 6,4,3,1,7,9,8,2,5 } };

	printf("\t\t\t\t   ----------\n");
	printf("\t\t\t\t     SUDOKU\n");
	printf("\t\t\t\t   ----------\n\n\n");
	printf(" REGRAS DO JOGO: O objetivo do jogo e completar o \"tabuleiro\" com\n\t\t numeros entre 1 e 9 que nao podem se repetir na\n\t\t mesma linha, coluna ou quadrante.");
	printf("\n\n Pressione ENTER para comecar");
	scanf_s("%[^\n]");
	system("cls");

	printf("\t\t\t\t   ----------\n");
	printf("\t\t\t\t     SUDOKU\n");
	printf("\t\t\t\t   ----------\n\n\n");
	printf("\t\t          1  2  3   4  5  6   7  8  9\n");
	printf("\t\t        +---------+---------+---------+\n");
	printf("\t\t      1 | 3  6    | 9       |    8  2 |\n");
	printf("\t\t      2 |    2  4 | 6     3 | 5  7    |\n");
	printf("\t\t      3 |         |    4    |         |\n");
	printf("\t\t        +---------+---------+---------+\n");
	printf("\t\t      4 |       2 |    6    | 9       |\n");
	printf("\t\t      5 | 1     9 |    2  5 |    4    |\n");
	printf("\t\t      6 |    8    |       1 |    5  7 |\n");
	printf("\t\t        +---------+---------+---------+\n");
	printf("\t\t      7 | 2       |    3    | 7     1 |\n");
	printf("\t\t      8 |    1    | 5       |       4 |\n");
	printf("\t\t      9 | 6  4    |    7  9 | 8       |\n");
	printf("\t\t        +---------+---------+---------+\n\n\n");

	printf("Digite o numero da linha (entre 1 e 9): ");
	scanf_s("%d", &linha);
	printf("Digite o numero da coluna (entre 1 e 9): ");
	scanf_s("%d", &coluna);
	printf("Digite o valor que deseja colocar (entre 1 e 9): ");
	scanf_s("%d", &x);
	printf("\n");
	system("cls");


	while (k == 0)
	{
		printf("\t\t\t\t   ----------\n");
		printf("\t\t\t\t     SUDOKU\n");
		printf("\t\t\t\t   ----------\n\n\n");

		if (linha == 1)
		{
			if ((coluna == 1) || (coluna == 2) || (coluna == 4) || (coluna == 8) || (coluna == 9))
			{
				printf("Essa posicao nao pode ser mudada\n\n");
			}
			else
				mat[linha - 1][coluna - 1] = x;
		}

		if (linha == 2)
		{
			if ((coluna == 2) || (coluna == 3) || (coluna == 4) || (coluna == 6) || (coluna == 7) || (coluna == 8))
			{
				printf("Essa posicao nao pode ser mudada\n\n");
			}
			else
				mat[linha - 1][coluna - 1] = x;

		}

		if (linha == 3)
		{
			if (coluna == 5)
			{
				printf("Essa posicao nao pode ser mudada\n\n");
			}
			else
				mat[linha - 1][coluna - 1] = x;


		}

		if (linha == 4)
		{
			if ((coluna == 3) || (coluna == 5) || (coluna == 7))
			{
				printf("Essa posicao nao pode ser mudada\n\n");
			}

			else
				mat[linha - 1][coluna - 1] = x;
		}

		if (linha == 5)
		{
			if ((coluna == 1) || (coluna == 3) || (coluna == 5) || (coluna == 6) || (coluna == 8))
			{
				printf("Essa posicao nao pode ser mudada\n\n");
			}

			else
				mat[linha - 1][coluna - 1] = x;
		}

		if (linha == 6)
		{
			if ((coluna == 2) || (coluna == 6) || (coluna == 8) || (coluna == 9))
			{
				printf("Essa posicao nao pode ser mudada\n\n");
			}

			else
				mat[linha - 1][coluna - 1] = x;
		}

		if (linha == 7)
		{
			if ((coluna == 1) || (coluna == 5) || (coluna == 7) || (coluna == 9))
			{
				printf("Essa posicao nao pode ser mudada\n\n");
			}

			else
				mat[linha - 1][coluna - 1] = x;
		}

		if (linha == 8)
		{
			if ((coluna == 2) || (coluna == 4) || (coluna == 9))
			{
				printf("Essa posicao nao pode ser mudada\n\n");
			}

			else
				mat[linha - 1][coluna - 1] = x;
		}

		if (linha == 9)
		{
			if ((coluna == 1) || (coluna == 2) || (coluna == 5) || (coluna == 6) || (coluna == 7))
			{
				printf("Essa posicao nao pode ser mudada\n\n");
			}

			else
				mat[linha - 1][coluna - 1] = x;
		}

		printf("\t\t          1  2  3   4  5  6   7  8  9\n");
		printf("\t\t        +---------+---------+---------+\n");
		for (i = 0; i<9; i++)
		{
			printf("\t\t      %d |", i + 1);
			for (j = 0; j<9; j++)
			{
				if (mat[i][j] != 0)
				{
					printf(" %d ", mat[i][j]);
				}
				else
					printf("   ");
				if ((j == 2) || (j == 5) || (j == 8))
					printf("|");
			}
			if ((i == 2) || (i == 5) || (i == 8))
				printf("\n\t\t        +---------+---------+---------+");
			printf("\n");
		}


		printf("\n");

		if ((mat[0][0] == 3) && (mat[0][1] == 6) && (mat[0][2] == 1) && (mat[0][3] == 9) && (mat[0][4] == 5) && (mat[0][5] == 7) && (mat[0][6] == 4) && (mat[0][7] == 8) && (mat[0][8] == 2)
			&& (mat[1][0] == 8) && (mat[1][1] == 2) && (mat[1][2] == 4) && (mat[1][3] == 6) && (mat[1][4] == 1) && (mat[1][5] == 3) && (mat[1][6] == 5) && (mat[1][7] == 7) && (mat[1][8] == 9)
			&& (mat[2][0] == 7) && (mat[2][1] == 9) && (mat[2][2] == 5) && (mat[2][3] == 2) && (mat[2][4] == 4) && (mat[2][5] == 8) && (mat[2][6] == 1) && (mat[2][7] == 3) && (mat[2][8] == 6)
			&& (mat[3][0] == 5) && (mat[3][1] == 3) && (mat[3][2] == 2) && (mat[3][3] == 7) && (mat[3][4] == 6) && (mat[3][5] == 4) && (mat[3][6] == 9) && (mat[3][7] == 1) && (mat[3][8] == 8)
			&& (mat[4][0] == 1) && (mat[4][1] == 7) && (mat[4][2] == 9) && (mat[4][3] == 8) && (mat[4][4] == 2) && (mat[4][5] == 5) && (mat[4][6] == 6) && (mat[4][7] == 4) && (mat[4][8] == 3)
			&& (mat[5][0] == 4) && (mat[5][1] == 8) && (mat[5][2] == 6) && (mat[5][3] == 3) && (mat[5][4] == 9) && (mat[5][5] == 1) && (mat[5][6] == 2) && (mat[5][7] == 5) && (mat[5][8] == 7)
			&& (mat[6][0] == 2) && (mat[6][1] == 5) && (mat[6][2] == 8) && (mat[6][3] == 4) && (mat[6][4] == 3) && (mat[6][5] == 6) && (mat[6][6] == 7) && (mat[6][7] == 9) && (mat[6][8] == 1)
			&& (mat[7][0] == 9) && (mat[7][1] == 1) && (mat[7][2] == 7) && (mat[7][3] == 5) && (mat[7][4] == 8) && (mat[7][5] == 2) && (mat[7][6] == 3) && (mat[7][7] == 6) && (mat[7][8] == 4)
			&& (mat[8][0] == 6) && (mat[8][1] == 4) && (mat[8][2] == 3) && (mat[8][3] == 1) && (mat[8][4] == 7) && (mat[8][5] == 9) && (mat[8][6] == 8) && (mat[8][7] == 2) && (mat[8][8] == 5))
		{
			break;
		}

		printf("Digite o numero da linha (entre 1 e 9): ");
		scanf_s("%d", &linha);
		printf("Digite o numero da coluna (entre 1 e 9): ");
		scanf_s("%d", &coluna);
		printf("Digite o valor que deseja colocar (entre 1 e 9): ");
		scanf_s("%d", &x);
		printf("\n");
		system("cls");
	}

	system("cls");
	printf("\t\t\t\t   ----------\n");
	printf("\t\t\t\t     SUDOKU\n");
	printf("\t\t\t\t   ----------\n\n\n");
	printf("\t\t          1  2  3   4  5  6   7  8  9\n");
	printf("\t\t        +---------+---------+---------+\n");
	printf("\t\t      1 | 3  6  1 | 9  5  7 | 4  8  2 |\n");
	printf("\t\t      2 | 8  2  4 | 6  1  3 | 5  7  9 |\n");
	printf("\t\t      3 | 7  9  5 | 2  4  8 | 1  3  6 |\n");
	printf("\t\t        +---------+---------+---------+\n");
	printf("\t\t      4 | 5  3  2 | 7  6  4 | 9  1  8 |\n");
	printf("\t\t      5 | 1  7  9 | 8  2  5 | 6  4  3 |\n");
	printf("\t\t      6 | 4  8  6 | 3  9  1 | 2  5  7 |\n");
	printf("\t\t        +---------+---------+---------+\n");
	printf("\t\t      7 | 2  5  8 | 4  3  6 | 7  9  1 |\n");
	printf("\t\t      8 | 9  1  7 | 5  8  2 | 3  6  4 |\n");
	printf("\t\t      9 | 6  4  3 | 1  7  9 | 8  2  5 |\n");
	printf("\t\t        +---------+---------+---------+\n\n\n");
	printf(" PARABENS VOCE COMPLETOU O JOGO!!\n\n");

	system("pause");
	return 0;
}
#include"droFild.h"

void drofild(char Field[][HEIGTH])
{
	FILE *FileWithField = fopen("D:\drofild.txt", "r");
	if (FileWithField)
	{
		feof(FileWithField);// true - нельзя читать, false можно
		char ch = getc(FileWithField);

		fclose(FileWithField);
	}
	/*
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGTH; j++)
		{
			if ((i == 0) && (j == 0))
			{
				Field[i][j] = getLeftTopCorner();
				continue;
			}
			if ((i == 0) && (j == HEIGTH - 1))
			{
				Field[i][j] = getLeftBottomCorner();
				continue;
			}
			if ((i == WIDTH - 1) && (j == 0))
			{
				Field[i][j] = getRightTopCorner();
				continue;
			}
			if ((i == WIDTH - 1) && (j == HEIGTH - 1))
			{
				Field[i][j] = getRightBottomCorner();
				continue;
			}
			if ((i == 0) || (i == WIDTH - 1))
			{
				Field[i][j] = getVerticalBorder();
				continue;
			}
			if ((j == 0) || (j == HEIGTH - 1))
			{
				Field[i][j] = getHorizontalBorder();
				continue;
			}
			Field[i][j] = ' ';
		}
	}
	*/
}
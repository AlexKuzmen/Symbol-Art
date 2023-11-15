/*
BY: Steven & Alexander
group 20

Version: 1.5
Program reads the file and provide an array play can be displayed
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>

using namespace std;


int main()
{
	string filename;
    cout << "Enter filename: ";
    cin >> filename;
    ifstream fin(filename.c_str());
	if(!fin)
	{
		cout << "Unable to open file";
		return EXIT_FAILURE;
	}
	
	const int SIZE_ROW = 200;
	const int SIZE_COL = 79;
	char charfile[SIZE_ROW][SIZE_COL] ;
	int row_num = 0;
	int col_num = 0;
	char character;
	int totalRows = 0;
	fin >> totalRows;
	int totalCols = 0;
	int minrow = SIZE_ROW;
	
		
	for(int row_index = 0;row_index < totalRows;row_index++)
	 {
	 	for(int col_index = 0;col_index < SIZE_COL;col_index++)
	 	{
	 	   
		   charfile[row_index][col_index] = ' ';
		   	
		}

	 }

	while (fin >> row_num >> col_num >> character)
	{
		charfile[row_num][col_num] = character;

		if(row_num< minrow)
		{
			minrow = row_num;
		}
	}

	for(int row_index = minrow;row_index < totalRows;row_index++)
	 {
	 	for(int col_index = 0;col_index < SIZE_COL;col_index++)
	 	{
	 	   
		   cout <<charfile[row_index][col_index];
		   	
		}
		cout << endl;
	 }

fin.close();
	
 return EXIT_SUCCESS;
 
}
/*

Enter filename: homer_mapped.txt
                             __
                   _ ,___,-'",-=-.
       __,-- _ _,-'_)_  (""`'-._\ `.
    _,'  __ |,' ,-' __)  ,-     /. |
  ,'_,--'   |     -'  _)/         `\
,','      ,'       ,-'_,`           :
,'     ,-'       ,(,-(              :
     ,'       ,-' ,    _            ;
    /        ,-._/`---'            /
   /        (____)(----. )       ,'
  /         (      `.__,     /\ /,
 :           ;-.___         /__\/|
 |         ,'      `--.      -,\ |
 :        /            \    .__/
  \      (__            \    |_
   \       ,`-, *       /   _|,\
    \    ,'   `-.     ,'_,-'    \
   (_\,-'    ,'\")--,'-'       __\
    \       /  // ,'|      ,--'  `-.
     `-.    `-/ \'  |   _,'         `.
        `-._ /      `--'/             \
-hrr-      ,'           |              \
          /             |               \
       ,-'              |               /
      /                 |             -'


--------------------------------
Process exited after 8.222 seconds with return value 0
Press any key to continue . . .

Enter filename: mickey_mapped.txt
                            _____
                        .d88888888bo.
                      .d8888888888888b.
                      8888888888888888b
                      888888888888888888
                      888888888888888888
                       Y8888888888888888
                 ,od888888888888888888P
              .'`Y8P'```'Y8888888888P'
            .'_   `  _     'Y88888888b
           /  _`    _ `      Y88888888b   ____
        _  | /  \  /  \      8888888888.d888888b.
       d8b | | /|  | /|      8888888888d8888888888b
      8888_\ \_|/  \_|/      d888888888888888888888b
      .Y8P  `'-.            d88888888888888888888888
     /          `          `      `Y8888888888888888
     |                        __    888888888888888P
      \                       / `   dPY8888888888P'
       '._                  .'     .'  `Y888888P`
          `"'-.,__    ___.-'    .-'
         jgs  `-._````  __..--'`


--------------------------------
Process exited after 6.698 seconds with return value 0
Press any key to continue . . .
*/

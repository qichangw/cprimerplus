#define QUIT	5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "************************************"

int menu();

int getnights();

void showprice(double rate, int nights);
/*
************************************************************************
Enter the number of the desired hotel:
1) Fairfield Arms               2) Hotel Olympic
3) Chertworthy Plaza    4) The Stockton
5) quit
************************************************************************
3
How many nights are needed? 1
The total cost will be $255.00.

************************************************************************
Enter the number of the desired hotel:
1) Fairfield Arms               2) Hotel Olympic
3) Chertworthy Plaza    4) The Stockton
5) quit
************************************************************************
4
How many nights are needed? 3
The total cost will be $1012.64.

************************************************************************
Enter the number of the desired hotel:
1) Fairfield Arms               2) Hotel Olympic
3) Chertworthy Plaza    4) The Stockton
5) quit
************************************************************************
5
Thank you and goodbye.
*/
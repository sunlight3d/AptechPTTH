#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
/*

1.Create a data structure with the following specification:
struct Product {
	char name[200];
	unsigned int year;
	float price;
	char category[];
}

2.Create a menu based program as follows:
+------------------------------------------------------------------+
|1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |
+------------------------------------------------------------------+
After each choice of the user is completed, ask:
Do you want to continue ?
- Yes, I do. (press ‘y’, ‘Y’)
- No, I don’t. (press ‘n’, ‘N’)
- Clear the screen ! (press ‘c’, ‘C’)
Enter your choice: 

3. When user selects the option “1. Input” from the menu, do the followings:
-	Ask the user to enter the total number(N) of Product.
-	Input information for each Product in the list.
-	Validate data input by the following rules:
-   price must > 0 AND price < 1000$
-	If the user enters invalid data, ask him/her to re-enter

4. When user selects the option “2. Sort”:
-	Sort Products by name in ascending order (from A-Z).
-	Displays details of each Product in the list

5.Analyze statistics of Prouct by category                            
-	Display the statistics results. For example:
Statistics Result:
+ There are 2 Product(s) of Electronics.
+ There are 1 Product(s) of Seafood.

6.Find Products: When user selects the option “4. Find” from menu
Program will show:
Category: Seafood
Min price($): 100
Max price($): 500
Result:
+-------------------------------------------------------+
|Product     	|Category  	|Year 	|Price($)  |
+-------------------------------------------------------+
|Dell Inspiron  |Computer   |2015   |800       |
+-------------------------------------------------------+
|iPhone XMax    |Phone      |2019   |700       |
+-------------------------------------------------------+

7. Save to file. When user choose "5.Save"
-	Ask the user to enter a file name.	
-	Create the file in binary mode.
-	Write data of the list into the file. 
-	Notify the user that data has been saved successfully.
-	Close the file. 

8.  Open File and display the list
When user selects the option “6. Open” from the menu, do the followings:
-	Ask the user to enter a file name.
-	Open the file in binary mode.
-	If the program cannot open file, notify the user about that error and return to end this function.
-	Read data out of the file, fill into the list and display them all.
-	Notify the user that data has been saved successfully.
-	Close the file. 

*/
struct Product {
	char name[200];
	unsigned int year;
	float price;
	char category[];
}

void input(struct Product *product) {

}
void sort(struct Product *product) {
	
}
void analyze(struct Product *product) {
	
}
void find() {
	
}
void save() {

}
void open() {

}
int main() {
	LABEL1:
	printf("+------------------------------------------------------------------+\n", );
	printf("|1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |\n");
	printf("+------------------------------------------------------------------+\n");
	
	char choice;
	printf("Enter a choice : \n"); choice = getchar();
	struct Product *product;	
	switch(choice) {
		case '1':
			input();
			goto LABEL2;
			break;
		case '2':
			sort();
			goto LABEL2;
			break;
		case '3':
			analyze();
			goto LABEL2;
			break;
		case '4':
			find();
			goto LABEL2;
			break;
		case '5':
			save();
			goto LABEL2;
			break;
		case '6':
			open();
			goto LABEL2;
			break;
		case '7':
			return 0;//ket thuc chuong trinh
			goto LABEL2;
			break;
		default:
			printf("Please choose 1->7\n");
			goto LABEL1;
			break;
	}
	LABEL2: 
	printf("Do you want to continue ?\n");
	printf("- Yes, I do. (press ‘y’, ‘Y’)\n");
	printf("- No, I don’t. (press ‘n’, ‘N’)\n");
	printf("- Clear the screen ! (press ‘c’, ‘C’)\n");
	return 0;
}





















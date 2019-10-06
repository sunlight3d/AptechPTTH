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
struct CategoryAnalyze {
	int numberOfProducts;
	char category[];
}

void input(struct Product *product) {
	int N, i;
	printf("Number of products : \n");scanf("%d", &N);
	for(i = 0; i < N; i++){
		product+i = (Product *)malloc(sizeof(Product *));
		printf("Enter product's name : \n");scanf("%s", &(*(product+i).name));
		printf("Enter product's year : \n");scanf("%d", &(*(product+i).year));
		printf("Enter product's price : \n");scanf("%f", &(*(product+i).price));
		while(*(product+i).price <= 0 || *(product+i).price >= 1000) {
			printf("Enter product's price : \n");scanf("%f", &(*(product+i).price));
		}
		printf("Enter product's category : \n");scanf("%s", &(*(product+i).category));

	}
}
void sort(struct Product *product) {
	int i, j;
	if(!product) {
		printf("Please input array first !\n");
		break;
	}
	for(i = 0; i < N-1; i++){
		for(j = i+1; j < N; j++){
			if(strcmp(*(product+i).name, *(product+j).name) > 0) {
				struct Product temp = *(product+i);
				*(product+i) = *(product+j);
				*(product+j) = temp;				
			}
		}	
	}	
	//Hien thi ket qua
	for(i = 0; i < N; i++){
		printf("Product %d details: \n", i+1);
		printf("Name : %s\n", *(product+i).name);
		printf("Year : %d\n", *(product+i).year);
		printf("Price : %d\n", *(product+i).price);
		printf("Category : %s\n", *(product+i).category);
	}
}
int checkCategoryAnalyzeExist(struct CategoryAnalyze *categoryAnalyze, char category[]){
	struct CategoryAnalyze *ptr;
	//Dung con tro ptr duyet tu phan tu dau den phan tu cuoi cua mang
	for (ptr = categoryAnalyze; (*ptr).name != NULL ; ptr++){
		if(strcmp(*ptr.category, category) == 0){
			return 1;
		}
	}	
	return 0;
}
void insertCategoryAnalyze(struct CategoryAnalyze *categoryAnalyze, char category[]){
	struct CategoryAnalyze *ptr;
	if(checkCategoryAnalyzeExist((*ptr).category) == 1) {
		//Neu tim thay category trong mang categoryAnalyze
		//Dung con tro ptr duyet tu phan tu dau den phan tu cuoi cua mang
		for (ptr = categoryAnalyze; (*ptr).name != NULL ; ptr++){
			if(strcmp((*ptr).category, category) == 0){
				categoryAnalyze.numberOfProducts++;
			}
		}		
	} else {
		//Neu KO tim thay category trong mang categoryAnalyze
		//Them 1 phan tu vao cuoi categoryAnalyze
		CategoryAnalyze *endPoint;
		endPoint = (CategoryAnalyze *)malloc(sizeof(CategoryAnalyze *));
		strcpy((*endPoint).name, "");
		strcpy((*endPoint).category, category);				
		struct CategoryAnalyze *ptr;
		for (ptr = categoryAnalyze; (*ptr).name != NULL ; ptr++){}
		ptr = endPoint;	
	}
	
	
	
}

void analyze(struct Product *product) {
	for(i = 0; i < N; i++) {
		
	}	
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
	getchar();//Lenh nay loai tru ky tu enter cua dong truoc
	struct Product *product;	
	switch(choice) {
		case '1':
			input(); goto LABEL2;
			break;
		case '2':
			sort(); goto LABEL2; break;
		case '3':
			analyze(); goto LABEL2;
			break;
		case '4':
			find(); goto LABEL2;
			break;
		case '5':
			save();goto LABEL2;
			break;
		case '6':
			open();goto LABEL2;
			break;
		case '7':
			return 0;//ket thuc chuong trinh
			goto LABEL2;break;
		default:
			printf("Please choose 1->7\n"); goto LABEL1;
			break;
	}
	LABEL2: 
	printf("Do you want to continue ?\n");
	printf("- Yes, I do. (press ‘y’, ‘Y’)\n");
	printf("- No, I don’t. (press ‘n’, ‘N’)\n");
	printf("- Clear the screen ! (press ‘c’, ‘C’)\n");
	switch(choice) {
		case 'y':
		case 'Y':		
			goto LABEL1;
			break;
		case 'n':
		case 'N':			
			break;
		case 'c':
		case 'C':
			//clear screen
			system("@cls||clear");
			break;		
		default:			
			break;
	}	
	return 0;
}





















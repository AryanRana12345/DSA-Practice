#include<iostream>
#include<math.h>
#include<string>
using namespace std;
/*int printsum(int x, int y) {
	return x + y;
}
int main() {
	int x, y;
	cin >> x >> y;
	int finalsum = printsum(x, y);
	cout << finalsum;
	return 0;
}*/
/* in while loop initialisation happens outside the loop block and condition is put at the start of while loop and increment happens inside th while loop.
 for loops are used where we have to iterate the loop for n numbers of time and we use while loop when we have to check for a situation or condition to occur to stop iteration.
 there are two types of functions parameter pass by value and pass by reference and in pass by value a copy is created of the number to be sent and all the changes are done on that copy and it is the default case and in pass by reference
 for applying pass by reference we have to use & like (string &name) so original value is used.
 array is always passed by refernce.
 in 2D array first represents row and second represent column
 if you observe the break in the switch case doesn't only break us from implementing other cases it also breaks us from the entire code block of switch
 there are different types of data types like int long float int cant include indian phone number as for 10 digit no it could only go to 2 as the biggest no not 8 or 9
int
long
long long
float/double  for possible decible number
lets say you want to take whole line from input then how will you do it? You will do it with the help of getline()
where you will put string str; getline(cin, str); cout << str;
char is also a data type and it is used to store character and these characters could have been stored in strings but strings will take more space to store these characters also these char are used within single quote unlike strings stored in double quote
&& is the symbol used for AND and || is the symbol used for OR
in c++ there is else if not elif*/

//Pattern Solving
int main() {
	int n;
	cin >> n;
	//star box
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}*/
	//left handed star triangle
	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << '*';
		}
		cout << endl;
	}*/
	//left handed number triangle
	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}*/
	//left handed number representing row that amout of times triangle
	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}*/
	//left handed inverted star triangle
	/*for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << endl;
	}*/
	//left handed inverted number triangle
	/*for (int i = n; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}*/
	//centered star triangle
	for (int i = 0; i < n; i++) {
		cout << '*' << endl;
	}

	return 0;
}

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
	/*for (int i = n; i > 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k <= 2 * (n - i); k++) {
			cout << '*';
		}
		for (int l = 0; l < i - 1; l++) {
			cout << " ";
		}
		cout << endl;
	}*/
	//inverted centered star triangle
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * (n - i) - 1; k++) {
			cout << '*';
		}
		for (int l = 0; l < i; l++) {
			cout << " ";
		}
		cout << endl;
	}*/
	//normal and inverted centered star triangle together
	/*for (int i = n; i > 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k <= 2 * (n - i); k++) {
			cout << '*';
		}
		for (int l = 0; l < i - 1; l++) {
			cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * (n - i) - 1; k++) {
			cout << '*';
		}
		for (int l = 0; l < i; l++) {
			cout << " ";
		}
		cout << endl;
	}*/
	//combination of two normal and inverted left handed star
	/*int j = 0;
	int k = j;
	for (j = 0; j < (2 * n) - 1; j++) {
		for (int i = 0; i <= k; i++) {
			cout << '*';
		}
		if (j <= n - 2) {
			k++;
		}
		else {
			k--;
		}
		cout << endl;
	}*/
    //left handed binary triangle
    /*for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			for (int j = 1; j <= i; j++) {
				cout << (j % 2);
			}
		}
		else {
			for (int k = 0; k < i; k++) {
				cout << (k % 2);
			}
		}
		cout << endl;
	}*/
    //fucked up triangle
    /*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		for (int k = 0; k < 2 * (n - i); k++)   {
			cout << " ";
		}
		for (int l = 0; l < i; l++) {
			cout << i - l;
		}
		cout << endl;
	}*/
    //1  23  456
   /* int start = 1;
    for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << start;
			start++;
		}
		cout << endl;
	}*/
    //A AB ABC
    /*for (int i = n; i>0 ; i--) {
		for (char ch = 'A'; ch < 'A' + i; ch++) {
			cout << ch;
		}
		cout << endl;
	}*/
    //A BB CCC
    /*for (char ch1='A'; ch1 < 'A' + n; ch1++) {
		for (char ch = 'A'; ch <= ch1; ch++) {
			cout << ch1;
		}
		cout << endl;
	}*/
    //Some patterns are not completed as they don't possess much priority  
	return 0;
}

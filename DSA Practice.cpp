#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<concurrent_priority_queue.h>
#include<set>
#include<map>
#include<intrin.h>
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
void containers() {
	//pair
	/*pair<int, pair<int, string>> rollno = { 3061,{2024,"UIT"}};
	cout << rollno.second.first << rollno.second.second << rollno.first;*/
	//vector
	/*vector--just like array but more dynamic
	vector<int> hector(5, 67);//creates 5 objects containing 67 as the value
	hector.push_back(69);// adds 69 in vector
	hector.emplace_back(143);// adds 69 in vector
	vector<int> zector(hector);
	vector<int>::iterator it = hector.begin();//here what iterator gives is a memory address and to find the element we have to use *(it) and it will give us the value present at that address.
	also there are many other function other than begin likehector.end() and it points to the next address after the last elementand then there is hector.rend() and and this point to the address just before the starting element and similarly rbegin()
	to get any value of vector like we call element in array as arr[2] similarly hector[2]
	print in similar fashion as array using for loop
	for (vector<int>::iterator it = hector.begin(); it != hector.end(); it++) {
		cout << *(it) << endl;
	}
	for (auto it = hector.begin(); it != hector.end(); it++) {
		cout << *(it) << endl;
	}
	for (auto it : hector) {
		cout << it;
	}
	hector.erase(hector.begin(), hector.begin() + 5);
	hector.insert(hector.begin(), 3, 67);
	hector.insert(hector.end(), zector.begin(), zector.begin() + 6);
	hector.pop_back();
	cout << hector.size();
	hector.swap(zector);
	hector.clear();
	zector.clear();
	for (auto it : hector) {
		cout << it << endl;
	}
	cout << "For zector" << endl;
	for (auto it : zector) {
		cout << it << endl;
	}*/
	//list
	/*list<int> ls;
	ls.push_back(2);
	ls.emplace_back(4);
	ls.push_front(5);
	ls.emplace_front(1);
	for (auto it : ls) {
		cout << it << endl;
	}*/
	//dequeue
	/*deque<int> dq;
	dq.push_back(5);
	dq.emplace_back(7);
	dq.push_front(4);
	dq.emplace_front(1);
	cout << dq.front();
	for (auto it : dq) {
		cout << it << endl;
	}*/
	//stack
	/*stack<int> st;
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);
	cout << st.top();
	cout << st.size();
	cout << st.empty();
	st.pop();*/
	//queue
	/*queue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);
	que.push(4);
	que.push(5);
	que.pop();*/
	//priority queue
	/*priority_queue<int> pq;
	pq.push(1);
	pq.push(45);
	pq.push(32);
	pq.push(7);
	pq.push(90);
	cout << pq.top();
	pq.pop();
	cout << pq.top();
	cout << pq.size();
	arranges elemets in sorted manner such that maximum elemenet is at the top*/
	//priority queue min heap
	/*priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(90);
	pq.push(17);
	pq.push(28);
	pq.push(15);
	cout << pq.top();
	pq.pop();
	cout << pq.top();*/
	//set(sorted and unique)
	/*set<int> st;
	//st.insert(1);
	//st.insert(2);
	//st.insert(3);
	//st.insert(2);
	//st.insert(4);
	//st.insert(5);
	//auto it = st.find(2);//will give the address of the element where it is stored 
	//st.erase(3);
	//cout << st.count(3);
	//auto it1 = st.find(2);
	//auto it2 = st.find(5);
	//st.erase(it1, it2);
	//everything happens in logarithmic of n time complexity and begin,end,rbegin,rend,size,empty,swap are like the same as vector*/
    //multiset(sorted but not unique stores duplicate value)
    /*multiset<int> mt;
	mt.insert(1);//everything else is same as set.
	mt.insert(1);
	mt.insert(1);
	mt.insert(2);
	cout << mt.count(1);
	mt.erase(mt.find(1));
	cout << mt.count(1);
	mt.erase(1);*/
    //unordered set(unique but not sorted) lower bound and upper bound operation doesn't work in this and time complexity mostly is constant and in worst case it is n and everything else is same
    //map
    /*map<int, pair<int, int>> mpp;// key are unique and sorted
	mpp.insert({ 1,{4,5} });
	mpp.insert({ 2,{4,6} });
	mpp.insert({ 3,{7,5} });
	for (auto it : mpp) {
		cout << it.first << " " << it.second.first << " " << it.second.second << endl;
	}
	cout << mpp[1].first;
	erase,swap,size,empty are same as above*/
    //multimap(sorted but not unique just like multi set)
    //unordered map(unique but not sorted just like unordered set)
}
//Pattern Solving
int main() {
	containers();
	int n;
	cin >> n;
	int revno = 0;
	while (n > 0) {
		int digit = n % 10;
		revno = (revno * 10) + digit;
		n = n / 10;
	}
	cout << revno;
	return 0;
	//binary finder
	/*int num = 7;
	int cnt = __popcnt(num);
	cout << cnt;*/
	//permutation
	/*string name = "Aryan Rana";//remember if you want alll the possible permutation then start with sorted string
	sort(name.begin(), name.end());
	do {
		cout << name << endl;
	} while (next_permutation(name.begin(), name.end()));*/
	/*int n;
	cin >> n;*/ 
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
}

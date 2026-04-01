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
#include<unordered_map>
#include<intrin.h>
#include<algorithm>
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
//Merging algo
/*void merging(int* arr, int low, int mid, int high) {
	vector<int> vec;
	int left = low;
	int right = mid + 1;
	while (left <= mid && right <= high) {
		if (arr[left] <= arr[right]) {
			vec.push_back(arr[left]);
			left++;
		}
		else {
			vec.push_back(arr[right]);
			right++;
		}
	}
	//Here all the elements with pointer right are already sorted leading to right<=high being false
	while (left <= mid) {
		vec.push_back(arr[left]);
		left++;
	}
	while (right <= high) {
		vec.push_back(arr[right]);
		right++;
	}
	for (int i = low; i <= high; i++) {
		arr[i] = vec[i - low];
	}
}*/
//Quick sorting algo
 /*   void QuickSorting(int* arr,int i,int j) {
		int pivot = arr[i];
		while (j > i) {
			if (arr[j] <= pivot && arr[i] > pivot) {
				swap(arr[j], arr[i]);
			}
			j--;
			i++;
		}
		while (j <= i) {
			if (arr[j] <= pivot && arr[i] > pivot) {
				swap(pivot, arr[j]);
			}
			j--;
			i++;
		}
		QuickSorting(arr,i,)
	}*/
    //Finding missing number(XOR approach)
    /*int xoring(int n) {
		if (n == 0) {
			return 0;
		}
		return n ^ xoring(n - 1);
	}*/
void sorting(vector<int> arr,int n,int k) {
	    //Count subarray with sum K
	    unordered_map<int, int> mpp;
		mpp[0] = 1;
		int count = 0;
		int sum = 0;
	    for (int i = 0; i < n; i++) {
			sum = sum + arr[i];
			mpp[sum] += 1;
			if (mpp.find(sum - k) != mpp.end()) {
				count = count + mpp[sum - k];
			}
		}
		cout << count;
		//Pascal's triangle to give element at row and column
	    /*if (row - col > col) {
			int ans = 1;
			for (int i = 0; i < col; i++) {
				ans = ans * (row - i);
				ans = ans / (i + 1);
			}
			cout << ans;
		}
		else{
		  int ans = 1;
			for (int i = 0; i < row-col; i++) {
				ans = ans * (row - i);
				ans = ans / (i + 1);
			}
			cout << ans;
		}*/
		//Set zeros matrix
		/*bool firstrowzero = false;
		bool firstcolzero = false;
		for (int i = 0; i < n; i++) {
			if (arr[i][0] == 0) {
				firstcolzero = true;
				break;
			}
		}
		for (int j = 0; j < m; j++) {
			if (arr[0][j] == 0) {
				firstrowzero = true;
				break;
			}
		}
		for (int i = 1; i < n; i++) {
			for (int j = 1; j < m; j++) {
				if (arr[i][j] == 0) {
					arr[0][j] = 0;
					arr[i][0] = 0;
				}
			}
		}
		for (int i = n - 1; i >= 1; i--) {
			for (int j = m - 1; j >= 1; j--) {
				if (arr[i][0] == 0 || arr[0][j] == 0) {
					arr[i][j] = 0;
				}
			}
		}
		if (firstrowzero) {
			for (int i = 0; i < m; i++) {
				arr[0][i] = 0;
			}
		}
		if (firstcolzero) {
			for (int i = 0; i < n; i++) {
				arr[i][0] = 0;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << arr[i][j] << " ";
			}
			cout << " " << endl;
		}*/
		//Rotate matrix by 90 degree
		/*for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				swap(arr[i][j], arr[j][i]);
			}
		}
		for (int i = 0; i < n; i++) {
			reverse(arr[i].begin(), arr[i].end());
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[i][j] << " ";
			}
			cout << " " << endl;
		}*/
		//Spiral matrix
		/*int top = 0;
		int bottom = n - 1;
		int left = 0;
		int right = m - 1;
		while (top <= bottom && left <= right) {
			for (int i = left; i <= right; i++) {
				cout << arr[top][i];
			}
			top++;
			for (int i = top; i <= bottom; i++) {
				cout << arr[i][right];
			}
			right--;
			if (top <= bottom) {
				for (int i = right; i >= left; i--) {
					cout << arr[bottom][i];
				}
				bottom--;
			}
			if (left <= right) {
				for (int i = bottom; i >= top; i--) {
					cout << arr[i][left];
				}
				left++;
			}
		}*/
		//Next permutation
		/*int val = -1;
		for (int i = n - 1; i >= 1; i--) {
			if (arr[i] > arr[i - 1]) {
				arr[val] = arr[i - 1];
				val = i - 1;
				break;
			}
		}
		if (arr[val] == -1) {
			reverse(arr,arr+n);
			for (int i = 0; i < n; i++) {
				cout << arr[i] << " ";
			}
			return;
		}
		for (int i = n - 1; i > val; i--) {
			if (arr[i] > arr[val]) {
				swap(arr[i], arr[val]);
				break;
			}
		}
		reverse(arr + val+1, arr + n);
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}*/
		//Stock buy and sell
		/*int max_profit = 0;
		int min = arr[0];
		int maxi = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] > maxi) {
				maxi = arr[i];
			}
			else if (arr[i] < min) {
				min = arr[i];
				maxi = arr[i];
			}
			max_profit = max(max_profit, maxi - min);
		}
		cout << max_profit << " ";*/
		//Rearrange array elements by sign(only when positives and negatives are not equal in mumber)
		/*int j = 0;
		int* arra = new int[n];
		int k = 0;
		int* arraa = new int[n];
		int l = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] > 0) {
				arra[j] = arr[i];
				j++;
			}
			else if (arr[i] < 0) {
				arraa[k] = arr[i];
				k++;
			}
			else {
				l++;
			}
		}
		int m = 0;
		int o = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0 && m<j) {
				arr[i] = arra[m];
				m++;
			}
			else if(i%2 != 0 && o < k){
				arr[i] = arraa[o];
				o++;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}*/
		//Rearrange array elements by sign(only when positives and negatives are equal in mumber)
		/*int* arra = new int[n];
		int positive = 0;
		int negative = 1;
		int end = n - 1;
		for (int i = 0; i < n; i++) {
			if (arr[i] > 0) {
				arra[positive] = arr[i];
				positive += 2;
			}
			else if (arr[i] < 0) {
				arra[negative] = arr[i];
				negative += 2;
			}
			else {
				arra[end] = arr[i]; 
				end--;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << arra[i] << " ";
		}*/
		//Try to do kadane algo with exact good approach
		/*int sum = 0;
		int storage = 0;
		for (int i = 0; i < n; i++) {
			sum += arr[i];
			storage = max(storage, sum);
			if (sum < 0) {
				sum = 0;
			}
		}
		cout << storage;*/
		//Kadane's algorithm(largest subarray with maximum sum)
		/*int sum = 0;
		int storage = 0;
		for (int i = 0; i < n; i++) {
			sum += arr[i];
			if (sum < 0) {
				storage = max(storage, sum - arr[i]);
				sum = 0;
			}
			else {
				storage = max(storage, sum);
			}
		}
		cout << storage;*/
		//Most occuring element(More than n/2 times)
		/*int count = 1;
		int max_element = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] == max_element) {
				count++;
			}
			else {
				count--;
			}
			if (count == 0) {
				max_element = arr[i + 1];
				count = 0;
			}	
		}
		int count2 = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j] == max_element) {
				count2++;
			}
		}
		if (count2 > n / 2) {
			cout << "Yes";
		}
		else {
			cout << "Nope";
		}*/
		//Two sum problem
		/*sort(arr, arr + n);
		int i = 0;
		int j = n - 1;
		while (i < j) {
			if (arr[i] + arr[j] > o) {
				j--;
			}
			else if (arr[i] + arr[j] < o) {
				i++;
			}
			else {
				cout << "YESSS";
				break;
			}
		}
		cout << "No";*/
		//Sorting an array containing only 0, 1 and 2(three pointer approach)
		/*int i = 0;
		int j = 0;
		int k = n - 1;
		while (j <= k) {
			if (arr[j] == 1) {
				j++;
			}
			else if (arr[j] == 0) {
				swap(arr[i], arr[j]);
				i++;
			}
			else if (arr[j] == 2) {
				swap(arr[j], arr[k]);
				k--;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i];
		}*/
		//Longest subarray with sum k(include zeros) -- Optimal sol
		/*int j = 0;
		int sum = 0;
		int len = 0;
		for (int i = 0; i < n; i++) {
			if (sum < k) {
				sum += arr[i];
			}
			else if (sum > k) {
				sum -= arr[j];
				j++;
			}
			else {
				len = i - j + 1;
			}
		}
		cout << len;*/
		//Longest subarray with sum k(include zeros) -- just a slight change here we add condition before emplace because since sum will be same so it checks whether a key with sum exists and if it exists it doesm't updates it
		//Although for array containing positive, negative and zeros this is the optimality and if considering only positive and zeros this is just a better case not optimal
		/*map<int, int> mpp;
		int sum = 0;
		int len = 0;
		for (int i = 0; i < n; i++) {
			sum = sum + arr[i];
			if (sum == k) {
				len = max(i + 1,len);
			}
			int rem = sum - k;
			if (mpp.find(rem) != mpp.end()) {
				len = max(len, i - mpp[rem]);
			}
			if (mpp.find(sum) == mpp.end()) {
				mpp.emplace(sum, i);
			}
		}
		cout << len;*/
		//Longest subarray with sum k(positive)
		/*map<int, int> mpp;
		int sum = 0;
		int len = 0;
		for (int i = 0; i < n; i++) {
			sum = sum + arr[i];
			if (sum == k) {
				len = max(i + 1,len);
			}
			int rem = sum - k;
			if (mpp.find(rem) != mpp.end()) {
				len = max(len, i - mpp[rem]);
			}
			mpp.emplace(sum, i);
		}
		cout << len;*/
		//Find the number that appears once and others appear twice
		/*int xor1 = 0;
		for (int i = 0; i < n; i++) {
			xor1 = xor1 ^ arr[i];
		}
		cout << xor1;*/
		//Maximum consecutive ones
		/*int max = 0;
		int counter = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] == 1) {
				counter++;
				if (counter > max) {
					max = counter;
				}	
			}
			else {
				counter = 0;
			}
		}
		cout << max;*/
		//Find missing number(suming approach)
		/*int sum = ((n + 2) * (n + 1)) / 2;
		int arr_sum = 0;
		for (int i = 0; i < n; i++) {
			arr_sum = arr_sum + arr[i];
		}
		cout << sum - arr_sum;*/
		//Find missing number(XOR approach)
		/*int xor3 = xoring(n + 1);
		int xor2 = 0;
		for (int i = 0; i < n; i++) {
			xor2 = xor2 ^ arr[i];
		}
		int xor4 = xor2 ^ xor3;
		cout << xor4;*/
		//Intersection of two sorted array(repetition allowed)
		/*int counter = 0;
		int* arraa = new int[n + n1];
		int i = 0;
		int j = 0;
		while (i < n && j < n1) {
			if (arr[i] > arra[j]) {
				j++;
			}
			else if (arr[i] < arra[j]) {
				i++;
			}
			else {
				arraa[counter] = arra[j];
				counter++;
				i++;
				j++;
			}
		}
		for (int i = 0; i < counter; i++) {
			cout << arraa[i] << " ";
		}*/
		//Intersection of two sorted array(repetition not allowed)
		/*int counter = 0;
		int* arraa = new int[n + n1];
		int i = 0;
		int j = 0;
		while (i < n && j < n1) {
			if (arr[i] > arra[j]) {
				j++;
			}
			else if (arr[i] < arra[j]) {
				i++;
			}
			else {
				if (counter == 0 || arraa[counter - 1] != arra[j]) {
					arraa[counter] = arra[j];
					counter++;
				}
				i++;
				j++;
			}
		}
		for (int i = 0; i < counter; i++) {
			cout << arraa[i] << " ";
		}*/
		//Union of two sorted array
		/*int counter = 0;
		int* arraa = new int[n+n1];
		int i = 0;
		int j = 0;
		while (i < n && j < n1) {
			if (arr[i] >= arra[j]) {
				if (counter == 0 || arraa[counter-1] != arra[j]) {
					arraa[counter] = arra[j];
					counter++;
				}
				j++;
			}
			else{
				if (counter == 0 || arraa[counter-1] != arr[i]) {
					arraa[counter] = arr[i];
					counter++;
					
				}
				i++;
			}
			else { this was used for equality case but turns out it does not needs to be specifically checked and could be added in above cases as think of it like we basically had two strong gates first one with if for sorting and the other one which compares added element to the previous last element for duplication
				if (counter == 0 || arraa[counter-1] != arr[i]) {
					arraa[counter] = arr[i];
					counter++;
				}
				i++;
				j++;
			}
		}
		while (i < n) {
			if (counter == 0 || arraa[counter - 1] != arr[i]) {
				arraa[counter] = arr[i];
				counter++;
			}
			i++;
		}
		while (j < n1) {
			if (counter == 0 || arraa[counter - 1] != arra[j]) {
				arraa[counter] = arra[j];
				counter++;
			}
			j++;
		}
		for (int i = 0; i < counter; i++) {
			cout << arraa[i] << " ";
		}*/
		//Linear Search
		/*int j = -1;
		for (int i = 0; i < n; i++) {
			if (arr[i] == n1) {
				j = i;
				break;
			}
		}
		cout << j+1;*/
		//Move zeros to end
		/*int j=0;
		int i;
		for (i = 0; i < n; i++) {
			if (arr[i] == 0) {
				j = i;
				break;
			}
		}
		i++;
		for (i; i < n; i++) {
			if (arr[i] != 0) {
				swap(arr[j], arr[i]);
				j++;
			}
		}
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}*/
		//Left rotate array by D
		//there is a better way that is by using reverse(arr,arr + d) this will reverse the array from 0th to d-1th element
		/*k = k % n;
		for (int i = 0; i < k/2; i++) {
			swap(arr[i], arr[k - i - 1]);
		}
		for (int j = 0; j < (n - k) / 2; j++) {
			swap(arr[k + j], arr[n - 1 - j]);
		}
		for (int m = n-1; m >= 0; m--) {
			cout << arr[m] << endl;
		}*/
		//Left rotate array by one
		/*int temp = arr[0];
		for (int i = 0; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
		for (int i = 0; i < n; i++) {
			cout << arr[i];
		}*/
		//Removing duplicates in an array
		/*int i = 0;
		for (int j = 1; j < n; j++) {
			if (arr[i] != arr[j]) {
				i++;
				arr[i] = arr[j];
			}
		}
		for (int k = 0; k <= i; k++) {
			cout << arr[k] << endl;
		}*/
		//Finding if an array is already sorted
		/*bool sorted = true;
		for (int i = 0; i < n -1; i++) {
			if (arr[i] <= arr[i + 1]) {
				
			}
			else {
				cout << "Not sorted";
				sorted = false;
				break;
			}
		}
		if (sorted) {
			cout << "Sorted";
		}*/
		//Finding second largest element
		/*int lelement = arr[0];
		int slelement = -1;
		for (int i = 0; i < n; i++) {
			if (arr[i] > lelement) {
				slelement = lelement;
				lelement = arr[i];
			}
			else if (lelement > arr[i] && arr[i] > slelement) {
				slelement = arr[i];
			}
		}
		cout << slelement;*/
		//Finding largest element
		/*int largest_element = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] > largest_element) {
				largest_element = arr[i];
			}
		}
		cout << largest_element;*/
		//For quick sort
		/*QuickSorting(arr, i, j);
		sorting(arr, );*/
		//For merge sort
		/*int mid = (low + high) / 2;
		if (low >= high) {
			return;
		}
		sorting(arr, low, mid);
		sorting(arr, mid + 1, high);
		merging(arr, low, mid, high);*/
		//For insertion sort
		/*for (int i = 1; i < n; i++) {
			for (int j = i; j > 0; j--) {
				if (arr[j - 1] > arr[j]) {
					swap(arr[j-1],arr[j]);
				}
			}
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << endl;
		}*/
		//For bubble sort
		/*for (int i = 0; i < n-1; i++) {
			bool swapped = false;
			for (int j = 0; j <= n - i - 2; j++) {
				if (arr[j] > arr[j+1]) {
					swap(arr[j], arr[j+1]);
					swapped = true;
				}
			}
			if (swapped == false) break;
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << endl;
		}*/
		//For selection sort
		/*for (int i = 0; i <= n - 2; i++) {
			int mini = i;
			for (int j = i + 1; j <= n - 1; j++) {
				if (arr[j] < arr[mini]) {
					mini = j;
				}
			}
			swap(arr[mini], arr[i]);
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << endl;
		}*/
	}
    /*bool containers(string s,int i,int n) {*/
    //Reverse an array
	/*if (i >= n / 2)return;
	swap(arr[i], arr[n - i - 1]);
	containers(arr, i + 1, n);*/
    //To check if string is palindrome or not method 1
	/*if (i >= j)return s;
	swap(s[i], s[j]);
	return containers(s, i + 1, j - 1);*/
    //To check if string is palindrome or not method 2
	/*if (i >= n / 2)return true;
	if (s[i] != s[n - i - 1]) {
		return false;
	}
	return containers(s, i + 1, n);*/
	//Parameterised function-here operation actually happens in parameter
	/*if (n1 == 0)return sum;
	containers(n1-1,sum+n1);*/
	//Fibonaci number
	/*if (n1 == 0)return 0;
	if (n1 == 1)return 1;
	return containers(n1 - 1) + containers(n1 - 2);*/
	//Print from N to 1 using backtraking
	/*if (i == n1+1)return;
	containers(i + 1, n1);
	cout << i << endl;*/
	//Factorial
	/*if (n1 == 1||n1 == 0)return 1;
	int factorials = n1 * containers(n1 - 1);
	return factorials;*/
	//Print sum of N numbers
	/*if (n1 == 0)return 0;
    int container = n1+containers(n1 - 1);
	return container;*/
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
//}
//Pattern Solving
	int main() {
		int n;
		cin >> n;
		vector<int> arr;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int k;
		cin >> k;
        sorting(arr,n,k);
		//for taking input for matrix
		/*int n, m;
		cin >> n >> m;
		int* arr = new int[n*m];accessing it is arr[2*m+3] row is 2nd and column is 3rd
		vector<vector<int>> arr(n, vector<int>(m));//this is considered a more better approachq1
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}*/
    //To sort an array using selection sort
	/*sorting(arr, n);*/
	//To perform Bubble sort
    //To sort an array using Merge sort
	/*int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sorting(arr,n);
	delete[] arr;*/
	//To perform number hashing using map - you can also use unordered map and its best and average time is O(1) but worst case is O(n) and in case of ordered and sorted map complexity is O(logn) in all cases
	/*int n;
	cin >> n;
	int* arr = new int[n];//This is a way to create a dynamic array int* arr = new int[n]
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	map<int, int> mpp;
	for (int i = 0; i < n; i++) {
		mpp[arr[i]]++;
	}
	int m;
	cin >> m;
	while (m--) {
		int o;
		cin >> o;
		cout << mpp[o];//you did this but if in query there is a key which doesn't exist in the map previously then your asking will create it with value zero.
	}
	for (auto it : mpp) {
		cout << it.first << " " << it.second;
	}*/
	//To perform character hashing using array
	/*string s;
	cin >> s;
	int arr[256] = { 0 };
	for (int i = 0; i < s.length(); i++) {
		arr[s[i]]++;
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char m;
		cin >> m;
		cout << arr[m];
	}*/
	//To perform number hashing using array
	/*int n;
	cin >> n;
	int* arr = new int[n];//This is a way to create a dynamic array int* arr = new int[n]
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int m;
	cout << "What is the range of queries you will ask?" << endl;
	cin >> m;
	int* hash = new int[m+1]();
	for (int i = 0; i < n; i++) {
		hash[arr[i]]++;
	}
	int o;
	cout << "How many queries?" << endl;
	cin >> o;
	int* arrr = new int[o];
	for (int i = 0; i < o; i++) {
		cin >> arrr[i];
		if (arrr[i] > m || arrr[i] < 0) {
			cout << "Nigga what the fuck you doing?" << endl;
		}
		else {
			cout << hash[arrr[i]] << endl;
		}
	}
	delete[] arr;
	delete[] hash;
	delete[] arrr;*/
	//To reverse an array
	/*int arr[5];
	for (auto& it : arr) {
		cin >> it;
	}
	int i = 0;
	int n = sizeof(arr)/sizeof(arr[0]);
	containers(arr, i, n);
	for (int p = 0; p < n; p++) {
		cout << arr[p];
	}*/
	/*int n1;
	cin >> n1;
	int sum = 0;*/
	//To check if a string is a palindrome or not method 1
	/*string s;
	cin >> s;
	int i = 0;
	int j = s.length()-1;
	string o = s;
	if (containers(s, i, j) == o) {
		cout << "Palindrome bitch";
	}
	else {
		cout << "Nah man";
	}*/
	//To check if a string is a palindrome or not method 2
    /*string s;
	cin >> s;
	int i = 0;
	int n = s.length();
	cout << containers(s,i,n);*/
	//To find the HCF of two number method 1
	/*int n1, n2;
	cin >> n1 >> n2;
	int k = 1;
	for (int i = 1; i <= min(n1, n2); i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			k = i;
		}
	}
	cout << k;*/
	//To find the HCF of two number method 2
	/*int n1,n2;
	cin >> n1 >> n2;
	while (n1 > 0 && n2 > 0) {
		if (n1 > n2) {
			n1 = n1 % n2;
		}
		else {
			n2 = n2 % n1;
		}
	}
	if (n1 == 0) {
		cout << n2;
	}
	else {
		cout << n1;
	}*/
	//To check if number is prime
	/*if(n<=1){
	  cout << "Not prime";
	}
	int count = 0;
	for (int i = 1; i*i <= n; i++) {
		if (n % i == 0) {
			count=count+2;
		}
	}
	if (count > 2) {
		cout << "Not prime";
	}
	else {
		cout << "Prime bitch";
	}*/
	//to check armstrong number
	/*int l = n;
	int m = n;
	int count = 0;
	int k = 0;
	while (m > 0) {
		count++;
		m = m / 10;
	}
	while (n > 0) {
	    k = k + pow((n % 10),count);
		n = n / 10;
	}
	if (k == l) {
		cout << true;
	}
	else {
		cout << false;
	}*/
	//palindrome checking
	/*int k = n;
	int revno = 0;
	while (n > 0) {
		int digit = n % 10;
		revno = (revno * 10) + digit;
		n = n / 10;
	}
	if (revno == k) {
		cout << "This is a palindrome";
	}
	else {
		cout << "nah";
	}*/
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

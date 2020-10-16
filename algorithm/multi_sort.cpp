/*
>多次元配列のソート
<algorithm>のsortの第3引数compで、sort by...を指定できる
以下では、pair<int char>の配列をcharでソートする
*/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

template <class T>
bool sort_by(const T &a, const T &b){
	return (a.second < b.second);
}

int main(){
	/*sort_byの動作確認
	int a,b;
	printf("Enter 2 integers a,b:");
	scanf("%d %d",&a,&b);
	bool t = sort_by<int>(a,b);
	printf("sort_by:%d",t);
	*/
	
	int n;
	printf("Enter length of vector<int,char>:");
	scanf("%d",&n);
	printf("Enter %d pair<int,char>:\n",n);
	
	vector<pair<int,char>> v;
	pair<int,char> p;
	for(int i=0;i<n;i++){
		cin>>p.first>>p.second;
		v.push_back(p);
	}
	
	sort(v.begin(),v.end(),sort_by<pair<int,char>>);
	
	printf("\nsorted vector:");
	for(int i=0;i<n;i++){
		p = v[i];
		cout<<endl<<p.first<<' '<<p.second;
		//printf("\n%n %c",p.first,p.second);
	}
}

/*
http://www.cplusplus.com/reference/algorithm/sort/

function template 
<algorithm>
std::sort
default (1)	
template <class RandomAccessIterator>
  void sort (RandomAccessIterator first, RandomAccessIterator last);
custom (2)	
template <class RandomAccessIterator, class Compare>
  void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
Sort elements in range
Sorts the elements in the range [first,last) into ascending order.

The elements are compared using operator< for the first version, and comp for the second.

Equivalent elements are not guaranteed to keep their original relative order (see stable_sort).

Parameters
first, last
Random-access iterators to the initial and final positions of the sequence to be sorted. The range used is [first,last), which contains all the elements between first and last, including the element pointed by first but not the element pointed by last.
RandomAccessIterator shall point to a type for which swap is properly defined and which is both move-constructible and move-assignable.
comp
Binary function that accepts two elements in the range as arguments, and returns a value convertible to bool. The value returned indicates whether the element passed as first argument is considered to go before the second in the specific strict weak ordering it defines.
The function shall not modify any of its arguments.
This can either be a function pointer or a function object.

*/
/*
https://www.geeksforgeeks.org/sorting-vector-of-pairs-in-c-set-1-sort-by-first-and-second/
// C++ program to demonstrate sorting in vector 
// of pair according to 2nd element of pair 
#include<bits/stdc++.h> 
using namespace std; 
  
// Driver function to sort the vector elements 
// by second element of pairs 
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
  
int main() 
{ 
    // declaring vector of pairs 
    vector< pair <int, int> > vect; 
  
    // Initialising 1st and 2nd element of pairs 
    // with array values 
    int arr[] = {10, 20, 5, 40 }; 
    int arr1[] = {30, 60, 20, 50}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    // Entering values in vector of pairs 
    for (int i=0; i<n; i++) 
        vect.push_back( make_pair(arr[i],arr1[i]) ); 
  
    // Printing the original vector(before sort()) 
    cout << "The vector before sort operation is:\n" ; 
    for (int i=0; i<n; i++) 
    { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << vect[i].first << " "
             << vect[i].second << endl; 
  
    } 
  
    // Using sort() function to sort by 2nd element 
    // of pair 
    sort(vect.begin(), vect.end(), sortbysec); 
  
    // Printing the sorted vector(after using sort()) 
    cout << "The vector after sort operation is:\n" ; 
    for (int i=0; i<n; i++) 
    { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << vect[i].first << " "
             << vect[i].second << endl;
    } 
    return 0; 
} 

*/
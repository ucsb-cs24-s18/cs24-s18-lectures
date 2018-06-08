//compare naiive sorting algorithm with heapsort

#include <iostream>
#include <queue>
#include <time.h>
#include <iomanip>

using namespace std;

void selectionSort(vector<int>& a, int N){
	//Precondition: unsorted array
	//Post condition: sorted array in ascending order
	for(int i =0; i<N; i++){ // N times 
		int minElem = a[i];
		int index=i;
		for(int j = i+1; j<N;j++){  // (N-i)
			if(a[j]<minElem){ // constant time O(1)
				minElem = a[j];
				index = j;
			}
		}
		int tmp = a[i];
		a[i] = a[index];
		a[index]=tmp;
	}

}
// Outer loop : N
// Inner loop: (N-i)* O(1)
// (N-1) + (N-2) + (N-3) + ..... 1
// N(N-1)/2


void heapSort(vector<int>& a, int N){
	priority_queue<int, vector<int>, greater<int>> pq;

	for(auto item: a){  // N times
		pq.push(item); // Bound the running time by O(logN)
	}


	int i =0;
	while(!pq.empty()){ // N times
		a[i] = pq.top(); // O(1) 
		pq.pop(); // Even though number of elements in pq is changing
		          // Complexity of pop will change, bound it by O(logN)
		i++;
	
	}// N* (O(1)+ O(logN)) = N log(N)
	/*
	for(auto item: bst){
		a[i] = item;
	}*/


	//Overall O(NlogN)
	


}


void bstSort(vector<int>& a, int N){

	set<int> bst; // Balanced BST given by STL
	for(auto item: a){  // N times
		bst.insert(item); // O(logN)
	}

	//O(NlogN)
	

	int i =0;
	while(!bst.empty()){ // N times
		a[i] = bst.min();  //O(logN)
		bst.delete(a[i]); // cost to find + cost to delete
		                  // O(logN) + O(logN) = O(logN)
		i++;
		
	}	
	// O(NlogN)
	//Overall : O(NlogN)

}





int main(int argc, char *argv[]){
	
	vector<int> v={7, 23, 15, 96, 42, -10, 112, 0, 360, 7};

	cout<<"Original array\n";

	for( auto item: v){
		cout<<item<<" ";
	}
	cout<<endl;

	cout<<"Sorting\n";

	clock_t t;
	t = clock();

	if(string(argv[1])=="s")
		selectionSort(v, v.size());
	else
		heapSort(v, v.size());

	t = clock() - t;

	cout<<"Output after sorting\n";
	for( auto item: v){
		cout<<item<<" ";
	}
	cout<<endl<<endl;

	cout.precision(2);
    cout<<"Time to sort: "<<setw(4)<<((double)t)*1000/CLOCKS_PER_SEC<<"ms"<<endl;
	
}

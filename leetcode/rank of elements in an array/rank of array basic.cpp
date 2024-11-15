// Find rank of a basic array with unique elements.

// Approach:
// 1. First copy the original array.
// 2. Sort the copied array.
// 3. create a array rank to store the rank of the array.
// 4. Now iterated over the original array and find that element in the copied array
//    now store the corresponding index of the element in original array.
//  
//    Original Array:   10 20 15 30 25 
//    Sorted Array:     10 15 20 25 30 
//    Rank of elements: 1  3  2  5  4  -> position of original array elements in sorted array.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int>& arr)
{
  int size = arr.size();
  for(int num: arr)
  {
    cout << num << " ";
  }
  cout << endl;
}

void uniqueElementRank(vector<int> arr)f
{
  int size = arr.size();

  cout << "Original array: ";
  printArr(arr);

  vector<int> copyArray(arr);
  sort(copyArray.begin(), copyArray.end());
  cout << "Sorted Array: ";
  printArr(copyArray);

  vector<int> rank(size,0);
  for(int i = 0; i < size; i++)
  {
    for(int j = 0; j< size; j++)
    {
      if(arr[i] == copyArray[j])
      {
        rank[i] = j+1;
      }
    }
  }

  cout << "Rank: ";
  printArr(rank);

}

// function to find rank of array which has repeated elements.
void repeatedElementRank(vector<int> arr)
{
  vector<int> sortedArr(arr);
  sort(sortedArr.begin(), sortedArr.end());
  
  unordered_map<int, int> rankMap;
  int rank = 1;
  
  for (int num : sortedArr) {
    if (rankMap.find(num) == rankMap.end()) {
        rankMap[num] = rank++;
    }
  }
  
  vector<int> result;
  for (int num : arr) {
      result.push_back(rankMap[num]);
  }
}



void duplicateElementRank(vector<int> arr)
{
  cout << "Original Array: " ;
  printArr(arr);

  vector<int> copyArray(arr);

  sort(copyArray.begin(), copyArray.end());

  unordered_map<int, int> rankMap;
  int rank = 1;
  for(int num : copyArray){
    if(rankMap.find(num) == rankMap.end()){
      rankMap[num] = rank++;
    }
  }




}

int main()
{
  vector<int> arr({10, 20, 15, 30, 25}); // now the ranks will be: { 1, 3, 2, 5, 4 }

  uniqueElementRank(arr);

  arr.push_back(arr[0]);
  arr.push_back(arr[4]);
  arr.push_back(arr[0]);

  repeatedElementRank(arr);

  duplicateElementRank(arr);



  return 0;
}




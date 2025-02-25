// Program to calculate Maximum Subarray Sum

#include<bits/stdc++.h>
using namespace std;

// Kadane Algorithm to find the Maximum Sum of continuous elements in an array 
int kadaneMax(int arr[], int n) {
  // Initialise the ans and prevBest with first element of array
  int ans = arr[0], prevBest = arr[0];  

  for(int i=1; i<n; i++) {
    prevBest = max(prevBest + arr[i], arr[i]);
    ans = max(ans, prevBest);
  }

  return ans;
}

int main() {
  int n;  // size of array
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }
  cout << KadaneMax(arr, n);
  return 0;
}

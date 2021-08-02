/**
 * @file permutation-of-multisets.cpp
 * @author prakash (prakashsellathurai@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-08-02
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <algorithm>
#include <iostream>
#include <map>

#define NMAX 10000
using namespace std;

/**
 * @brief print the permutation of unique multisets
 *
 * @param arr
 * @param n
 */
void print_perm(int *arr, int n) {
  cout << "{";
  for (int i = 0; i < n; i++) {
    cout << arr[i];
    if (i < n - 1) {
      cout << ", ";
    }
  }
  cout << "}" << endl;
}
/**
 * @brief Genrate unique combinations
 *  if arr of n elements has n! permutations
 *  then the number of unique combinations is
 *  n!/(n-k)!
 *  with length m
 * @param arr
 * @param c
 * @param start
 * @param end
 * @param i
 * @param n
 */
void combination_of_multisets(int *arr, int c[], int k, map<int, int> counter,
                              int n) {

  if (k == n) {
    print_perm(arr, n);
    return;
  }

  for (auto count : counter) {
    if (count.second > 0) {
      arr[k] = count.first;
      counter[count.first]--;
      combination_of_multisets(arr, c, k + 1, counter, n);
      counter[count.first]++;
    }
  }
}

void generate_combination(int *arr, int n) {
  map<int, int> counter;
  int k;
  int c[NMAX];

  for (int i = 0; i < n; i++) {
    if (!counter[arr[i]]) {
      counter[arr[i]] = 0;
    }
    counter[arr[i]]++;
  }

  combination_of_multisets(arr, c, 0, counter, n);
}

int main(int argc, char const *argv[]) {
  int arr[] = {1, 1, 2, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  generate_combination(arr, n);
  return 0;
}

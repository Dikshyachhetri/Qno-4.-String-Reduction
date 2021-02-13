#include<bits/stdc++.h> 
using namespace std; 
 
// Function to find consecutive ranges 
vector<string> consecutiveRanges(int a[], int n) 
{ 
    int length = 1; 
    vector<string> list; 
     
    // If the array is empty, 
    // return the list 
    if (n == 0) 
    { 
        return list; 
    } 
     
    // Traverse the array from first position 
    for(int i = 1; i <= n; i++) 
    { 
     
        // Check the difference between the 
        // current and the previous elements 
        // If the difference doesn't equal to 1 
        // just increment the length variable. 
        if (i == n || a[i] - a[i - 1] != 1) 
        { 
     
            // If the range contains 
            // only one element. 
            // add it into the list. 
            if (length == 1) 
            { 
                list.push_back(string(a[i - length])); 
            } 
            else
            { 
     
                // Build the range between the first 
                // element of the range and the 
                // current previous element as the 
                // last range. 
                string temp = to_string(a[i - length]) + 
                            " -> " + to_string(a[i - 1]); 
                list.push_back(temp); 
            } 
     
            // After finding the first range 
            // initialize the length by 1 to 
            // build the next range. 
            length = 1; 
        } 
        else
        { 
            length++; 
        } 
    } 
    return list; 
} 
 
// Driver Code. 
int main() 
{ 
 
    // Test Case 1: 
    int arr1[] = { 1, 2, 3, 6, 7 }; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 
     
    vector<string> ans = consecutiveRanges(arr1, n); 
    cout << "["; 
    for(int i = 0; i < ans.size(); i++) 
    { 
        if(i == ans.size() - 1) 
            cout << ans[i] << "]" << endl; 
        else
            cout << ans[i] << ", "; 
    } 
     
    // Test Case 2: 
    int arr2[] = { -1, 0, 1, 2, 5, 6, 8 }; 
    n = sizeof(arr2) / sizeof(arr2[0]); 
    ans = consecutiveRanges(arr2, n); 
     
    cout << "["; 
    for(int i = 0; i < ans.size(); i++) 
    { 
        if(i == ans.size() - 1) 
            cout << ans[i] << "]" << endl; 
        else
            cout << ans[i] << ", "; 
    } 
     
    // Test Case 3: 
    int arr3[] = { -1, 3, 4, 5, 20, 21, 25 }; 
    n = sizeof(arr3) / sizeof(arr3[0]); 
    ans = consecutiveRanges(arr3, n); 
     
    cout << "["; 
    for(int i = 0; i < ans.size(); i++) 
    { 
        if(i == ans.size() - 1) 
            cout << ans[i] << "]" << endl; 
        else
            cout << ans[i] << ", "; 
    } 
} 

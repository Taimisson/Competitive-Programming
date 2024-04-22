# 427A	Police Recruits

https://codeforces.com/problemset/problem/427/A

# Solution

```
#include <iostream>
using namespace std;

int main() {
    int n; // Number of events
    cin >> n;
    
    int availableOfficers = 0; // Initially, there are no police officers
    int untreatedCrimes = 0; // Initially, there are no untreated crimes
    
    for(int i = 0; i < n; i++) {
        int event;
        cin >> event; // Read the event
        
        if(event == -1) { // If a crime occurs
            if(availableOfficers > 0) {
                availableOfficers--; // An available officer investigates the crime
            } else {
                untreatedCrimes++; // No available officer, crime goes untreated
            }
        } else {
            availableOfficers += event; // Recruit officers
        }
    }
    
    cout << untreatedCrimes << endl; // Print the number of untreated crimes
    
    return 0;
}

```
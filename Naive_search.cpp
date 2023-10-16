#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  char txt[] = "thisisatext";
  char pattern[] = "text";
  int j;
  int m = strlen(txt);
  int n = strlen(pattern);
  for (int i = 0; i <= m-n; i++) {
        for (j = 0; j < n; j++){
            if (txt[i + j] != pattern[j])
                break;
        }
        if (j==n)
            cout << "Pattern found at index " << i;
  }
  return 0;
}

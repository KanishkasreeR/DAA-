#include <bits/stdc++.h>
using namespace std;
#define TOTAL_CHARACTERS 256

void badMatch(string s, int n,int badCharacter[TOTAL_CHARACTERS]) {
   for (int i = 0; i < TOTAL_CHARACTERS; i++)
      badCharacter[i] = -1;
   for (int i = 0; i < n; i++)
      badCharacter[(int)s[i]] = i;
}

void _search(string text, string pattern) {
   int n = text.size();
   int m = pattern.size();
   int badCharacter[TOTAL_CHARACTERS];
   badMatch(pattern, m, badCharacter);
   int s = 0;
   while (s <= (n - m)) {
      int j = m - 1;
      while (j >= 0 && pattern[j] == text[s + j])
         j--;

      if (j < 0) {
         cout << "Pattern found";
         break;

      }
      else
         s += j - badCharacter[text[s + j]];
   }
}

int main() {
   string text = "TRUSTHARDTOOTHBRUSH";
   string pattern = "TOOTH";
   _search(text, pattern);
   return 0;
}

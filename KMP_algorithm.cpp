#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void lpsarr(char* pat, int m , int* lps)
{
   int len = 0;
   lps[0] = 0;
   int i = 0;
   while(i<m){
      if(pat[i] == pat[len]){
        len++;
        i++;
        lps[i] = len;
      }
      else{
        if(len!=0){
            len = lps[len-1];
        }
        else{
            lps[i] = 0;
            i++;
        }
      }
   }
}

void KMPSearch(char* pat, char* txt){
int m = strlen(pat);
int n = strlen(txt);
int lps[n];
lpsarr(pat, m, lps);
int i = 0;
int j = 0;
while ((n-i) >= (m-j)){
   if (pat[j] == txt[i]) {
    j++;
    i++;
}
   if (j == m) {
     cout<<"Pattern Found";
      j = lps[j - 1];
}
   else if (i < n && pat[j] != txt[i]){
      if (j != 0)
         j = lps[j - 1];
      else
        i = i + 1;
}
}
}


int main()
{
char txt[] = "ABABDABACDABABCABAB";
char pat[] = "ABABCABAB";
KMPSearch(pat, txt);
return 0;
}

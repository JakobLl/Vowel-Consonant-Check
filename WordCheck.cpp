#include <iostream>
using namespace std;


int main(){
unsigned int z=0;
int v, c;
string word;
  cout << " Enter EXIT  to stop\n";
  while(word!="EXIT") {
cout << " Enter a word\n";
    v=0; c=0;
cin >> word;
for(z=0;word[z] != '\0';z++) {
    cout << word[z] <<endl;
   /* NUMBER CHECK * no mumbers alowed * */
 if(word[z]=='0') { cout << " Error"; return 0;}
 if(word[z]=='1') { cout << " Error"; return 0;}
 if(word[z]=='2') { cout << " Error"; return 0;}
 if(word[z]=='3') { cout << " Error"; return 0;}
 if(word[z]=='4') { cout << " Error"; return 0;}
 if(word[z]=='5') { cout << " Error"; return 0;}
 if(word[z]=='6') { cout << " Error"; return 0;}
 if(word[z]=='7') { cout << " Error"; return 0;}
 if(word[z]=='8') { cout << " Error"; return 0;}
 if(word[z]=='9') { cout << " Error"; return 0;}
      /* VOWEL CHECK */
        if(word[z]=='a') { ++v;}
  else  if(word[z]=='e') { ++v;}
  else  if(word[z]=='i') { ++v;}
  else  if(word[z]=='o') { ++v;}
  else  if(word[z]=='u') { ++v;} 
      /**/
  else  if(word[z]=='A') { ++v;}
  else  if(word[z]=='E') { ++v;}
  else  if(word[z]=='I') { ++v;}
  else  if(word[z]=='O') { ++v;}
  else  if(word[z]=='U') { ++v;} 
      /* CONSONANT CHECK */
 else { ++c; }
 
}/* *for* */
  cout <<" # of Vowels " << v << endl << " # of Consonants " << c << endl;
  }/* *while* */
}/* main */


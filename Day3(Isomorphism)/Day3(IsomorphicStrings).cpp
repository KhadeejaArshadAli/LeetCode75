//  Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true
 
 #include <string>
#include <iostream>
using namespace std;
#define MAX 256
 
 bool isIsomorphic(string s, string t){
    int m=s.length();
    int n=t.length();
   
    if (m!=n){ // we will compare the lenght of the two strings and if not equal it will return false
        return false;
    }
    else{
        char seen[MAX] = {}; ///Create an empty array of size that could hold the characters of both the strings
                              //in terms of ascii code
		for (int i = 0; i < m; i++) {//We will start to compare
            char c = s[i]; //
            if (!seen[c]) { //if seen is empty at position seen[c] for.eg seen['a']=seen[97]
                for (char s: seen) //this is a for each loop it will scan through the whole seen array
				 if (s == t[i]){ // if any letter matches with letter of string 2 
				                 //it will return false because isomorphism does not allow any duplicacy
					return false;

				 }
                seen[c] = t[i];//else it will be place in the seen array
            }
            else if (seen[c] != t[i]){ //else if is used because i have to another condition and in else we cannot
                                       // this condition checks if seen is not empty at that position then is it equal to t[i]			
				 return false; 
				     //if not return false means the current char is already been defined by another character
        }
		}
        return true;
		
    }
			
	}

	int main(){
		cout<<"TEST CASE 1"<<endl;
		string s1=" egg";
		string t1=" add";
		isIsomorphic(s1,t1);
		if(isIsomorphic(s1,t1)==1){
            cout<<"TRUE"<<endl;
		}
		else{
			cout<<"FALSE"<<endl;
		}
		cout<<"TEST CASE 2"<<endl;
		string s2=" foo";
		string t2=" bar";
		isIsomorphic(s2,t2);
		if(isIsomorphic(s2,t2)==1){
            cout<<"TRUE"<<endl;
		}
		else{
			cout<<"FALSE"<<endl;
		}
		cout<<"TEST CASE 3"<<endl;
		string s=" paper";
		string t=" title";
		isIsomorphic(s,t);
		if(isIsomorphic(s,t)==1){
            cout<<"TRUE"<<endl;
		}
		else{
			cout<<"FALSE"<<endl;
		}
      return 0;
	}


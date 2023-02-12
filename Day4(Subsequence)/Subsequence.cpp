//Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

//A subsequence of a string is a new string that is formed from the original string by deleting 
//some (can be none) of the characters without disturbing 
//the relative positions of the remaining characters. 
//(i.e., "ace" is a subsequence of "abcde" while "aec" is not).

//Example 1:

//Input: s = "abc", t = "ahbgdc"
//Output: true
//Example 2:

//Input: s = "axc", t = "ahbgdc"
//Output: false

#include <iostream>
#include <string>
using namespace std;
bool isSubsequence(string s, string t) {
    int m=s.length(); //these lenght function determine the lenght of each string
    int n=t.length();
     int j=0;
   for (int i=0;i<n;i++){//for loop have a counter of the longer string
    if(s[j]==t[i]){//comprasion will start and if equal 
        j++;      //j will increment
    }
   }
   if(j==m){// if j==lenght of the smaller string that means all the charaters were found
    return true;
   }
   else{
    return false;//if not so flase
   }
 
    }


   

        
           
        
				               


int main(){
    cout<<"TEST CASE 1"<<endl;
    string s1="abc";
    string t1="ahbgdc";
     cout<<"TEST CASE 2"<<endl;
    string s2 = "axc";
    string t2 = "ahbgdc";

   isSubsequence( s1,  t1);
   if(isSubsequence==0){
    cout<<"FALSE"<<endl;

    }
   else cout<<"TRUE"<<endl;
   isSubsequence( s2,  t2);
    if(isSubsequence==0){
    cout<<"FALSE"<<endl;

    }
   else cout<<"TRUE"<<endl;
    return 0;

}
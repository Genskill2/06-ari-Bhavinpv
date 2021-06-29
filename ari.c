#include<cs50.h>
#include <string.h>
#include <ctype.h>


string ari(string para){
 int alpnum=0 , words=0 , sents=0;

 for (int i=0 ; para[i] !='\0'; i++) {
  if(isalnum(para[i]) == 1) {
     alpnum++ ;
    
     }
  else if( para[i] ==' ') {
   words++ ;
   }
  else if(para[i]=='.' || para[i]=='?' || para[i]=='!') {
  sents++;
  }
  }
 
 float score;
 int rounded_score;
  score= 4.71*(float)(alpnum/words+1) + 0.5*(float)(words+1/sents)-21.43;
 if( score - (int)score !=0) {
    rounded_score=(int)(score + 1 );
 } 
 else{
  rounded_score=(int)score;
 }
  string grade[14]={"Kindergarten","First/Second Grade" , "Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade"," Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"};
 if(rounded_score <= 14) {
   return grade[rounded_score - 1] ;
 }
 else
  return grade[13];
 }  






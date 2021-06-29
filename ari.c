#include<stdio.h>
#include<cs50.h>
#include <string.h>
#include <ctype.h>

float score_calculator(int,int,int);

string ari(string para){
 int alpnum=0 , words=0 , sents=0;

 for (int i=0 ; i<strlen(para); i++) {
  if(isalnum(para[i]) == 1) {
     alpnum++ ;
      }
      }
  for (int i=0 ; i<strlen(para); i++) {
   if( para[i] ==' ') {
   words++ ;
   }
   }
   for (int i=0 ; i<strlen(para); i++) {
  if(para[i]=='.' || para[i]=='?' || para[i]=='!') {
  sents++;
  }
  }
 
 
 int rounded_score;
 float score= score_calculator(alpnum,words,sents);
  
 if(score - (int)score !=0) {
    rounded_score=(int)(score + 1 );
 } 
 else{
  rounded_score=(int)score;
 }
 
  string grade[14]={"Kindergarten","First/Second Grade" , "Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade"," Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"};
 
 if(rounded_score <= 14) {
   return grade[rounded_score - 1] ;
 }
 else if(rounded_score==0){
 return "NULL";
 }
 else
  return grade[13];
  }
  
  float score_calculator(int characters,int words , int sentences){
  float score= 4.71*(float)(characters/words) + 0.5*(float)(words/sentences) - 21.43;
  return score;
  }
  





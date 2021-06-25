
string ari(string para){
 int alpnum=0 , words=0 , sents=0;
 for (int i=0 ; para[i]=='\0'; i++) {
  if (isalnum(para[i]) == 1 ) {
     alpnum++ ;
     }
  else if (para[i]==" ") {
   words++ ;
   }
  else if (para[i]=='.' || para[i]=='?') {
  sents++;
  }
  else(para[i]=='!'){
  sents++;
  }
  }
  float score;
  score= 4.71*(alpnum/words) + 0.5*(words/sents)-21.43;
  int rounded_score;
  rounded_score = (int)(score + 1 ); 
  
 string grade[14]={"Kindergarten","First/Second Grade" , "Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade"," Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"};
 return grade[rounded_score - 1] ;
 }  

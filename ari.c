#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <cs50.h>

string ari (string para) {
	
	int no_of_characters(string );   // protyping
	int no_of_words(string );
	int no_of_sentences(string );
	int score_calculator(int , int , int );
	
	int char_count = no_of_characters(para);
	int word_count = no_of_words(para);
	int sentence_count = no_of_sentences(para);
	int score = score_calculator(char_count, word_count, sentence_count);
	
	string grade[14] = {"Kindergarten", "First/Second Grade", "Third Grade", "Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade", "Eight Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade" , "Twelfth Grade", "College Student", "Professor"};
	if (score > 14) {
		return grade[13];
	}
	else if (score == 0) {
		return 0;
	}
	else {
		return grade[score - 1];
	}
}

//functions
int no_of_characters(string para) {
	int characters = 0;
	for (int i = 0; i < strlen(para) ; i++) {
		if(isalnum(para[i])) {
			characters++;
		}
	}
	return characters;
}

int no_of_words(string para) {
	int words = 0;
	for (int i = 0; i < strlen(para) ; i++) {
		if(para[i] == ' ') {
			words++;
		}
	}
	return words;
}

int no_of_sentences(string para) {
	int sentences = 0;
	for (int i = 0; i < strlen(para) ; i++) {
		if((para[i]) == '.' || para[i] == '?' || para[i] == '!') {
			sentences++;
		}
	}
	return sentences;
}

int score_calculator(int characters, int words , int sentences) {
	float score = 4.71 * (float)characters/words + 0.5 * (float)words/sentences - 21.43;
	
	if (score - (int)score != 0) {                       
		score = (int)score + 1;
	}
	return score;
}

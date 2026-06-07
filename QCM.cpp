#include <iostream>
using namespace std;
int main(){
	
	int type, correct;
	
	input20:
	cout << "\n:::::::::::::: Quiz relax :::::::::::::::\n";
	cout << "1. Question type Technology\n";
	cout << "2. Question type General knowledge\n";
	cout << "3. Question type Language Program\n";
	cout << "4. Exit\n";
	cout << "Choose one: ";cin >> type;
	while(type !=4){
	
	switch(type){
		case 1:{
			cout << "\nQuestion type Technology: \n";
			input:
			cout << "\nQuestion 1: What does CPU stand for?\n";
			cout << "1. Central Process Unit\n";
			cout << "2. Central Processing Unit\n";
			cout << "3. Computer Personal Unit\n";
			cout << "4. Control Processing Unit\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 2){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input1:
			cout << "\nQuestion 2: Which company developed the Andriod operating system?\n";
			cout << "1. Apple\n";
			cout << "2. Microsft\n";
			cout << "3. IBM\n";
			cout << "4. Google\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 4){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input1;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input2:
			cout << "\nQuestion 3: Which language is primarily uesd for web page structure\n";
			cout << "1. HTML\n";
			cout << "2. CSS\n";
			cout << "3. Python\n";
			cout << "4. Java\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 1){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input2;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input3:
			cout << "\nQuestion 4: What does SQL stand for?\n";
			cout << "1. Simple Query Language\n";
			cout << "2. Sequential Query Language\n";
			cout << "3. Structure Query Language\n";
			cout << "4. System Query Language\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 3){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input3;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input4:
			cout << "\nQuestion 5: Which device is used to connect a computer to a network?\n";
			cout << "1. Monitor\n";
			cout << "2. Keybroad\n";
			cout << "3. Mouse\n";
			cout << "4. Router\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 4){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input4;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			break;
		}
		case 2:{
			cout << "\nQuestion type General knowledge: \n";
			input5:
			cout << "\nQuestion 1: Which ocean is the largest in the world?\n";
			cout << "1. Atlantic Ocean\n";
			cout << "2. Indian Ocean\n";
			cout << "3. Pacific Ocean\n";
			cout << "4. Arctic Ocean\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 3){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input5;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input6:
			cout << "\nQuestion 2: What is the Capital city of Cambodia?\n";
			cout << "1. Siem Reap\n";
			cout << "2. Phnom Penh\n";
			cout << "3. Koh Thom\n";
			cout << "4. Kompong Thum\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 2){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input6;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input7:
			cout << "\nQuestion 3: What is the official Currency of Cambodia?\n";
			cout << "1. Reil\n";
			cout << "2. Dong\n";
			cout << "3. Baht\n";
			cout << "4. Dollar\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 1){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input7;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input8:
			cout << "\nQuestion 4: Which famous temple complex is located in Cambodia?\n";
			cout << "1. Bak Kheng temple\n";
			cout << "2. Preah Vihear temple\n";
			cout << "3. Banteay Srei temple\n";
			cout << "4. Angkor Wat temple\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 4){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input8;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input9:
			cout << "\nQuestion 5: Which river is the longest in Cambodia?\n"; 
			cout << "1. Mekong River\n";
			cout << "2. Amazon River\n";
			cout << "3. Nile River\n";
			cout << "4. Bassac River\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 1){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input9;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			break;
		}
		
		case 3:{
			cout << "\nQuestion type Language Program: \n";
			input10:
			cout << "\nQuestion 1: Which programming language is used for styling web pages?\n";
			cout << "1.Python\n";
			cout << "2.HTML\n";
			cout << "3.JavaScript\n";
			cout << "4. CSS\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 4){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input10;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input11:
			cout << "\nQuestion 2: which programming language it easy to learn?\n";
			cout << "1. C++\n";
			cout << "2. C\n";
			cout << "3. Python\n";
			cout << "4. Java\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 3){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input11;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input12:
			cout << "\nQuestion 3: Which language is mainly used for Android app development?\n";
			cout << "1. Kotlin\n";
			cout << "2. Ruby\n";
			cout << "3. PHP\n";
			cout << "4. Swift\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 1){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input12;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input13:
			cout << "\nQuestion 4: Which keyword is used for decision making\n";
			cout << "1. switch\n";
			cout << "2. if/else if\n";
			cout << "3. for loop\n";
			cout << "4. case\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 2){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input13;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			input14:
			cout << "\nQuestion 5: Which language is used for database queries\n";
			cout << "1.CSS\n";
			cout << "2.JavaScript\n";
			cout << "3. HTML\n";
			cout << "4. SQL\n";
			cout << "Which one is correct: ";cin >> correct;
			if(correct != 4){
				cout << "\nThe answer is not correct\n";
				cout << "Please Try again\n";
				goto input14;
			}
			else{
				cout << "\nThe answer is correct\n";
				cout << "Next Question\n";
			}
			break;
		}
	}
	goto input20;
}cout << "You Exit Quiz!";
	return 0;
}
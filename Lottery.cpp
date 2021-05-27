#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int lottery = rand() % 900 + 100;

	cout << "Enter your lottery pick (three digits): ";
	int guess = 0;
	cin >> guess;

	int lotteryDigit1 = lottery / 100;
	int lotteryDigit2 = lottery / 10 % 10;
	int lotteryDigit3 = lottery %10;

	int guessDigit1 = guess / 100;
	int guessDigit2 = guess /10 % 10;
	int guessDigit3 = guess / 10;
	cout << "The lottery number is " << lottery << endl;

	int counter;
	if(lotteryDigit1 == guessDigit1 && lotteryDigit2 == guessDigit2 && lotteryDigit3 == guessDigit3 ){
        cout << "Good job! Everything match. You won 10 000 dollars" << endl;
        return 0;
	}
	if(lotteryDigit1 == guessDigit1 or lotteryDigit1 == guessDigit2 or lotteryDigit1 == guessDigit3 ){
        counter ++;
	}if(lotteryDigit2 == guessDigit1 or lotteryDigit2 == guessDigit2 or lotteryDigit2 == guessDigit3 ){
        counter ++;
	}if(lotteryDigit2 == guessDigit1 or lotteryDigit3 == guessDigit2 or lotteryDigit3 == guessDigit3 ){
        counter ++;
	}

	if(counter == 3){
        cout <<"Good job! Everything match, but they are not on the same places. You won 3 000 dollars" << endl;
	}if(counter == 2){
        cout <<"Good job! 2 digits match. You won 2 000 dollars" << endl;
	}if(counter == 1){
        cout <<"Good job! 1 digit match. You won 1 000 dollars" << endl;
	}else{
        cout << "Nothing match" << endl;
	}

	return 0;
}

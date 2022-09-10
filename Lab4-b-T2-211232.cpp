#include <iostream>

using namespace std;
//program to check whether an alphabet is vowel or consonant
int main() 
{
	char alphabet; // declaring varialbe
	cout<<"\n\n\t\t\t      ALPHABET RECOGNIZER"<<endl<<endl; //title
	cout<<"              **************************************************";
	cout<<"\n\n\t\t\tPleae Enter Any Alphabet(A-Z): "; cin>>alphabet; //stores value from user
	switch (alphabet)
	{
		case 'A': //condition
			cout<<"\n\n\t\t\tThe Entered Alphabet is an \"VOWEL\"";
		break;
		case 'E': //condition
			cout<<"\n\n\t\t\tThe Entered Alphabet is an \"VOWEL\"";
		break;
		case 'I': //condition
			cout<<"\n\n\t\t\tThe Entered Alphabet is an \"VOWEL\"";
		break; 
		case 'O': //condition
			cout<<"\n\n\t\t\tThe Entered Alphabet is an \"VOWEL\"";
		break;
		case 'U': //condition
			cout<<"\n\n\t\t\tThe Entered Alphabet is an \"VOWEL\"";
		break;
		case 'a': //condition
			cout<<"\n\n\t\t\tThe Entered Alphabet is an \"VOWEL\"";
		break;
		case 'e':
			cout<<"\n\n\t\t\tThe Entered Alphabet is an \"VOWEL\"";
		break;
		case 'i': //condition
			cout<<"\n\n\t\t\tThe Entered Alphabet is an \"VOWEL\"";
		break;
		case 'o': //condition
			cout<<"The Entered Alphabet is an \"VOWEL\"";
		break;
		case 'u': //condition
			cout<<"\n\n\t\t\tThe Entered Alphabet is an \"VOWEL\"";
		break;
		default: //condition for wrong entry
			cout<<"\n\n\t\t\tThe Entere Alphabet is a \"CONSONANT\"";
		break;
	}
	return 0;
}

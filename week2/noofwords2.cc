#include <iostream>
using namespace std;

void print(char label[], int cnt){
    cout << label << ":" << cnt << endl;
}
bool isAlpha(char c)
{
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
	{
		return true;
	}
	return false;
}
bool isDigit(char c)
{
	if(c>='0' && c<='9')
	{
		return true;
	}
	return false;
}
bool isSpace(char c)
{
	if(c==' ')
	{
		return true;
	}
	return false;
}
bool isWhiteSpace(char c)
{
	if(c=='\t' || c=='\n')
	{
		return true;
	}
	return false;
}
void cntData(int& nChar, int& nDigits,int& nWords,int& nOther,int& nWhiteSpace,int& nSpace){
	char c = ' ';
	char prev = ' ';
    while(true){
    	cin.get(c);
    	if(c == '$')
        {
        	break;
        }
        if (isAlpha(c)){
            nChar++;
        }
        else if(isDigit(c))
        {
        	nDigits++;
        }
        else if(isSpace(c))
        {
        	nSpace++;
        }
        else if(isWhiteSpace(c))
        {
        	nWhiteSpace++;
        }
        else
        {
        	nOther++;
        }
        if((!isWhiteSpace(c) && !isSpace(c)) && (isSpace(prev) || isWhiteSpace(prev)))
        {
        	nWords++;
        }
        prev = c;
    }
}

int main(){
    int nChar = 0;
    int nWords = 0;
    int nOther = 0;
    int nWhiteSpace = 0;
    int nSpace = 0;
    int nDigits=0;
    cntData(nChar, nDigits , nWords, nOther, nWhiteSpace, nSpace);    

    print("nChar", nChar);
    print("nDigits", nDigits);
    print("nWords", nWords);
    print("nOther", nOther);
    print("nWhiteSpace", nWhiteSpace);
    print("nSpace", nSpace);
}
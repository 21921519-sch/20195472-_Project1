#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
	//문제 1
	/*
	int static vowel = 0;
	int static consonant = 0;
	char str;
	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;
	while(cin.eof() == false)
	{
		cin >> str;
		switch(str)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vowel++;
				break;
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				cout << "Check to alphabet" << endl;
				vowel++;
				break;
			default:
				consonant++;
				break;
		}
	}
	cout << "모음: " << vowel << endl;
	cout << "자음: " << consonant << endl;
	*/
	
	//문제 2
	
	int num1, num2, result, answer;
	char op;
	std::random_device rd;
	std::mt19937_64 mersenne(rd());
	std::uniform_int_distribution<> dice(1, 9);

	num1 = dice(mersenne);
	num2 = dice(mersenne);
	cout << "산수 문제를 자동으로 출제합니다." << endl;
	cout << num1 << " " << num2 << endl;
	cout << "연산자 입력하기(+, -, *, /)" << endl;
	cin >> op;
	switch (op)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 == 0)
		{
			cout << "분모가 0입니다. 나눗셈을 할 수 없습니다." << endl;
			result = 0;
			break;
		}
		result = num1 / num2;
		break;
	default:
		break;
	}
	cout << "결과 입력하기" << endl;
	cin >> answer;
	if(answer == result)
	{
		cout << "맞았습니다!" << endl;
	}
	else
	{
		cout << "틀렸습니다..." << endl;
	}
	
	
	//문제 3
	/*
	int n, m;
	int static result;
	cin >> n;
	cin >> m;
	cout << "N 값은 " << n << ", M 값은 " << m << endl;
	for(int i = 1; i <= n; i++)
	{
		if(i % m == 0)
		{
			result = result + i; 	
		} 
	}
	cout << result << endl;
	*/
	
	//문제 4
	/*
	int n, sum=1;

	cin >> n;
	cout << "1";

	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			cout << " + " << i;
			sum = sum + i;
		}
	}

	cout << " = " << sum << endl;
	*/

	//문제 5
	/*
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++)
	for (y = 0; y < 3; y++) board[x][y] = ' ';
 
	for (k = 0; k < 9; k++) 
	{
	cout << "(x, y) 좌표: ";
	cin >> x >> y;
	board[x][y] = (k % 2 == 0) ? 'X' : 'O';

	for (i = 0; i < 3; i++) 
	{
		cout << "---|---|---" << endl;
		cout << board[i][0] << "  | " << board[i][1] << " |  " << board[i][2] << endl;
	}
	cout << "---|---|---" << endl;
	

	return 0;
	*/

	//문제 6
	/*
	char board[3][3];
	int x, y, k, i;


	for (x = 0; x < 3; x++)
	for (y = 0; y < 3; y++) board[x][y] = ' ';


	for (k = 0; k < 9; k++) {
	cout << "(x, y) 좌표: ";
	cin >> x >> y;
	board[x][y] = (k % 2 == 0) ? 'X' : 'O';	// 현재의 순번에 따라 'X', 'O'중 선택

	// 보드를 화면에 그린다. 
	for (i = 0; i < 3; i++) {
		cout << "---|---|---" << endl;
		cout << board[i][0] << "  | " << board[i][1] << " |  " << board[i][2] << endl;
	}
	cout << "---|---|---" << endl;
	}

	return 0;
	*/
}

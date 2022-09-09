//지역변수를 참조형으로 반환하면 안된다. 함수가 끝나 지역변수가 사라지면 참조자가 지정하는 변수가 사라지기 떄문이다.

//const 선언을 한 변수는 참조자를 이용해도 변수에 변화를 줄 수 없다. 컴파일에러를 일으킨다.
//컴파일에러를 피하기 위해 참조자 역시 const 선언을 해야 한다.
//const int num=20;
//const int &ref=num;

//변수선언 없이 수치를 참조할 경우, 임시변수를 만든다.

#include<iostream>
using namespace std;

int main()
{
	const int* ptr;//포인터 역시 const 변수를 받으려면 const 선언을 해야 한다.
	const int num = 12;
	ptr = &num;//&변수는 변수의 주소를 나타내고(참조자 선언이 아닌 변수), ptr은 메모리 주소를 의미한다. *ptr은 주소에 있는 변수를 의미한다.
	const int*& ref = ptr;//포인터의 참조자는 포인터의 개수를 맞춘 뒤 &를 더한다.
	cout << *ref << endl;//포인터의 참조자 역시 포인터이기에, 출력하기 위해선 변수를 의미하는 *ref를 출력식에 넣어야 한다.
	return 0;
}
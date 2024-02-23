#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Вы хотели бы жить в общежитие? (1-да 2-нет)");
		cin >> k;
		switch (k)
		{
		case 2:puts("А где? 1-Снимать квартиру 2-Жить с родствениками 3-Жить на вокзале");
			cin >> k;
			switch (k) {
			case 1:puts("Неплохо, но без сожителей будет дорого."); break;
			case 2:puts("Тоже неплохо, но немного не комфортно."); break;
			case 3:puts("Наиболее правильный выбор, молодец!!!"); break;
			default: puts("Некорректный ответ"); break;
			} break;
		 
		case 1: puts("Дёшево и прикольно"); break;
		default: puts("Некорректный ответ"); break;
	}
return 0;
}
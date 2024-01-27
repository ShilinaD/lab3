#include "lab3.h"
#include "goalkeeper.h"
#include "defender.h"
#include "forward.h"


int main()
{
    setlocale(LC_ALL, "ru");
    //GOALKEEPER
    // 
    // Создание объекта вратаря и передача информации через конструктор
    Lab3::Goalkeeper goalkeeper("goalkeeper", 60, 5, 20, 15, 5);
    goalkeeper.DisplayInfo();

    //DEFENDER
    // Создание объекта защитника и передача информации через конструктор
    Lab3::Defender defender("defender", 60, 10);
    defender.DisplayInfo();

    //FORWARD
    // Создание объекта нападающего и передача информации через конструктор
    Lab3::Forward forward("forward", 80, 8, 25, 10, 0);
    forward.DisplayInfo();
    
	return 0;
}

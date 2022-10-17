// Peklova_LR_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "framework.h"
#include "Peklova_LR_2.h"
#include <iostream>
#include <fstream>
#include "Peklova_contclass.h"
#include "Peklova_serial.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Единственный объект приложения

CWinApp theApp;

using namespace std;

void menu()
{
    cout << "1.Ввести название фильма/сериала" << endl;
    cout << "2.Вывести список на экран" << endl;
    cout << "3.Cчитать список из файла" << endl;
    cout << "4.Вывести список в файл" << endl;
    cout << "5.Удалить список" << endl;
    cout << "6.Выход" << endl;
}

int main()
{
    int nRetCode = 0;

    HMODULE hModule = ::GetModuleHandle(nullptr);

    if (hModule != nullptr)
    {
        // инициализировать MFC, а также печать и сообщения об ошибках про сбое
        if (!AfxWinInit(hModule, nullptr, ::GetCommandLine(), 0))
        {
            // TODO: вставьте сюда код для приложения.
            wprintf(L"Критическая ошибка: сбой при инициализации MFC\n");
            nRetCode = 1;
        }
        else
        {
			setlocale(LC_ALL, "Russian");
			Peklova_contclass class_films;
			while (true)
			{
				menu();
				int command;
				cout << ": ";
				cin >> command;
				switch (command)
				{
				case 1:
				{
					class_films.input_films_by_console();
					break;
				}
				case 2:
				{
					class_films.show_films();
					system("Pause");
					break;
				}
				case 3:
				{
					class_films.load_from_file();
					system("pause");
					break;
				}
				case 4:
				{
					class_films.insert_into_file();
					system("pause");
					break;
				}
				case 5:
				{
					class_films.delete_films();
					system("pause");
					break;
				}
				case 6:
				{
					return 0;
				}
				}
			}
        }
    }
    else
    {
        // TODO: измените код ошибки в соответствии с потребностями
        wprintf(L"Критическая ошибка: сбой GetModuleHandle\n");
        nRetCode = 1;
    }

    return nRetCode;
}

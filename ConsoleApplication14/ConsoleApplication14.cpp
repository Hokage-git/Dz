#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    //Задание 1

    /*int number = 0;
    int arr[6];
    cout << "Ввдеите 6-и значное число:";
        cin >> number;
       
        arr[0] = number % 10;
        arr[1] = (number / 10) % 10;
        arr[2] = (number / 100) % 10;
        arr[3] = (number / 1000) % 10;
        arr[4] = (number / 10000) % 10;
        arr[5] = (number / 100000) % 10;

            if (number/10<1000||number/10>10000) {
                cout << "Error";
                return 0;
            }
        
        if ((arr[0] + arr[1] + arr[2]) == (arr[3] + arr[4] + arr[5])) {
            cout << "Congrats!" << endl;
        }
        else {
            cout << "Nope" << endl;
        }
    */

    //Задание 2

    /*int number = 0;
    int var = 0;
    int arr[4];

    cin >> number;
    if (number / 10 < 100||number/10>1000) {
        cout << "Error";
        return 0;
    }
    arr[0] = number % 10;
    arr[1] = (number / 10) % 10;
    arr[2] = (number / 100) % 10;
    arr[3] = (number / 1000) % 10;

    var = arr[0];
    arr[0] = arr[1];
    arr[1] = var;

    var = arr[2];
    arr[2] = arr[3];
    arr[3] = var;
    cout << endl;
    for (int i = 3; i > -1; i--)
        cout << arr[i];*/

    //Задача 3

    /*int arr[7];
    int var = 0;

    for (int i = 1; i < 8; i++) {
        cout << "Число " << i<<"-";
        cin >> arr[i-1];
    }

    for (int i = 0; i < 7; i++) {

        if (arr[i] > arr[i + 1]) {
            var = arr[i];
        }
    }
    cout << var;*/

    //Задача 4

    /*const int fuel = 300;
    int kg = 0;
    int km_AB = 0;
    int km_CB = 0;
    int ostatok = 0;
    int fuel2 = 0;
    int fuel1 = 0;

    cout << "Введите количество груза-"; cin >> kg;
    cout << "Введите расстояние из А в В-"; cin >> km_AB;
    cout << "Введите расстояние из B в C-"; cin >> km_CB;

    if (kg <= 500 && km_AB<=300 ) {
        ostatok = fuel-km_AB;
        fuel2 = fuel-ostatok;
        cout << "Нужно дозаправить-" << fuel2 << " Литров";
    }
    else if (kg <= 500 && km_AB >= 300) {
        cout << "Полёт не возможен";
    }
    
    if (kg <= 1000 && kg>500 && km_AB <= 75) {
        fuel1 = km_AB * 4;
        ostatok = fuel - fuel1;
        fuel2 = fuel - ostatok;
        cout << "Нужно дозаправить-" << fuel2 << " Литров";
    }
    else if (kg <= 1000 && kg > 500 && km_AB >= 75) {
        cout << "Полёт не возможен";
    }

    if (kg <= 1500 && kg > 1000 && kg > 500 && km_AB <= 42) {
        fuel1 = km_AB * 7;
        ostatok = fuel - fuel1;
        fuel2 = fuel - ostatok;
        cout << "Нужно дозаправить-" << fuel2 << " Литров";
    }
    else if (kg <= 1500 && kg > 1000 && kg > 500 && km_AB >= 42) {
        cout << "Полёт не возможен";
    }
   
    if (kg <= 2000 && kg > 1500 && kg > 1000 && kg > 500 && km_AB <= 33) {
        fuel1 = km_AB * 9;
        ostatok = fuel - fuel1;
        fuel2 = fuel - ostatok;
        cout << "Нужно дозаправить-" << fuel2 << " Литров";
    }
    if(kg>2000)
        cout << "Полёт не возможен";*/

//Задача 5

    /*int a=0, b=0, c=0, d=0, e=0, f=0, x=0, y = 0;

    cout << "\nВведите начальную дату через пробел :";
    cin >>a >> b >> c;
    cout << "\nВведите конечную дату через пробел :";
    cin >> d >> e >> f;

    int m1 = 31;
    int m2 = 28;
    int m3 = 31;
    int m4 = 30;
    int m5 = 31;
    int m6 = 30;
    int m7 = 31;
    int m8 = 31;
    int m9 = 30;
    int m10 = 31;
    int m11 = 30;
    int m12 = 31;

    if (b == 1) { x = a; }
        else if (b == 2) { x = m1 + a; }
        else if (b == 3) { x = m1 + m2 + a; }
        else if (b == 4) { x = m1 + m2 + m3 + a; }
        else if (b == 5) { x = m1 + m2 + m3 + m4 + a; }
        else if (b == 6) { x = m1 + m2 + m3 + m4 + m5 + a; }
        else if (b == 7) { x = m1 + m2 + m3 + m4 + m5 + m6 + a; }
        else if (b == 8) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + a; }
        else if (b == 9) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + a; }
        else if (b == 10) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + a; }
        else if (b == 11) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + a; }
        else if (b == 12) { x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + a; }

    if (e == 1) { y = d + y; }
        else if (e == 2) { y = m1 + d + y; }
        else if (e == 3) { y = m1 + m2 + d + y; }
        else if (e == 4) { y = m1 + m2 + m3 + d + y; }
        else if (e == 5) { y = m1 + m2 + m3 + m4 + d + y; }
        else if (e == 6) { y = m1 + m2 + m3 + m4 + m5 + d + y; }
        else if (e == 7) { y = m1 + m2 + m3 + m4 + m5 + m6 + d + y; }
        else if (e == 8) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + d + y; }
        else if (e == 9) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + d + y; }
        else if (e == 10) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + d + y; }
        else if (e == 11) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + d + y; }
        else if (e == 12) { y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + d + y; }
    if (c == f)
    {
        cout << "\nКоличество дней между этими двумя датами :" << y - x;
    }
    else
    cout << "\nКоличество дней между этими двумя датами :" << (f - c) * 365 + (y - x);*/

    int m[3] = { 200,200,200 };
    int work[3];
    for (int i = 1; i < 4; i++) {
        cout << "Введите заработок "<< i <<" менеджера-";
        cin >> work[i-1];
        if (work[i-1]<=500){
            m[i-1] += (work[i-1] / 100) * 3;
        }
        if (work[i - 1] > 500 && work[i-1]<=1000) {
            m[i-1] += (work[i-1] / 100) * 5;
        }
        if (work[i - 1] > 1000) {
            m[i-1] += (work[i-1] / 100) * 8;
        }
    }
    if (m[0] > m[1] && m[0] > m[2])
        m[0] += 200;
    if (m[1] > m[0] && m[1] > m[2])
        m[1] += 200;
    if (m[2] > m[0] && m[2] > m[1])
        m[2] += 200;

    for (int i = 1; i < 4; i++) {
        cout << "Зарплата " << i << " Менеджера=" << m[i - 1] << endl;
    }
}    


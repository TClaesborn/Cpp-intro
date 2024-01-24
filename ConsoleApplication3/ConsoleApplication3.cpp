//#include är en copy/paste. Den kopierar ett annat dokument med färdig kod.
#include <iostream> //Precompiler statements
#include <string>
#include <vector>

//c++ använder en single pass compiler. MSVC (MicroSoft Visual C).
//pga det kan vi inte definiera funktioner EFTER main.

//Deklarera funktionen
void addOne(int);
void addOneRef(int&); // & är en referens till en variabel.

typedef std::string string;

int main()
{
    //Variabler
    int tal1 = 100; // 4 byte
    float float1 = 3.f; // 4 byte
    double double1 = 3.2; // 8 byte
    long long long1 = 30214213423; // 8 byte
    short short1 = 3; //2 byte
    char char1 = 3; //1 byte
    char char2 = '3';
    bool bool1 = true; //1 bit (1 byte)
    string msg = "hello world";


    //addOne(tal1);
    //addOneRef(tal1);
    //std::cout << &tal1 << std::endl;

    //Pointer
    int* ptal1 = &tal1;
    std::cout << "tal1 är en int och har värdet: " << tal1 << " med adressen: " << &tal1 << std::endl;
    std::cout << ptal1 << " är adressen till tal 1 som har värdet: " << *ptal1 << std::endl;

    //Array (stack)
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << "\t" << &arr[i] << std::endl;
    }
    std::cin >> tal1;
    std::cout << "Heap memory" << std::endl;
    //Array (heap)
    int* heapArr = new int[5];
    for (int i = 0; i < 100; i++)
    {
        std::cout << heapArr[i] << "\t" << &heapArr[i] << std::endl;
    }
    //if, for, do, while, goto (don't use), switch.
    if (tal1) //är värdet 0 eller inte. Om 0 så false. Om något annat så true.
    {
    }
    if (tal1 != 0)
    {
    }
    printf("Hello World" + tal1);
    std::vector<int> v1;
    v1.push_back(3);
    

}

//funktioner
void addOne(int a) //Definition av funktion
{
    a++;
    std::cout << &a << std::endl;
}

void addOneRef(int& a)
{
    a++;
    std::cout << &a << std::endl;
}

void addOnePointer(int* a)
{
    *a++;
}
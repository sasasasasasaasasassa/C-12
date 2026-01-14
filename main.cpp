// #include <iostream>
// #include <thread>
// #include <unistd.h>
// using namespace std;
//
// void PrintN() {
//     for (int i = 0;i <= 100; i++) {
//         cout << "Num: " << i << endl;
//     }
//     sleep(200);
// }
//
// void PrintL() {
//     for (char c = 'A'; c <= 'Z'; c++) {
//         cout << "L: " << c << endl;
//     }
//     sleep(500);
// }
//
//
// int main() {
//     setlocale(0, "ru");
//
//     thread t1(PrintN);
//     thread t2(PrintL);
//
//     t1.join();
//     t2.join();
//
//     cout << "finith" << endl;
//     return 0;
// }


// #include <iostream>
// #include <thread>
// #include <fstream>
// using namespace std;
//
// void inN() {
//     ofstream out("numbers.txt");
//     if (out.is_open()) {
//         for (int i = 1; i <= 10; i++) {
//             out << i << endl;
//         }
//     }
//     out.close();
// }
//
// void inL() {
//     ofstream out("letters.txt");
//     if (out.is_open()) {
//         for (char c = 'A'; c <= 'J'; c++) {
//             out << c << endl;
//         }
//     }
//     out.close();
// }
//
// void readNumbers() {
//     ifstream in("numbers.txt");
//     int x;
//     while (in >> x) {
//         cout << x << " ";
//
//     }
//     cout << endl;
//     in.close();
// }
//
// void readLetters() {
//     ifstream in("letters.txt");
//     char c;
//     while (in >> c) {
//         cout << c << " ";
//     }
//     cout << endl;
//     in.close();
// }
//
// int main() {
//     setlocale(0, "ru");
//
//     inN();
//     inL();
//
//     thread t1(readNumbers);
//     thread t2(readLetters);
//
//     t1.join();
//     t2.join();
//
//     cout << "Чтение завершено." << endl;
//     return 0;
// }

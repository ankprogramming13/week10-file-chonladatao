#include <iostream> //ผูกไฟล์
#include <fstream>
using namespace std;


int main() {
    ofstream myfile ("example.txt"); //ประกาศออปเจ็ก โดยการผูกเข้ากับ myfile และ ไฟล์ example.txt //
    if (myfile.is_open()) // เช็กว่าเปิดได้หรือไม่//
    {
        myfile << "This is a line.\n";// การเขียนข้อมูลไปที่ myfile ลงในไฟล์ example.txt //
        myfile << "This is another line.\n"; //เขียนข้อมูลใน myfile ว่า This is another line และการขึ้นบรรทัดใหม่//
        myfile.close(); //ปิดไฟล์//
    }
    else cout << "Unable to open file";

        return 0; //จบโปรแกรม//
}

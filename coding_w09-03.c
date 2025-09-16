#include <stdio.h>

int main() {
    int i = 1;

    // ใช้ do-while loop ซึ่งทำก่อนตรวจสอบเงื่อนไข
    do {
        if (i == 6) {
            i++;          // เพิ่มค่า i ก่อน continue
            continue;     // ข้ามรอบที่ i เท่ากับ 6
        }
        printf("%d ", i); // แสดงค่าของ i
        i++;              // เพิ่มค่า i หลังพิมพ์
    } while (i <= 10);    // เงื่อนไขให้ทำจนกว่า i > 10

    return 0;
}
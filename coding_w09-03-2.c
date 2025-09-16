#include <stdio.h>

int main() {
    int i = 1;

    // ใช้ while loop นับจาก 1 ถึง 10
    while (i <= 10) {
        if (i == 6) {
            i++;          // เพิ่มค่าก่อน continue เพื่อไม่ให้วนลูปค้างที่ 6
            continue;     // ข้ามรอบที่ i เท่ากับ 6
        }
        printf("%d ", i); // แสดงค่าของ i
        i++;              // เพิ่มค่า i ทุกครั้งหลังพิมพ์
    }

    return 0;
}
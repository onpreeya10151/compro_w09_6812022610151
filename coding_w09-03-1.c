#include <stdio.h>

int main() {
    int i;

    // ใช้ for loop นับจาก 1 ถึง 10
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            continue; // ข้ามรอบที่ i เท่ากับ 6
        }
        printf("%d ", i); // แสดงค่าของ i
    }

    return 0;
}
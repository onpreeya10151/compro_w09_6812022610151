#include <stdio.h>
int main() {
    int start, stop;                                                       
    while (1) {                                                                      // วนลูปรับค่าจนกว่า start < stop
        
        printf("Enter start number: ");                                              // แจ้งให้ผู้ใช้กรอกค่าเริ่มต้น  
        scanf("%d", &start);                                                         // รับค่าเริ่มต้นจากผู้ใช้

    
        printf("Enter stop number: ");                                                // แจ้งให้ผู้ใช้กรอกค่าจนสุด                 
        scanf("%d", &stop);                                                           // รับค่าจนสุดจากผู้ใช้   

        if (start < stop) {                                                           // ตรวจสอบว่า start < stop หรือไม่
            // กรณีถูกต้อง ทำงานตามปกติ
            printf("Start number is %d and stop number is %d\n", start, stop);
            printf("--------------------\n");
            printf("Sequence from start to stop: ");
            // แสดงลำดับตัวเลขจาก start ไปถึง stop
            for (int i = start; i <= stop; i++) {
                printf("%d ", i);
            }
            printf("\nThank you.\n");
            break; // ออกจากลูปเมื่อทำสำเร็จ
        }
        else if (start == stop) {                              // กรณีค่าเท่ากัน แจ้งเตือนและวนรับค่าใหม่
            printf("Your Start number is equal to Stop number, please try again!\n\n");
        }
        else {                                                // กรณี start > stop แจ้งเตือนและวนรับค่าใหม่
            printf("Your Start number is greater than Stop number, please try again!\n\n");
        }
    }

    return 0;
}
#include <stdio.h>
int main() {
    int i;
    float Math[3] ,Physics[3], Chemistry[3] ;
for(i=0;i<3;i++){
    printf("Enter score for students %d: \n",i+1);
    printf("Math: ");
    scanf("%f", & Math[i]);
    printf("Physics:");
    scanf("%f", &Physics[i]);
    printf("Chemistry: ");
    scanf("%f", &Chemistry[i]);
} printf("\n");
    printf("Score table:\n");
    printf("student\tMath\tPhysics\tChemistry\n");
for(i=0;i<3;i++){
    printf("%d\t%.2F\t%.2f\t%.2f\n",i+1, Math[i],Physics[i],Chemistry[i]);
}
    float M=( Math[0]+ Math[1]+ Math[2])/3;
    float p=(Physics[0]+Physics[1]+Physics[2])/3;
    float c=(Chemistry[0]+Chemistry[1]+Chemistry[2])/3;
printf("\n");
    printf("Average per subject:\n");
    printf("Math: %.2f\n",M);
    printf("Physics: %.2f\n",p);
    printf("Chemistry: %.2f\n",c);
return 0;
}
/*
บรรทัดที่ 3 ประกาศตัวแปร int เก็บเลขจำนวนเต็ม
บรรทัดที่ 4 ประกาศตัวแปร float เก็บจำนวนจุดทศนิยม
บรรทัดที่ 5 ลูปจะทำงานเมื่อi<3จะหยุดทำงานเมื่อi>3
บรรทัดที่ 6 แสดงข้อความให้ผู้ใช้กรอกคะแนนคนที่ i+1
บรรทัดที่ 7 แสดงข้อความ
บรรทัดที่ 8 รับค่า Math ของคนปัจจุบัน
บรรทัดที่ 9 แสดงข้อค้วาม
บรรทัดที่ 10 รับค่า Physics ของคนปัจจุบัน
บรรทัดที่ 11 แสดงข้อความ
บรรทัดที่ 12 รับค่า Chemistry ของคนปัจจุบัน
บรรทัดที่ 14 แสดงข้อความ
บรรทัดที่ 15 แสดงข้อความ
บรรทัดที่ 16 ลูปจะทำงานเมื่อi<3จะหยุดทำงานเมื่อi>3
บรรทัดที่ 17 แสดงผลคะแนนของนักเรียนคนที่i+1
บรรทัดที่ 19 คำนวณค่าเฉลี่ยของคะแนนวิชาคณิตศาสตร์
บรรทัดที่ 20 คำนวณค่าเฉลี่ยของคะแนนวิชาฟิสิกส์
บรรทัดที่ 21 คำนวณค่าเฉลี่ยของคะแนนวิชาเคมี
บรรทัดที่ 23 แสดงข้อความ
บรรทัดที่ 24 แสดงค่าเฉลี่ยของคะแนนวิชาคณิตศาสตร์
บรรทัดที่ 25 แสดงค่าเฉลี่ยของคะแนนวิชาฟิสิกส์
บรรทัดที่ 26 แสดงค่าเฉลี่ยของคะแนนวิชาเคมี
บรรทัดที่ 27 จบการทำงานของโปรแกรม
*/
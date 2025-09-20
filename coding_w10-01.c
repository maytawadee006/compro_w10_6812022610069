#include<stdio.h>
int main(){
    int score=1;
    int endscore,student,sum=0;
    printf("Enter number of students:");
    scanf("%d",&endscore);
    printf("enter %d student scores (one per line):\n",endscore);
while (score<=endscore)
    {
    printf("score%d:",score);
    scanf("%d",&student);
    sum+=student;
    score++;
    }
    printf("Number of students = %d\n", endscore);
    printf("Average score = %.2f\n", (float) sum / endscore);
return 0;
}
/*
บรรทัดที่ 3 ประกาศตัวแปร score=1
บรรทัดที่ 4 ประกาศตัวแปร 
บรรทัดที่ 5 แสดงผลลัพธ์
บรรทัดที่ 6 รับค่าที่ผู้ใช้กรอก
บรรทัดที่ 7 แสดงผลลัพธ์
บรรทัดที่ 8 ลูปทำงานเมื่่อ score<=endscore เป็นจริงหยุดเมื่อเงื่อนไขเป็นเท็จ
บรรทัดที่ 10 แสดงผลลัพธ์
บรรทัดที่ 11 ตรวจสอบค่า
บรรทัดที่ 12 ค่าของsum+=student
บรรทัดที่ 13 score เพิ่มขึ้นทีละ 1
บรรทัดที่ 15 แสดงงผลลัพธ์
บรรทัดที่ 16 แสดงงผลลัพธ์
บรรทัดที่ 17 จบการทำงานของโปรแกรม
*/
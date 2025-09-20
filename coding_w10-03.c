#include <stdio.h>
#include <string.h>
int main(){
    char name[30],names[30];
    printf("Enter name of customer 1:");
    scanf("%s",name);
    printf("Enter name of customer 2:");
    scanf("%s",names);
if(strcmp(name,names)!=0){
    int length=strlen(name);
    int length1=strlen(names);
    printf("Customer 1:%s(%d characters)\n",name, length);
    printf("Customer 2:%s(%d characters)\n",names,length1);
}else {
    int length=strlen(name);
    printf("Both of your names are the same,which is %s.\n",name);
    printf("the length of the name is %d characters\n", length);
}
return 0;
}
/*
บรรทัดที่ 4 ประกาศตัวแปร แต่ละตัวมีขนาด30
บรรทัดที่ 5 แสดงข้อความให้ผู้ใช้กรอกชื่อคนที่1
บรรทัดที่ 6 รับค่าจากผู้ใช้
บรรทัดที่ 7 แสดงข้อความให้ผู้ใช้กรอกชื่อคนที่2
บรรทัดที่ 8 รับค่าจากผู้ใช้
บรรทัดที่ 9 ตรวจสอบว่า name,namesไม่เท่ากัน
บรรทัดที่ 10 ใช้ strlen หาความยาวชื่อคนที่1
บรรทัดที่ 11 ใช้ strlen หาความยาวชื่อคนที่2
บรรทัดที่ 12 แสดงผลลัพธ์
บรรทัดที่ 13 แสดงผลลัพธ์
บรรทัดที่ 14 ถ้า  name,names เท่ากัน
บรรทัดที่ 15 ใช้ strlen หาความยาวชื่อ
บรรทัดที่ 16 แสดงผลลัพธ์
บรรทัดที่ 17 แสดงผลลัพธ์
บรรทัดที่ 19 จบการทำงานของโปรแกรม
*/
#include<stdio.h>

int main() {
    float principal, rate, time, interest, totalAmount;

    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &principal);
    printf("Nhap lai suat nam: ");
    scanf("%f", &rate);
    rate = rate / 12 / 100;
    printf("Nhap so thang gui: ");
    scanf("%f", &time);
    interest = principal * rate * time;
    totalAmount = principal + interest;
    printf("So tien lai là: %.2f\n", interest);
    printf("Tong so tien nhan duoc sau %d thang la: %.2f\n", (int)time, totalAmount);

    return 0;
}
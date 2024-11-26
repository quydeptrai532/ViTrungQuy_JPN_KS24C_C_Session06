#include <stdio.h>

int main() {
    int a, b, c;
    float x, x1, delta;

    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vao so b: ");
    scanf("%d", &b);
    printf("Nhap vao so c: ");
    scanf("%d", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            x = -(float)c / b;
            printf("Phuong trinh co nghiem la: %f\n", x);
        }
    } else {
        delta = (b * b) - (4 * a * c);
        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            x = -b / (2.0 * a);
            printf("Phuong trinh co nghiem kep x1 = x2 = %f\n", x);
        } else {
            
            float sqrt_delta = delta / 2.0; 
            float epsilon = 0.00001;       
            while ((sqrt_delta * sqrt_delta - delta > epsilon) || 
                   (delta - sqrt_delta * sqrt_delta > epsilon)) {
                sqrt_delta = (sqrt_delta + delta / sqrt_delta) / 2.0;
            }

            x = (-b + sqrt_delta) / (2.0 * a);
            x1 = (-b - sqrt_delta) / (2.0 * a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %f, x2 = %f\n", x, x1);
        }
    }

    return 0;
}

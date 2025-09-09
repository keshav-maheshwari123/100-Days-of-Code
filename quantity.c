#include <stdio.h>
#include <math.h>

int main() {
    double dr, sc, hc;
    double EOQ, TBO;

    printf("Enter demand rate (dr): ");
    scanf("%lf", &dr);
    printf("Enter setup cost (sc): ");
    scanf("%lf", &sc);
    printf("Enter holding cost (hc): ");
    scanf("%lf", &hc);

    EOQ = sqrt((2 * dr * sc) / hc);
    TBO = sqrt((2 * sc) / (dr * hc));

    printf("Economic Order Quantity (EOQ): %.4lf\n", EOQ);
    printf("Time Between Orders (TBO): %.4lf\n", TBO);

    return 0;
}
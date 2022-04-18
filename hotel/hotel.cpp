#include <stdio.h>
#include <stdlib.h>

#include <iostream>
using namespace std;

struct Hotel {
    // variabels
    int age = 0;
    int weight = 0;
    int billage = 0;
    int billweight = 0;
    int total = 0;

    // pointers
    int* p_age = &age;
    int* p_weight = &weight;
    int* p_billage = &billage;
    int* p_billweight = &billweight;
    int* p_total = &total;

    // functions
    void set_age() {
        printf("Enter the age:");
        scanf("%d", &age);
    }

    void set_weight() {
        printf("Enter the luggages weight:");
        scanf("%d", &weight);
    }

    void check_conditions() {
        set_age();
        set_weight();

        if (*p_age <= 0) {
            printf("invaild Age");
            exit(-1);
        }

        else if ((*p_age >= 1 && *p_age <= 9) || *p_age == 60) {
            *p_billage = 0;
        }

        else if (*p_age >= 10 && *p_age <= 20) {
            *p_billage = 20;
        }

        else if (*p_age > 20 && *p_age < 60) {
            *p_billage = 30;
        }

        else {
            *p_billage = 50;
        }

        if (*p_weight > 20) {
            *p_billweight = 20;
        }

        else {
            *p_billweight = *p_weight;
        }

        *p_total = *p_billage + *p_billweight;
    }

    void show_bill() {
        printf("\n\nReceipt\n");
        printf("Room Ticket %d$\n", *p_billage);
        printf("Extra Weight %d$\n", *p_billweight);
        printf("your total bill is %d$\n", *p_total);
    }
};

// main function
int main() {
    Hotel h;
    h.check_conditions();
    h.show_bill();
    system("pause");
    return 0;
}
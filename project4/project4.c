#include <stdio.h>
#include <string.h>

struct student {
    char first[50];
    char last[50];
    char major[50];
    char city[50];
    char state[50];
    char zip[20];
    char phone[30];
    char email[50];
};

void display(struct student s);

int main() {
    struct student s1;

char choice;

while (1) {

    printf("First name: ");
    scanf(" %[^\n]%*c", s1.first);

    printf("Last name: ");
    scanf(" %[^\n]%*c", s1.last);

    printf("Major: ");
    scanf(" %[^\n]%*c", s1.major);

    printf("City: ");
    scanf(" %[^\n]%*c", s1.city);

    printf("State: ");
    scanf(" %[^\n]%*c", s1.state);

    printf("Zip: ");
    scanf(" %[^\n]%*c", s1.zip);

    printf("Phone: ");
    scanf(" %[^\n]%*c", s1.phone);

    printf("Email: ");
    scanf(" %[^\n]%*c", s1.email);

    display(s1);

    printf("\nEnter Q to quit, or press Enter to add another: ");
    choice = getchar();
    if (choice == 'Q' || choice == 'q') break;
}



    return 0;
}

void display(struct student s) {
    printf("\n--- Student Info ---\n");
    printf("First: %s\n", s.first);
    printf("Last: %s\n", s.last);
    printf("Major: %s\n", s.major);
    printf("City: %s\n", s.city);
    printf("State: %s\n", s.state);
    printf("Zip: %s\n", s.zip);
    printf("Phone: %s\n", s.phone);
    printf("Email: %s\n", s.email);
}

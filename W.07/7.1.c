#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int salary;
    int bonus;
    int deductions;
};
int main() {
    struct Employee mohsen, maged, mariam;
    printf("Enter salary, bonus and deductions for Mohsen:\n");
    printf("Salary: ");
    scanf("%d", &mohsen.salary);
    printf("Bonus: ");
    scanf("%d", &mohsen.bonus);
    printf("Deductions: ");
    scanf("%d", &mohsen.deductions);

    printf("\nEnter salary, bonus and deductions for Maged:\n");
    printf("Salary: ");
    scanf("%d", &maged.salary);
    printf("Bonus: ");
    scanf("%d", &maged.bonus);
    printf("Deductions: ");
    scanf("%d", &maged.deductions);

    printf("\nEnter salary, bonus and deductions for Mariam:\n");
    printf("Salary: ");
    scanf("%d", &mariam.salary);
    printf("Bonus: ");
    scanf("%d", &mariam.bonus);
    printf("Deductions: ");
    scanf("%d", &mariam.deductions);
    int total_salary = mohsen.salary + maged.salary + mariam.salary;
    int total_bonus = mohsen.bonus + maged.bonus + mariam.bonus;
    int total_deductions = mohsen.deductions + maged.deductions + mariam.deductions;
    printf("\n--- Finance Summary ---\n");
    printf("Total Salaries: %d\n", total_salary);
    printf("Total Bonuses: %d\n", total_bonus);
    printf("Total Deductions: %d\n", total_deductions);

    return 0;
}

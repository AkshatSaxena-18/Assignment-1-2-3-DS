#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 50

struct Employee {
    int empno;
    char empname[MAX_NAME_LENGTH];
};

void bubbleSort(struct Employee arr[], int n) {
    int i, j;
    struct Employee temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(strcmp(arr[j].empname, arr[j+1].empname) > 0) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    FILE *fp;
    struct Employee employees[MAX_EMPLOYEES];
    int i = 0;

    fp = fopen("employee.txt", "r");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while(fscanf(fp, "%d %s", &employees[i].empno, employees[i].empname) != EOF) {
        i++;
    }

    fclose(fp);

    bubbleSort(employees, i);

    printf("Sorted Employees list:\n");
    for(int j = 0; j < i; j++) {
        printf("%d %s\n", employees[j].empno, employees[j].empname);
    }

    return 0;
}


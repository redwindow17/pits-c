 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include <stdlib.h>

struct record_em{
    int id;
    char name[20];
    int salary;
    int age;
};

int main( void )
{
    struct record_em employee;
    FILE *fp;
    int n;
    int ch;
    fp = fopen("empRecord.dat","rb+");

    printf("Enter Id Number:\n");
    scanf("%d",&n);
    rewind(fp);
    while (!feof(fp)){

        fscanf(fp,"%d %s %d %d", &employee.id, employee.name, &employee.salary, &employee.age);

        if (employee.id==n){
            printf("%d %s %d %d \n",employee.id, employee.name, employee.salary,employee.age);
            printf("\n Do you want to change the name ?\n");
            scanf("%d",&ch);

            if (ch==1){
                printf("Enter new name:\n");
                scanf("%s",employee.name);
            }
            printf("\n Do you want to change the salary ?(y/n)\n");
            scanf("%d",&ch);

            if ( ch==2 ){
                printf("Enter new salary:\n");
                scanf("%d",&employee.salary);
            }
            printf("\n Do you want to change the age ?(y/n)\n");
            scanf("%d",&ch);

            if ( ch==3 ){
                printf("Enter new age:\n");
                scanf("%d",&employee.age);
            }
            fseek(fp,-sizeof(employee),SEEK_CUR);
            fprintf(fp, "%d %s %d %d\n", employee.id, employee.name, employee.salary, employee.age);
            exit(0);
        }
    }
    printf("Record Not Found \n");
    return 0;
}

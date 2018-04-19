#include <string.h>
#include <stdio.h>


 /* Create a personal ID registers
 * You should store the following data in a structure, called "person":
 * - the name of the person (which is shorter than 256 characters)
 * - the year of the birth (1990)
 * - the type of the highest qualification (as a custom type, see below)
 *
 * You should store the qualification type in an enumeration ("qualification"),
 * the valid types are:
 *  - elementary-school
 *  - high-school
 *  - bsc-degree
 *  - master-degree
 *  - phd
 *
 * The "person" -s are stored in an array.
 *
 * Implement the following functions:
 * - get_oldest_alive()
 *    - it should return the age of the oldest person
 * - get_qualification_count()
 *    - it returns the count of persons which has "quali" qualification
 * For both functions you have to add the needed parameters!
 * You don't need to implement a function, which initializes the persons, just do it manually from main(). E.g. initialize your persons in main() with 4 elements in order to be able to test your 2 implemented functions if it works correctly.
 */
 typedef enum {
    elementary_school,
    high_school,
    bsc_degree,
    master_degree,
    phd
}qualification ;
typedef struct{
    char name [256];
    int year_of_birth;
    qualification q;
}person;

int main() {

    person Magda ;
    person Gaben ;
    person Rezso ;
    person Rozi ;

    strcpy(&Magda.name,"Kovácsné Réti Magdolna");
    strcpy(&Gaben.name,"Turbók Gábor");
    strcpy(,&Rezso.name,"Rezso Béla");
    strcpy(&Rozi.name,"Nagy Rozi");

    Magda.year_of_birth = 1980;
    Gaben.year_of_birth = 1990;
    Rezso.year_of_birth = 1985;
    Rozi.year_of_birth = 1993;
    Magda.q = 1;
    Gaben.q = 1;
    Rezso.q = 1;
    Rozi.q = 2;

    person persons[4];

    persons[0] = Magda;
    persons[1] = Gaben;
    persons[2] = Rezso;
    persons[3] = Rozi;

    person* personpt= &persons;
    printf("%d\n", get_oldest_alive(persons,4));
    printf("%d\n", get_qualification_count(personpt,4));
    return 0;
}

int get_oldest_alive(person persons[],int len)
{
    int oldest = 0;
    printf("%d\n",persons[0].year_of_birth);
    for (int i=0; i<len ;i++){

        if (2018-persons[i].year_of_birth > oldest){
            oldest = 2018-(persons[i].year_of_birth);
        }
    }
    return oldest;
}

int get_qualification_count(person persons[],int len)
{
    int cnt = 0;
     for (int i=0; i<len ;i++){
         if(persons[i].q == 1)
         {
            cnt++;
         }
     }
    return cnt;
}

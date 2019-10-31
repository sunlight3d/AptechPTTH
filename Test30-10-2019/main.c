#include "stdio.h"
struct Result
{
    float math;
    float physics;
    float chemistry;
};
struct Student {
    char name[25];
    char province[25];
    int birth_year;
    struct Result mark;
    //struct Result* mark;
};
void display() {
    //((student+i)->mark)->physics
    ((student+i)->mark).physics
}
int main() {

}

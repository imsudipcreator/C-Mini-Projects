#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

#define MAX_TASKS 10

const int BAR_LENGTH = 50;

typedef struct {
    int id;
    int step;
    int progress;
} Task;

void progress_bar(Task task);
void clear_screen();

int main()
{
    Task tasks[MAX_TASKS];
    srand(time(NULL));

    for(int i = 0; i < MAX_TASKS; i++){
        tasks[i].id = i;
        tasks[i].step = rand() % 5 + 10;
        tasks[i].progress = 0;
    }

    int tasks_incomplete = 1;
    while(tasks_incomplete){
        tasks_incomplete = 0;
        clear_screen();
        for(int i = 0; i < MAX_TASKS; i++){
            tasks[i].progress += tasks[i].step;
            if(tasks[i].progress > 100){
                tasks[i].progress = 100;
            }else if(tasks[i].progress < 100){
                tasks_incomplete = 1;
            }
            progress_bar(tasks[i]);
        }

        Sleep(1000);
    }

    printf("\n\nAll tasks completed!\n");
    return 0;
}

void progress_bar(Task task)
{
    int bars = (task.progress / 100.0) * BAR_LENGTH;
    printf("\nTask %d: [", task.id);
    for (int i = 0; i < BAR_LENGTH; i++)
    {
       if(i < bars){
        printf("=");
       }else{
        printf(" ");
       }
    }
    printf("] %d%%", task.progress);
}

void clear_screen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
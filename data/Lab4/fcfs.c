// WAP to implement the First Come First Serve (FCFS) scheduling algorithm.
#include <stdio.h>

struct Process
{
    int id, arrival, burst, turnaround, waiting, finish;
};

void sortProcesses(struct Process processes[], int n, int flag)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (flag == 0)
            {
                if (processes[j].id > processes[j + 1].id)
                {
                    struct Process temp = processes[j];
                    processes[j] = processes[j + 1];
                    processes[j + 1] = temp;
                }
            }
            else if (flag == 1)
            {
                if (processes[j].arrival > processes[j + 1].arrival)
                {
                    struct Process temp = processes[j];
                    processes[j] = processes[j + 1];
                    processes[j + 1] = temp;
                }
            }
}

void calculateTimes(struct Process processes[], int n)
{
    for (int i = 0; i < n; i++)
        if (i == 0)
        {
            processes[i].turnaround = processes[i].burst;
            processes[i].waiting = 0;
            processes[i].finish = processes[i].burst;
        }
        else
        {
            processes[i].finish = processes[i - 1].finish + processes[i].burst;
            processes[i].turnaround = processes[i].finish - processes[i].arrival;
            processes[i].waiting = processes[i].turnaround - processes[i].burst;
        }
}

void displayTimes(struct Process processes[], int n)
{
    int total_turnaround = 0, total_waiting = 0;
    printf("Process ID\tArrival Time\tBurst Time\tFinish Time\tTurnaround Time\tWaiting Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].id, processes[i].arrival, processes[i].burst, processes[i].finish, processes[i].turnaround, processes[i].waiting);
        total_turnaround += processes[i].turnaround;
        total_waiting += processes[i].waiting;
    }
    printf("Average Turnaround Time: %.2f\n", (float)total_turnaround / n);
    printf("Average Waiting Time: %.2f\n", (float)total_waiting / n);
}

int main()
{
    printf("Name: Kumar Priyanshu\tRoll No. 22053178\n");
    int n;
    printf("Enter the number of processes : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid number of processes\n");
        return 1;
    }
    struct Process processes[n];
    for (int i = 0; i < n; i++)
    {
        processes[i].id = i;
        printf("Process %d : ", i);
        scanf("%d %d", &processes[i].arrival, &processes[i].burst);
    }
    sortProcesses(processes, n, 1);
    calculateTimes(processes, n);
    sortProcesses(processes, n, 0);
    displayTimes(processes, n);
    return 0;
}
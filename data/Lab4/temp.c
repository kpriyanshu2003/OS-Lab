#include <stdio.h>

struct Process
{
    int id, arrival_time, burst_time, finish_time, turnaround_time, waiting_time, processed;
};

void calculateTime(struct Process processes[], int n)
{
    int total_time = 0;
    int shortest_job_index;
    int completed = 0;

    while (completed != n)
    {
        shortest_job_index = -1;
        int shortest_time = 9999;

        for (int i = 0; i < n; i++)
            if (processes[i].arrival_time <= total_time && !processes[i].processed && processes[i].burst_time < shortest_time)
            {
                shortest_job_index = i;
                shortest_time = processes[i].burst_time;
            }

        if (shortest_job_index == -1)
        {
            total_time++;
            continue;
        }

        processes[shortest_job_index].finish_time = total_time + processes[shortest_job_index].burst_time;
        processes[shortest_job_index].turnaround_time = processes[shortest_job_index].finish_time - processes[shortest_job_index].arrival_time;
        processes[shortest_job_index].waiting_time = processes[shortest_job_index].turnaround_time - processes[shortest_job_index].burst_time;
        processes[shortest_job_index].processed = 1;
        total_time = processes[shortest_job_index].finish_time;
        completed++;
    }
}

void displayTime(struct Process processes[], int n)
{
    int total_turnaround = 0, total_waiting = 0;
    printf("Process\tArrival Time\tBurst Time\tFinish Time\tTurnaround Time\tWaiting Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, processes[i].arrival_time, processes[i].burst_time, processes[i].finish_time, processes[i].turnaround_time, processes[i].waiting_time);
        total_turnaround += processes[i].turnaround_time;
        total_waiting += processes[i].waiting_time;
    }
    printf("Average Turnaround Time: %.2f\n", (float)total_turnaround / n);
    printf("Average Waiting Time: %.2f\n", (float)total_waiting / n);
}

int main()
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process processes[n];
    for (int i = 0; i < n; i++)
    {
        processes[i].id = i;
        printf("Process %d: ", i);
        scanf("%d %d", &processes[i].arrival_time, &processes[i].burst_time);
        processes[i].processed = 0;
    }
    calculateTime(processes, n);
    displayTime(processes, n);
    return 0;
}

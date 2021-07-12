// write a structure capable of storing date and time.
// write a function to compare those date and time.
#include<stdio.h>
typedef struct dateTime{
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;
}dt;

int display(dt Tstamp[]){
    if (Tstamp[0].year > Tstamp[1].year || Tstamp[0].year < Tstamp[1].year)
    {
        if (Tstamp[0].year > Tstamp[1].year)
        {
            return 0;
        }
        else{
            return 1;
        }
    }
    else if (Tstamp[0].month > Tstamp[1].month || Tstamp[0].month < Tstamp[1].month)
    {
        if (Tstamp[0].month > Tstamp[1].month)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (Tstamp[0].day > Tstamp[1].day || Tstamp[0].day < Tstamp[1].day)
    {
        if (Tstamp[0].day > Tstamp[1].day)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (Tstamp[0].hour > Tstamp[1].hour || Tstamp[0].hour < Tstamp[1].hour)
    {
        if (Tstamp[0].hour > Tstamp[1].hour)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (Tstamp[0].minute > Tstamp[1].minute || Tstamp[0].minute < Tstamp[1].minute)
    {
        if (Tstamp[0].minute > Tstamp[1].minute)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (Tstamp[0].second > Tstamp[1].second || Tstamp[0].second < Tstamp[1].second)
    {
        if (Tstamp[0].second > Tstamp[1].second)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else{
        return -1;
    }

}

int main(){
    dt Tstamp[2];
    dt* ptr = &Tstamp[0];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the %dst Date and Time:\n", i+1);
        a:
        printf("Day: ");
        scanf("%d", &ptr->day);
        if (ptr->day > 31)
        {
            printf("Don't press wrong number!\n");
            goto a;
        }

        b:
        printf("Month: ");
        scanf("%d", &ptr->month);
        if (ptr->month > 12)
        {
            printf("Don't press wrong number!\n");
            goto b;
        }
        
        printf("Year: ");
        scanf("%d", &ptr->year);

        c:
        printf("Second: ");
        scanf("%d", &ptr->second);
        if (ptr->second > 60)
        {
            printf("Don't press wrong number!\n");
            goto c;
        }
        
        d:
        printf("Minute: ");
        scanf("%d", &ptr->minute);
        if (ptr->minute > 60)
        {
            printf("Don't press wrong number!\n");
            goto d;
        }
        
        e:
        printf("Hour: ");
        scanf("%d", &ptr->hour);
        if (ptr->hour > 24)
        {
            printf("Don't press wrong number!\n");
            goto e;
        }
        ptr++;
    }

    int a = display(Tstamp);
    printf("*********************\n");
    if (a == 0)
    {
        printf("%d/%d/%d %d:%d:%d is greater than %d/%d/%d %d:%d:%d\n", Tstamp[0].day, Tstamp[0].month, Tstamp[0].year, Tstamp[0].hour, Tstamp[0].minute, Tstamp[0].second, Tstamp[1].day, Tstamp[1].month, Tstamp[1].year, Tstamp[1].hour, Tstamp[1].minute, Tstamp[1].second);
    }
    else if (a == 1)
    {
        printf("%d/%d/%d %d:%d:%d is greater than %d/%d/%d %d:%d:%d\n", Tstamp[1].day, Tstamp[1].month, Tstamp[1].year, Tstamp[1].hour, Tstamp[1].minute, Tstamp[1].second, Tstamp[0].day, Tstamp[0].month, Tstamp[0].year, Tstamp[0].hour, Tstamp[0].minute, Tstamp[0].second);
    }
    else if (a == -1)
    {
        printf("%d/%d/%d %d:%d:%d is equals to %d/%d/%d %d:%d:%d\n", Tstamp[0].day, Tstamp[0].month, Tstamp[0].year, Tstamp[0].hour, Tstamp[0].minute, Tstamp[0].second, Tstamp[1].day, Tstamp[1].month, Tstamp[1].year, Tstamp[1].hour, Tstamp[1].minute, Tstamp[1].second);
    }
    
    
    return 0;
}

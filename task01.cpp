#include "header.h"

void SortByName(std::vector<Student>& students)
{
    for (size_t i = 0; i < students.size(); i++)
    {
        size_t minPos = i;

        for (size_t j = i + 1; j < students.size(); j++)
        {
            if (students[j].Name < students[minPos].Name)
            {
                minPos = j;
            }
        }

        if (minPos != i)
        {
            Student temp = students[i];
            students[i] = students[minPos];
            students[minPos] = temp;
        }
    }
}

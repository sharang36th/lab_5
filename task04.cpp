#include "header.h"

size_t CountExcellent(const std::vector<Student>& students)
{
    size_t count = 0;

    for (size_t i = 0; i < students.size(); i++)
    {
        if (students[i].Ratings.size() == 0)
        {
            continue;
        }

        bool allFive = true;

        for (size_t j = 0; j < students[i].Ratings.size(); j++)
        {
            if (students[i].Ratings[j] != 5)
            {
                allFive = false;
            }
        }

        if (allFive == true)
        {
            count++;
        }
    }

    return count;
}

#include "header.h"

size_t CountTwoness(const std::vector<Student>& students)
{
    size_t count = 0;

    for (size_t i = 0; i < students.size(); i++)
    {
        for (size_t j = 0; j < students[i].Ratings.size(); j++)
        {
            if (students[i].Ratings[j] == 2)
            {
                count++;
                break;
            }
        }
    }

    return count;
}

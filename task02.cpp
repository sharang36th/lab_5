#include "header.h"

static float AverageRating(const Student& s)
{
    if (s.Ratings.size() == 0)
    {
        return 0.0f;
    }

    unsigned sum = 0;

    for (size_t i = 0; i < s.Ratings.size(); i++)
    {
        sum = sum + s.Ratings[i];
    }

    return (float)sum / (float)s.Ratings.size();
}

void SortByRating(std::vector<Student>& students)
{
    for (size_t i = 0; i < students.size(); i++)
    {
        size_t bestPos = i;

        for (size_t j = i + 1; j < students.size(); j++)
        {
            if (AverageRating(students[j]) > AverageRating(students[bestPos]))
            {
                bestPos = j;
            }
        }

        if (bestPos != i)
        {
            Student temp = students[i];
            students[i] = students[bestPos];
            students[bestPos] = temp;
        }
    }
}

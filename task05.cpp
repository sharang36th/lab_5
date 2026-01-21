#include "header.h"

std::vector<Student> VectorMathExcellent(const std::vector<Student>& students)
{
    std::vector<Student> result;

    for (size_t i = 0; i < students.size(); i++)
    {
        for (size_t j = 0; j < students[i].Subjects.size(); j++)
        {
            if (students[i].Subjects[j] == "Math" &&
                j < students[i].Ratings.size() &&
                students[i].Ratings[j] == 5)
            {
                result.push_back(students[i]);
                break;
            }
        }
    }

    return result;
}

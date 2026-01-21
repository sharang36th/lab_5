#include "header.h"

std::vector<Group> Groups(const std::vector<Student>& students)
{
    std::vector<Group> groups;

    for (size_t i = 0; i < students.size(); i++)
    {
        int index = -1;

        for (size_t j = 0; j < groups.size(); j++)
        {
            if (groups[j].Id == students[i].GroupId)
            {
                index = (int)j;
            }
        }

        if (index == -1)
        {
            Group g;
            g.Id = students[i].GroupId;
            g.Students.push_back(students[i]);
            groups.push_back(g);
        }
        else
        {
            groups[index].Students.push_back(students[i]);
        }
    }

    return groups;
}

#include "header.h"

std::vector<std::string> GroupsId(const std::vector<Student>& students)
{
    std::vector<std::string> ids;

    for (size_t i = 0; i < students.size(); i++)
    {
        bool found = false;

        for (size_t j = 0; j < ids.size(); j++)
        {
            if (ids[j] == students[i].GroupId)
            {
                found = true;
            }
        }

        if (found == false)
        {
            ids.push_back(students[i].GroupId);
        }
    }

    return ids;
}

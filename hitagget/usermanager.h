#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <iostream>
#include "listcontroller.h"
#include <vector>
#include "user.h"

using namespace std;

class UserManager : private ListController<User*, int, string>
{
private:
    function<string(User*)> email_field_comparator;
public:
    UserManager();
    ~UserManager();

    bool addUser(string email, string fullname, string password);
    void updateUser(User* user);
    User* getUserByEmail(string email);
    User* getUserById(int id);
    //void delete_user(int id);
};

#endif // USERMANAGER_H

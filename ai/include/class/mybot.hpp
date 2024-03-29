//
// EPITECH PROJECT, 2019
// zappy_ai
// File description:
// Mybot class definition
//

#ifndef MYBOT_HPP_
# define MYBOT_HPP_

#include <iostream>
#include <unistd.h>

class Mybot
{
    public:
        Mybot(int socket, std::string team);
        ~Mybot(void);

        int run(void);
        void look(void);
        char *sendMessage(std::string message);

    private:
        int _sock;
        std::string _team;

    protected:
};

#endif /* MYBOT_HPP_ */
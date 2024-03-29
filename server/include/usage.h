/*
** EPITECH PROJECT, 2019
** PSU_zappy
** File description:
** usage
*/

#ifndef USAGE_H_
# define USAGE_H_

static const char USAGE[] = {
    "USAGE: ./zappy_server -p port -x width -y heigth -n name1 name2 ... -c "
    "clientsNB -f freq\n\t"
    "port\t\tis the port number\n\twidth\t\tis the width of the world\n\t"
    "heigth\t\tis the heigth of the world\n\tnameX\t\tis the name of the "
    "team X\n\t"
    "clientsNB\tis the number of authorized clientsper team\n\t"
    "freq\t\tis the reciprocal of time unit for execution of actions"
};

void help(void);

#endif /* USAGE_H_ */

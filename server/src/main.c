/*
** EPITECH PROJECT, 2019
** zappy_server
** File description:
** main function of project
*/

#include <stdlib.h>
#include "server.h"
#include "usage.h"

int main(int ac, char **av, char **envp)
{
    info_game_t info;

    srand(time(NULL));
	if (!envp[0] || ac < 11 || !handle_error(ac - 1, av + 1, &info))
		return (print_usage(FAILURE));
    return (server(&info));
}

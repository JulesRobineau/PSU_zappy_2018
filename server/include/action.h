/*
** EPITECH PROJECT, 2019
** zappy_server
** File description:
** .h of zappy_server project
*/

#ifndef COMMAND_H_
#define COMMAND_H_

#include <server.h>

#define MAX_ACTION 12
#define LEN_MAX 5000

typedef struct action {
    const char *name;
    const int len;
    bool (*function) (client_t *clt, map_t *, info_game_t *, char *);
} action_t;

bool forward(client_t *clt, map_t *, info_game_t *, char *);
bool broadcast(client_t *clt, map_t *, info_game_t *, char *);
bool right(client_t *clt, map_t *, info_game_t *, char *);
bool incantation(client_t *clt, map_t *, info_game_t *, char *);
bool left(client_t *clt, map_t *, info_game_t *, char *);
bool look(client_t *clt, map_t *, info_game_t *, char *);
bool inventory(client_t *clt, map_t *, info_game_t *, char *);
bool my_fork(client_t *clt, map_t *, info_game_t *, char *);
bool my_eject(client_t *clt, map_t *, info_game_t *, char *);
bool take_object(client_t *clt, map_t *, info_game_t *, char *);
bool set_object(client_t *clt, map_t *, info_game_t *, char *);
bool connect_nbr(client_t *clt, map_t *, info_game_t *, char *);
// void map_size(team_t *);
// void bct(team_t *);
// void mct(team_t *);
// void tna(team_t *);

static const action_t MY_ACTION[] = {
    {"Forward", 7, forward},
    {"Brodcast", 8, broadcast},
    {"Right", 5, right},
    {"Incantation", 11, incantation},
    {"Left", 4, left},
    {"Look", 4, look},
    {"Inventory", 9, inventory},
    {"Fork", 4, my_fork},
    {"Eject", 5, my_eject},
    {"Take ", 5, take_object},
    {"Set ", 4, set_object},
    {"Connect_nbr", 11, connect_nbr},
    // {"msz", 3, map_size},
    // {"bct", 3, bct},
    // {"mct", 3, mct},
    // {"tna", 3, tna},
};

#endif /* COMMAND_H_ */
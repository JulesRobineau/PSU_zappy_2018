##
## EPITECH PROJECT, 2019
## zappy
## File description:
## Makefile of zappy project
##

all:
				$(MAKE) -C server/
				$(MAKE) -C ai/

zappy_server:
				$(MAKE) -C server/

zappy_ai:
				$(MAKE) -C ai/

clean:
				$(MAKE) clean -C server/
				$(MAKE) clean -C ai/

fclean:
				$(MAKE) fclean -C server/
				$(MAKE) fclean -C ai/

re:
				$(MAKE) re -C server/
				$(MAKE) re -C ai/

.PHONY: all zappy_server zappy_ai clean fclean re
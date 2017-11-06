#ifndef menu_h
#define menu_h
int MenuConfig(char *cmd, char *desc, int (*handler)(int argc, char* argv[]));
int ExecuteMenu();
#endif /* Menu_h */
#include "holberton.h"
/**
* env_check - checks to see if the user is calling the env command
* @command: array of commands
* @env: environment variable from main
*
* Return: 1
*/

int env_check(char *command, char **env)
{
	if (_strcmp(command, "env") == 0)
	{
		_env(env);
		return (0);
	}
	return (1);
}
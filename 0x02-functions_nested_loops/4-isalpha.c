#include "main.h"
/*
 * _isalpha - checks prameter for alphabet
 * @c: parameter to be checked
 *return:0 or 1
 */
int _isalpha(int c)
{
return ((c = 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

# Libft checker

Automated tests to check libft functions against their corresponding libc functions.

## Usage

```
Usage: ./lib_checker.sh [ function_name | all | basics ] [-v]
  > function_name        Launch the test for the specified libc function (ex: ./lib_checker.sh memcmp)
  > all                  Launch all the tests
  > basics               Launch some basic tests (mandatory functions, additional functions, prototypes)
Options:
  -v: verbose mode, print tests results
```

## Functions tested

The following functions are tested : `memset, bzero, memcpy, memccpy, memmove, memchr, memcmp, strlen, strdup, strcpy, strncpy, strcat, strncat, strlcat, strchr, strrchr, strstr, strnstr, strcmp, strncmp, atoi, isalpha, isdigit, isalnum, isascii, isprint, toupper, tolower`

## Disclaimer

This was my first try at shell scripting!

## Credits
_basics_ checks coded by apion

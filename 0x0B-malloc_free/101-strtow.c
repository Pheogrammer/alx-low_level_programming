#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * strtow - splits a string into words
 *
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 *
 * Each element of the returned array contains a single word, null-terminated.
 * The last element of the returned array is NULL.
 * Words are separated by spaces.
 *
 * The returned array must be freed with free() when no longer needed.
 */
char **strtow(char *str)
{
  // Declare all variables before being used/assigned value
  int num_words;
  char **words;
  int word_index;
  char *start;
  char *end;

  // Check if str is NULL or empty
  if (str == NULL || str == "") {
    return NULL;
  }

  // Count the number of words in the string.
  num_words = 1;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
      num_words++;
    }
  }

  // Allocate memory for the array of words, including the null terminator.
  words = malloc((num_words + 1) * sizeof(char *));
  if (words == NULL) {
    return NULL;
  }

  // Split the string into words and store them in the array.
  word_index = 0;
  start = str;
  end = str;
  while (*end != '\0') {
    if (*end == ' ') {
      // Add a null terminator to the current word.
      *end = '\0';

      // Add the current word to the array.
      words[word_index++] = start;

      // Start the next word at the next non-whitespace character.
      start = end + 1;
    }

    end++;
  }

  // Add the last word to the array.
  words[word_index++] = start;

  // Add the NULL terminator to the end of the array.
  words[word_index] = NULL;

  return words;
}

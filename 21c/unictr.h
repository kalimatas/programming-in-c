#include <glib.h>

void hash_a_character(gunichar uc, GHashTable *hash);
void printone(void *key_in, void *val_in, void *ignored);
GHashTable *new_unicode_counting_hash();

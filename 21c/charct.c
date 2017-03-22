#include "process_dir.h"
#include "unictr.h"
#include <glib.h>
#include <stdlib.h>
#include <stdio.h>

char *string_from_file(char const *filename){ 
    char *out;
    GError *e = NULL;
    GIOChannel *f = g_io_channel_new_file(filename, "r", &e); 
    if (!f) {
        fprintf(stderr, "failed to open file '%s'.\n", filename);
        return NULL; 
    }

    if (g_io_channel_read_to_end(f, &out, NULL, &e) != G_IO_STATUS_NORMAL) {
        fprintf(stderr, "found file '%s' but couldn't read it.\n", filename);
        return NULL; 
    }

    return out; 
}

void hash_a_file(filestruct path)
{
    GHashTable *hash = path.data;
    char *sf = string_from_file(path.fullname);
    if (!sf) return;
    char *sf_copy = sf;
    if (g_utf8_validate(sf, -1, NULL)) {
        for (gunichar uc; (uc = g_utf8_get_char(sf)) != '\0'; sf = g_utf8_next_char(sf)) {
            hash_a_character(uc, hash);
        }
    }
    free(sf_copy);
}

int main(int argc, char **argv)
{
    GHashTable *hash;
    hash = new_unicode_counting_hash();
    char *start = NULL;
    if (argc > 1) asprintf(&start, "%s", argv[1]);
    printf("Hashing %s\n", start ? start : "the current directory");
    process_dir(.name=start, .file_action=hash_a_file, .data=hash);
    g_hash_table_foreach(hash, printone, NULL);
}

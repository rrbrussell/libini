#ifndef LIBUINI_H
#define LIBUINI_H

#include <stdint.h>
#include <stdlib.h>

/* This includes the NULL terminator */
const uint16_t KEY_MAX_SIZE = 256;

struct Key_Value_Entry {
  char *key;
  char *value;
};

struct Key_Value_Table {
  char *name;
  uint16_t used;
  uint16_t allocated;
  struct Key_Value_Entry *entries;
};

struct Key_Value_Table* UINI_create_key_value_table(char *name);
/*bool UINI_add_entry_to_key_value_table(struct Key_Value_Table *table,
                                       struct Key_Value_Entry *entry,
                                       bool overwrite_existing);*/


#endif //LIBUINI_H

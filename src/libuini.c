#include "libuini.h"
#include <malloc_np.h>
#include <stdlib.h>
#include <string.h>

const uint8_t DEFAULT_TABLE_SIZE = 16;

struct Key_Value_Table *UINI_create_key_value_table(char *name) {
  char *owned_name = calloc(KEY_MAX_SIZE, sizeof(char));
  struct Key_Value_Table *table = calloc(1, sizeof(struct Key_Value_Table));
  if ((table != NULL) && (owned_name != NULL)) {
    if (name == NULL) {
      strlcpy(owned_name, "Default", KEY_MAX_SIZE);
    } else {
      strlcpy(owned_name, name, KEY_MAX_SIZE);
    }
    table->name = owned_name;
    table->allocated = DEFAULT_TABLE_SIZE;
    table->used = 0;
    table->entries = calloc(DEFAULT_TABLE_SIZE, sizeof(struct Key_Value_Entry));
    return table;
  } else {
    return NULL;
  }
}

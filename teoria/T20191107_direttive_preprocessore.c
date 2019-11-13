//esempio compilazione condizionale con direttive al preprocessore

#define DEBUG 1

#ifdef DEBUG
  assert(list_ptr == NULL);
#endif

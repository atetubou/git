#ifndef FSCACHE_H
#define FSCACHE_H

int fscache_enable(int enable, int explicit_only);
#define enable_fscache(x) fscache_enable(x, 0)

#define enable_scoped_fscache(x) fscache_enable(x, 1)

void fscache_scope(int enable);
#define begin_fscache_scope() fscache_scope(1)
#define end_fscache_scope() fscache_scope(0)

int fscache_enabled(const char *path);
#define is_fscache_enabled(path) fscache_enabled(path)

DIR *fscache_opendir(const char *dir);
int fscache_lstat(const char *file_name, struct stat *buf);

#endif

#ifndef LIBCHESS_GLOBAL_H
#define LIBCHESS_GLOBAL_H

#ifdef _MSC_VER
#define DECL_EXPORT     __declspec(dllexport)
#define DECL_IMPORT     __declspec(dllimport)
#else
#define DECL_EXPORT     __attribute__((visibility("default")))
#define DECL_IMPORT     __attribute__((visibility("default")))
#endif

#if defined(LIBCHESS_LIBRARY)
#  define PLAYCHESSSHARED_EXPORT DECL_EXPORT
#else
#  define PLAYCHESSSHARED_EXPORT DECL_IMPORT
#endif

#endif // PLAYCHESS_GLOBAL_H

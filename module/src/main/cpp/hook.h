//
// Created by Perfare on 2020/7/4.
//

#ifndef UMAMUSUMELOCALIFYANDROID_HOOK_H
#define UMAMUSUMELOCALIFYANDROID_HOOK_H

#include <jni.h>
#include "log.h"

static int enable_hack;
static void *il2cpp_handle = NULL;

int isGame(JNIEnv *env, jstring appDataDir);

void hack_thread(void *arg);

#define HOOK_DEF(ret, func, ...) \
  ret (*orig_##func)(__VA_ARGS__); \
  ret new_##func(__VA_ARGS__)

#endif //UMAMUSUMELOCALIFYANDROID_HOOK_H

#include <jni.h>
#include <string>


#include "Game.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_github_rpg3d_sword2android_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_github_rpg3d_sword2android_MainActivity_runGame(JNIEnv* env, jobject /* this */)
{
    Game game;
    game.run();
}
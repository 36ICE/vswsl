#include "jni.h"
#include "cd_zeng_base_jni_HelloWorld.h"

//#include otherheaders

JNIEXPORT void JNICALL
Java_HelloWorld_displayHelloWorld(JNIEnv *env, jobject obj)
{
    printf("Helloworld!\n");
    return;
}
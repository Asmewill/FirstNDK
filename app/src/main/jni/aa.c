//
// Created by jian.shui on 2018/5/9.
//

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_jianshui_firstndk_JniTest */

#ifndef _Included_com_example_jianshui_firstndk_JniTest
#define _Included_com_example_jianshui_firstndk_JniTest
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_jianshui_firstndk_JniTest
 * Method:    getJniString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_jianshui_firstndk_JniTest_getJniString
  (JNIEnv *env, jclass object){
     return (*env)->NewStringUTF(env,"hello umeng");
  }
#ifdef __cplusplus
}
#endif
#endif

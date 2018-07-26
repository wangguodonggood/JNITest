#include <jni.h>
#include <string>
extern "C" {
//JNI调用Java的静态方法
//以下是关于相关知识的技术博客
//https://www.cnblogs.com/xitang/p/4174619.html
//https://www.cnblogs.com/Anita9002/p/5942965.html
//http://hubingforever.blog.163.com/blog/static/171040579201151722833782/
//https://blog.csdn.net/qq_27278957/article/details/77164353
//\app\build\intermediates\classes\debug\com\topotek\jnitest>javap -s Commond
//如果声明了指针记得释放指针
void Java_com_topotek_jnitest_Commond_ToJava(
        JNIEnv *env,
        jobject obj) {
    jclass cls = (*env).FindClass("com/topotek/jnitest/Commond");
    jmethodID mid = (env)->GetStaticMethodID(cls, "commond1", "(F)V");
    (env)->CallStaticVoidMethod(cls, mid, 0.666);

  /*  const char* ss="这是从jni传来的字符串";
    jclass cls = (*env).FindClass("com/topotek/jnitest/Commond");
    jmethodID mid = (env)->GetStaticMethodID(cls, "commond2", "(Ljava/lang/String;)V");
    (env)->CallStaticVoidMethod(cls, mid, env->NewStringUTF(ss));*/

/*    const char* ss="这是从jni传来的字符串";
    jclass cls = (*env).FindClass("com/topotek/jnitest/Commond");
    jmethodID mid = (env)->GetStaticMethodID(cls, "commond3", "(ILjava/lang/String;)V");
    (env)->CallStaticVoidMethod(cls, mid,666,env->NewStringUTF(ss));*/

    //JNI调用非静态方法
 /*   jclass cls = (*env).FindClass("com/topotek/jnitest/Commond");
    jmethodID  mid=(env)->GetMethodID(cls,"commond4","(I)V");
    //获取构造函数
    //jmethodID id = env->GetMethodID(cls, "", "()V");
    //调用构造函数创建对象
    //jobject j=(env)->NewObject(cls,id);
    jobject  jobject1=env->AllocObject(cls);
    (env)->CallVoidMethod(jobject1,mid,1000);*/

}
JNIEXPORT jint JNICALL
Java_com_topotek_jnitest_Commond_ToCPP(
        JNIEnv *env,
        jobject /* this */) {
    return 1;
}

}


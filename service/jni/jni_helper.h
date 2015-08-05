
namespace android {

/* JNI Helpers for wifi_hal to WifiNative bridge implementation */

void throwException( JNIEnv *env, const char *message, int line );
jboolean  getBoolField(JNIEnv *env, jobject obj, const char *name);
jint  getIntField(JNIEnv *env, jobject obj, const char *name);
jlong getLongField(JNIEnv *env, jobject obj, const char *name);
jobject getObjectField(JNIEnv *env, jobject obj, const char *name, const char *type);
jlong getLongArrayField(JNIEnv *env, jobject obj, const char *name, int index);
jobject getObjectArrayField(JNIEnv *env, jobject obj, const char *name, const char *type, int index);
void setIntField(JNIEnv *env, jobject obj, const char *name, jint value);
 void setByteField(JNIEnv *env, jobject obj, const char *name, jbyte value);
 jbyte getByteField(JNIEnv *env, jobject obj, const char *name);
void setBooleanField(JNIEnv *env, jobject obj, const char *name, jboolean value);
void setLongField(JNIEnv *env, jobject obj, const char *name, jlong value);
void setLongArrayField(JNIEnv *env, jobject obj, const char *name, jlongArray value);
void setLongArrayElement(JNIEnv *env, jobject obj, const char *name, int index, jlong value);
jboolean setStringField(JNIEnv *env, jobject obj, const char *name, const char *value);
void reportEvent(JNIEnv *env, jclass cls, const char *method, const char *signature, ...);
jobject createObject(JNIEnv *env, const char *className);
jobjectArray createObjectArray(JNIEnv *env, const char *className, int size);
void setObjectField(JNIEnv *env, jobject obj, const char *name, const char *type, jobject value);

jlong getStaticLongField(JNIEnv *env, jobject obj, const char *name);
jlong getStaticLongField(JNIEnv *env, jclass cls, const char *name);
void setStaticLongField(JNIEnv *env, jobject obj, const char *name, jlong value);
void setStaticLongField(JNIEnv *env, jclass cls, const char *name, jlong value);
jlong getStaticLongArrayField(JNIEnv *env, jobject obj, const char *name, int index);
jlong getStaticLongArrayField(JNIEnv *env, jclass cls, const char *name, int index);
void setStaticLongArrayField(JNIEnv *env, jobject obj, const char *name, jlongArray value);
void setStaticLongArrayField(JNIEnv *env, jclass obj, const char *name, jlongArray value);
}
#define THROW(env, message)      throwException(env, message, __LINE__)

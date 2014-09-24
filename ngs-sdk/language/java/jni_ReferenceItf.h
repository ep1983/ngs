/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ngs_itf_ReferenceItf */

#ifndef _Included_ngs_itf_ReferenceItf
#define _Included_ngs_itf_ReferenceItf
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetCommonName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ngs_itf_ReferenceItf_GetCommonName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetCanonicalName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ngs_itf_ReferenceItf_GetCanonicalName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetIsCircular
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_ngs_itf_ReferenceItf_GetIsCircular
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetLength
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_ngs_itf_ReferenceItf_GetLength
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetReferenceBases
 * Signature: (JJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ngs_itf_ReferenceItf_GetReferenceBases
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetReferenceChunk
 * Signature: (JJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ngs_itf_ReferenceItf_GetReferenceChunk
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetAlignment
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_ngs_itf_ReferenceItf_GetAlignment
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetAlignments
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_ngs_itf_ReferenceItf_GetAlignments
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetAlignmentCount
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_ngs_itf_ReferenceItf_GetAlignmentCount
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetAlignmentSlice
 * Signature: (JJJI)J
 */
JNIEXPORT jlong JNICALL Java_ngs_itf_ReferenceItf_GetAlignmentSlice
  (JNIEnv *, jobject, jlong, jlong, jlong, jint);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetPileups
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_ngs_itf_ReferenceItf_GetPileups
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     ngs_itf_ReferenceItf
 * Method:    GetPileupSlice
 * Signature: (JJJI)J
 */
JNIEXPORT jlong JNICALL Java_ngs_itf_ReferenceItf_GetPileupSlice
  (JNIEnv *, jobject, jlong, jlong, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif

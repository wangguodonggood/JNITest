package com.topotek.jnitest;
import android.util.Log;
public class Commond {
    //以下供给C语言调用
    public static void commond1(float a) {
        Log.i("TTTTT", "commond1: ");
        Log.i(TAG, "commodTest: ---------" + a);
    }

    public static void commond2(String s) {
        Log.i(TAG, "commodTest: ---------" + s);
    }

    public static void commond3(int a, String s) {
        Log.i(TAG, "commodTest: ----S:" + s + "--A:" + a);
    }

    public void commond4(int a) {
        Log.i(TAG, "commodTest: ------A:" + a);
    }

    public static native int ToCPP();
    public static native void ToJava();
    public static String TAG=Commond.class.getSimpleName();
}

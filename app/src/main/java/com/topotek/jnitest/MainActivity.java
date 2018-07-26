package com.topotek.jnitest;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;
//https://www.cnblogs.com/Anita9002/p/5942965.html
//生成java方法签名  javap -s MainActivity.class
public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
     super.onCreate(savedInstanceState);
      setContentView(R.layout.activity_main);
    // Example of a call to a native method
         TextView tv = (TextView) findViewById(R.id.sample_text);
    //tv.setText(stringFromJNI());
     int a=Commond.ToCPP();
     tv.setText("ToCPP  :"+a);
     Commond.ToJava();
    }
    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
}

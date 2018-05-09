package com.example.jianshui.firstndk;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String testStr=new JniTest().getJniString();
        Toast.makeText(getApplicationContext(),testStr,Toast.LENGTH_LONG).show();
    }
}

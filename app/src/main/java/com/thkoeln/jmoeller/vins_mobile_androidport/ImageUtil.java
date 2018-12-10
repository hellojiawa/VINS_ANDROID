package com.thkoeln.jmoeller.vins_mobile_androidport;

import android.media.Image;

import java.nio.ByteBuffer;

/**
 * TODO
 * version: V1.0 <描述当前版本功能>
 * fileName: com.thkoeln.jmoeller.vins_mobile_androidport.ImageUtil
 * author: liuping
 * date: 2018/8/20 15:20
 */
class ImageUtil {
    public static int W_H = 640 * 480;

    public static byte[] sBytesN21 = new byte[W_H * 3];

    public static byte[] sBytesY = new byte[W_H];
    public static byte[] sBytesU = new byte[W_H / 4];
    public static byte[] sBytesV = new byte[W_H / 4];

    public static byte[] imageToByteArray(Image image) {
        ByteBuffer bufferY = image.getPlanes()[0].getBuffer();
        bufferY.get(sBytesY, 0, sBytesY.length);

        ByteBuffer bufferU = image.getPlanes()[1].getBuffer();
        bufferU.get(sBytesU, 0, sBytesU.length);

        ByteBuffer bufferV = image.getPlanes()[2].getBuffer();
        bufferV.get(sBytesV, 0, sBytesV.length);

        System.arraycopy(sBytesY, 0, sBytesN21, 0, sBytesY.length);
        for (int i = 0; i < sBytesU.length; i++) {
            sBytesN21[W_H + 2 * i] = sBytesU[i];
            sBytesN21[W_H + 2 * i + 1] = sBytesV[i];
        }

        return sBytesN21;
    }
}

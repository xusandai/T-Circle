{
    delay(120); // ms
    writecommand(0xFE);
    writecommand(0xEF);

    writecommand(0x80);
    writedata(0xFF);

    writecommand(0x81);
    writedata(0xFF);

    writecommand(0x82);
    writedata(0xFF);

    writecommand(0x83);
    writedata(0xFF);

    writecommand(0x84);
    writedata(0xFF);

    writecommand(0x85);
    writedata(0xFF);

    writecommand(0x86);
    writedata(0xFF);

    writecommand(0x87);
    writedata(0xFF);

    writecommand(0x88);
    writedata(0xFF);

    writecommand(0x89);
    writedata(0xFF);

    writecommand(0x8A);
    writedata(0xFF);

    writecommand(0x8B);
    writedata(0xFF);

    writecommand(0x8C);
    writedata(0xFF);

    writecommand(0x8D);
    writedata(0xFF);

    writecommand(0x8E);
    writedata(0xFF);

    writecommand(0x8F);
    writedata(0xFF);

    writecommand(0x3A);
    writedata(0x05);

    writecommand(0xEC);
    writedata(0x01);

    writecommand(0x74);
    writedata(0x02);
    writedata(0x0E);
    writedata(0x00);
    writedata(0x00);
    writedata(0x00);
    writedata(0x00);
    writedata(0x00);

    writecommand(0x98);
    writedata(0x3E);
    writecommand(0x99);
    writedata(0x3E);

    writecommand(0xB5);
    writedata(0x0D);
    writedata(0x0D);

    writecommand(0x60);
    writedata(0x38);
    writedata(0x0F);
    writedata(0x79);
    writedata(0x67);

    writecommand(0x61);
    writedata(0x38);
    writedata(0x11);
    writedata(0x79);
    writedata(0x67);

    writecommand(0x64);
    writedata(0x38);
    writedata(0x17);
    writedata(0x71);
    writedata(0x5F);
    writedata(0x79);
    writedata(0x67);

    writecommand(0x65);
    writedata(0x38);
    writedata(0x13);
    writedata(0x71);
    writedata(0x5B);
    writedata(0x79);
    writedata(0x67);

    writecommand(0x6A);
    writedata(0x00);
    writedata(0x00);

    writecommand(0x6C);
    writedata(0x22);
    writedata(0x02);
    writedata(0x22);
    writedata(0x02);
    writedata(0x22);
    writedata(0x22);
    writedata(0x50);

    writecommand(0x6E);
    writedata(0x03);
    writedata(0x03);
    writedata(0x01);
    writedata(0x01);
    writedata(0x00);
    writedata(0x00);
    writedata(0x0f);
    writedata(0x0f);
    writedata(0x0d);
    writedata(0x0d);
    writedata(0x0b);
    writedata(0x0b);
    writedata(0x09);
    writedata(0x09);
    writedata(0x00);
    writedata(0x00);
    writedata(0x00);
    writedata(0x00);
    writedata(0x0a);
    writedata(0x0a);
    writedata(0x0c);
    writedata(0x0c);
    writedata(0x0e);
    writedata(0x0e);
    writedata(0x10);
    writedata(0x10);
    writedata(0x00);
    writedata(0x00);
    writedata(0x02);
    writedata(0x02);
    writedata(0x04);
    writedata(0x04);

    writecommand(0xbf);
    writedata(0x01);

    writecommand(0xF9);
    writedata(0x40);

    writecommand(0x9b);
    writedata(0x3b);
    writecommand(0x93);
    writedata(0x33);
    writedata(0x7f);
    writedata(0x00);

    writecommand(0x7E);
    writedata(0x30);

    writecommand(0x70);
    writedata(0x0d);
    writedata(0x02);
    writedata(0x08);
    writedata(0x0d);
    writedata(0x02);
    writedata(0x08);

    writecommand(0x71);
    writedata(0x0d);
    writedata(0x02);
    writedata(0x08);

    writecommand(0x91);
    writedata(0x0E);
    writedata(0x09);

    writecommand(0xc3);
    writedata(0x19);
    writecommand(0xc4);
    writedata(0x19);
    writecommand(0xc9);
    writedata(0x3c);

    writecommand(0xf0);
    writedata(0x53);
    writedata(0x15);
    writedata(0x0a);
    writedata(0x04);
    writedata(0x00);
    writedata(0x3e);

    writecommand(0xf2);
    writedata(0x53);
    writedata(0x15);
    writedata(0x0a);
    writedata(0x04);
    writedata(0x00);
    writedata(0x3a);

    writecommand(0xf1);
    writedata(0x56);
    writedata(0xa8);
    writedata(0x7f);
    writedata(0x33);
    writedata(0x34);
    writedata(0x5f);

    writecommand(0xf3);
    writedata(0x52);
    writedata(0xa4);
    writedata(0x7f);
    writedata(0x33);
    writedata(0x34);
    writedata(0xdf);

    writecommand(0x36);
    writedata(0x00);

    writecommand(0x11);
    delay(200);

    writecommand(0x29);
    writecommand(0x2C);
}
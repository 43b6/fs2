// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","һ¥�ײ�");
        set ("long","���ܶ�����ɭɭ�Ĺ���,ʹ��Խ��Խ�����Ļš��������ƺ�
������һ����΢���ĵƹ⡣
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" : __DIR__"room19",
            "southeast"  : __DIR__"room6",
      ]));

       

        setup();
}

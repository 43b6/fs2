// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","�ű�һ¥");
        set ("long","�����ƺ���Ǳ����ʲô��ħ���,��������̻̲������ذ������Ѹ��ɵĵ�ľ��
����,�������治ͣ�ķ�����֨��֨�����������˲��������Ƿ��������ء�

                      ����֨����֨��

");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room12",
            "north"  : __DIR__"room15",
            "west" :  __DIR__"room14",
      ]));

       

        setup();
}

// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","�ű�һ¥");
        set ("long","���и�����,���е�Ŀ�������������һ�ɶ����ˡ���������֡��ն�Ļ���
���ڶ�ʹ��������ùġ������ƺ���һ�����ȡ�
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room6",
            "south"  : __DIR__"room7",
            "west"  : __DIR__"room23",
            "northwest"  : __DIR__"room9",
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/mob4" : 2,
      ]));

        setup();
}

// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","�ű��ڲ�");
        set ("long","ֻ�����ܳ�����ŨŨ����ɫ�����������е㴭����������ãã��ֻ��
��ɫ���ֵ���Ӱ��������,�·���ʱ�������������Ƶġ�������Ĳ�
����ð�����亹...��

");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room3",
            "west"  : __DIR__"room1",
            
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/mob2" : 5,
      ]));

        setup();
}

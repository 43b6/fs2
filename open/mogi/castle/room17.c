// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","�ű�һ¥");
        set ("long","��������Ĺű�һ¥�������������Ӱ����������ɷ�ˡ������ֵط�
����������\����\�ƺ�һ��һ����������ʧ��������Ҳ���Խ��ؿֻ�
���������æ������������������Ӧ������δ֪����ħ��֡�
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "south" :  __DIR__"room14",
            "north"  : __DIR__"room18",
            
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/mob3" : 4,
      ]));

        setup();
}

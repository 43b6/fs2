// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","һ¥����");
        set ("long","�����ƺ���Ǳ����ʲô��ħ���,��������̻̲������ذ������Ѹ��ɵĵ�ľ��
����,�������治ͣ�ķ�����֨��֨��������

                      ����֨����֨��

");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "west" :  __DIR__"room21",
            "east"  : __DIR__"room23",
            
       ]));
       set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/older" : 1,
      ]));
        

        setup();
}

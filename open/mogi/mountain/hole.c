// room1.c by roger

inherit ROOM;
#include <ansi.h>
#include <mountain.msg>
void create () {
set ("short",HIC"��󸶴��"NOR);
   set ("long","
�������ǧ������ס�Ķ�Ѩ���������ϵģ��������ס�Ķ�Ѩȴ�ǳ�
��ĸɾ���û��һ˿��������ϸ��Ǹɸɾ����ġ����ڵ���ͦ���ģ���
��������һ��һ���Ľᾧ��㲻�û�����Ȼ��ˮ���ء�
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"entrance",
      ]));

       set("objects",([ /* sizeof() == 1 */
       __DIR__"npc/ice-frog" : 1,
                      ]));

        setup();
}

// room1.c by roger

inherit ROOM;
#include <ansi.h>
#include <mountain.msg>
void create () {
set ("short","��а��");
set ("long","
��������а��ɽ����ǰ����Ƭ����ƽԭ�����ܶ��ǹ�ͺͺ���ͱڣ�
����Ҫ��ɽ�ǷǾ����ⲻ���ˡ������Ϸ��ƺ�����ǿ�ҵ���������
�ţ�ģģ����Ũ�����ƺ�������һ����⣬�����һ����⡣����
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
       "west" : __DIR__"room19",
       "east" : __DIR__"room16",
      ]));

        set("objects",([ /* sizeof() == 1 */
        __DIR__"npc/gold-ghost" : 1,
        __DIR__"npc/silver-ghost" : 1,
        __DIR__"npc/red-ghost" : 1,
      ]));

        setup();
}
int valid_leave(object me, string dir)

{
if(dir=="west"&&present("ghost",environment(me)))  return 0;

else return 1;
}

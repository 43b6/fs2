// Room: /u/r/rence/room/room4.c

#include <room.h>
#include "/open/open.h"

inherit ROOM;

void create()
{
        set("short","��ɽ�Թ�");
        set("long",@LONG
������������صĸо��������ܸ���һ���ţ���֪��ͨ���δ���
��ɱ���ڵ����ص�����ʲô��? ��Щ�ŵı��󵽵�ͨ����? Ȼ
����ʯ�����п��ţ�

          
          �������ϱ��������޼�����Ǭ����

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "����":__DIR__"room3",
        "����":__DIR__"room5",
        "����":__DIR__"room6",
        "����":__DIR__"room7",

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 3 */
  "/u/k/kael/npc/kaio-mob.c" : 1,
  "/u/k/kael/npc/kmob1.c" : 2,
  "/u/k/kael/npc/kmob2.c" : 2,
]));
  setup();
}
// Room: /u/r/rence/room/room1.c

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
        "����":__DIR__"room2",
        "����":__DIR__"room3",
        "����":__DIR__"room4",
        "����":__DIR__"room5",

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/u/r/rence/npc/gmob4.c" : 1,
  "/u/r/rence/npc/gmob8-1.c" : 2,
]));
  setup();
}

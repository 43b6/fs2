// Room: /open/dancer/room/rooms5.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIR"����"NOR);
  set ("long", @LONG
������ҹ��С�������أ�������������������Ů�ӿ��أ�������
��ģ���ƺ��������磬ʵ����Ӧ�����������ɡ�����û�µĻ�����
��Ҫ�����ǵĺã���������뿪ҹ��С����������ҹ��С���ڲ���
�ġ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/dancer/room/rooms4.c",
  "out" : "/open/dancer/room/dream.c",
]));
 set("objects", ([ /* sizeof() == 1 */
 "/open/dancer/npc/ygirl.c" : 2,
]));

  set("light_up", 1);

  setup();
}

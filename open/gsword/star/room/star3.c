// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "[1;31m����¥[2;37;0m");
  set ("long", @LONG
���Ѿ������������еĵ�������, ����ǿ�ҵĹ����Ѳ��ڶ�
�����Ӱ����, ��ǽ��, �㿴����һ����¯, ��λ��ʿ���Ӻ���
�����ڴ����ű���, ԭ�������������н�ʿ�Ľ�, ��������һ��
�������, ����һ������, �����������һ�ԵĽ�, ���ص�¥��
�ڵĵط�, ���������룮
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room7.c",
  "out" : __DIR__"room6.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/star5.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="up" && present("starman",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("����Ϊ���ܻ�ù�ȥ��??"
+RANK_D->query_respect(me)+"��ȥ����!\n");
return ::valid_leave(me,dir);
}

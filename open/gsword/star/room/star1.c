// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "[1;36m����¥[2;37;0m");
  set ("long", @LONG
�����������еĵ�һ��¥, ���г�����������Ĺ���, 
�����ߵ���¥, ˲���۾���������, ���˲���, �۾�����
����Ӧ�����ܵ�����, ֻ����ǰվ��һλ���ϵĽ�ʿ, ��
������η��, �����е㲻����ǰ��ȥ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room3.c",
  "out" : __DIR__"room2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/star7.c" : 1,
]));
  set("light_up", 1);

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

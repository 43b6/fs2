// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "[1;35m���¥[2;37;0m");
  set ("long", @LONG
�����������еĵ�����¥, ��������, ��һ�ɾ���ͻȻ����,
���������ڶ�������ĸо�, ������һ˿˿������ĸо�, ͻȻ
һ��Ц��, ԭ����¥����Ц��, �����������򵽸�һ�����ѧ,
�����������˵�, �����ܵ�������, �����д衣
LONG);

  set("exits", ([ /* sizeof() == 2 */
     "up" : "/open/mogi/forest/entrance",
  "out" : __DIR__"room12.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/star3.c" : 1,
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

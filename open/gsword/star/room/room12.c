// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���¥�ſ�");
  set ("long", @LONG
�㾭���ߵ�, ������������, ���ѷ�������ǰ��һ���� 
���ŵ�������һ����, ����д�����¥, ��ʱ¥��������
������ס���ȥ·, �������з޺޲���, ��ʹ������һ����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room11.c",
  "enter" : __DIR__"star6.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/swordsman.c" : 2,
]));
  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="enter" && present("swordsman",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("����Ϊ���ܻ�ù�ȥ��??"
+RANK_D->query_respect(me)+"��ȥ����!\n");
return ::valid_leave(me,dir);
}

// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�ߵ�");
  set ("long", @LONG
��ո��������������Ĳ�, �ڴ˴��㿴�������ص�Ѫ��, 
����ֻ��΢΢����, ��������, ԶԶ����ȥ, ֻ����һ������
, ���������̷ɱ���ȥ, ֻ��һ����������������, ��ʱ��
����������Ӱ�����ⱼ����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room8.c",
  "down" : __DIR__"star3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/corpse.c" : 4,
]));
  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="north" && present("corpse",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("����Ϊ���ܻ�ù�ȥ��??"
+RANK_D->query_respect(me)+"��ȥ����!\n");
return ::valid_leave(me,dir);
}

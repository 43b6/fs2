// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "[1;34m��Ȩ¥[2;37;0m");
  set ("long", @LONG
�����������ĵ��Ĳ�, ������ߵ���¥, ͻȻ���۾��е�һ��
��ʹ, ԭ���Ǵ˴��Ĺ��߸��ӵ�ǿ��, �����ڴ˵���Ϣ��һ�����
���ĺ�ת����, ��ʱ��������������, �������Ƹ�������¥һ��
, ֻ������Χ�ڷ�����֮װ��, ԭ�������������е�װ��, �Ǵ���
����������, ��¥�ݿ���վ��¥��, ¥�����ϳ����ž�̬, ԭ����
������Ϣ�ͱ���ĽŲ��������ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room9.c",
  "out" : __DIR__"room8.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/star4.c" : 1,
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

// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "[1;32m���¥[2;37;0m");
  set ("long", @LONG
�����������еĵ����¥, �ղ���˵�, һ��̱ǵ�ҩζ��
������ı���, ���������йɶ��ĵĸо�, �����������ܹ���,
�������ܰ�����ҩ��, ����¥��������ŵ�¯, ԭ����¥��¥��
ϲ���о�ҽ��, ��������һ����, ���϶�ݺݵĵ�����, ������
�������Ƶĵ�ҩ��͵�ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room11.c",
  "out" : __DIR__"room10.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/star1.c" : 1,
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

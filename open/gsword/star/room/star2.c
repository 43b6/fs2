// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "[1;33m���¥[2;37;0m");
  set ("long", @LONG
���Ѿ�����ڶ���, �����е������Ѿ�Ӱ�첻������, 
����Χһ��, �ŷ���������İ���ʮ�ֵ�Ư��, ����������
��������, �Լ����Ļ�ƿ������, ��¥����վ�����ϵ�
¥�ݿ�ǰ, ������ִ���Լ���ְ��, ������������һ��Į��
�ı���, �������ڳ���ֻ�ܴ�����ɡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room5.c",
  "out" : __DIR__"room4.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/star6.c" : 1,
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

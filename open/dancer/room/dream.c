// Room: /open/dancer/room/dream.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIY"���ŵ�ׯԺ"NOR);
  set ("long", @LONG
�������ǰ��һ�����ŵ�ׯԺ�����������������ʻ���������
�㣬�����˴����Ǵ�˵�е�ҹ��С���ˡ��ſڻ�����λ��������Ů��
�����š�������鲻���˷�������������ܼ����������ˡ�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/r12-2.c",
  "enter" : "/open/dancer/room/rooms5.c",

]));
   set("objects", ([ /* sizeof() == 1 */
   "/open/dancer/npc/rgirl.c" : 2,
  ]));

  set("light_up", 1);

  setup();
}
 int valid_leave(object me, string dir)
{
if( dir=="enter" )
  if( me->query("gender")!="Ů��")
   return notify_fail("ֻ��Ů�˲��ܽ�ҹ��С���!\n");
return ::valid_leave(me,dir);
 }

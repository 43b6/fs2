#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
	set( "build", 2 );
  set ("long", @LONG
�߽�����, ��һ������, ��ǰͨ������, ��������Ҳ����һ����
��, �����������ϺõĴ���̺, ���г�һ��ׯ�ϵ����ա�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"p1.c",
  "south" : __DIR__"np10",
  "west" : __DIR__"np16",
  "east" : __DIR__"np14",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/ping/npc/manager.c" : 1,
  "/open/ping/npc/duan-guard.c" : 2,
]));
  set("light_up", 1);

  setup();
}
void init ()
{
  object me=this_player ();
  if ( me->query_temp("six_sp_quest") == 7)
      {
       message_vision(HIY"\n���ϼ���ɮ˵��:����Сɮ��·, ǰ��������, �ݼ�����. \n\n"NOR,me);
       me->set_temp("six_sp_quest",8);
       me->move("/open/tailong/room/aa39.c");
      }
}

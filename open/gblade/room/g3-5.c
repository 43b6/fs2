#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "��Ժ�ߵ�");
  set ("long", @LONG

�����ǽ�����լ����Ժ����Ժ��һ�������ͣ��м���һ����԰����԰��
������Ԫ�ԼҾ��ס�����㿴�����ܷ��䣬������������ϸ��ʱ�»�����
�������Ϳ�Ρ�
����������С�����롣


LONG);

   set("light_up", 1);
   set("exits", ([ /* sizeof() == 3 */
   "east" :__DIR__"g3-6.c",
   "north" : __DIR__"g3-4.c",
   "west" : __DIR__"g3-5-1.c",
]));

create_door("west", "����̴ľ��", "east", DOOR_CLOSED);
  setup();
}

 int valid_leave(object me, string dir)
  {
	if(dir=="west" && (doors["west"]["status"]==DOOR_CLOSED) )
	return notify_fail("������Ȱѵ���̴ľ�Ŵ򿪣�\n");

    if(dir=="west"&&me->query("gender")=="����")
	if(!me->query_temp("can-enter") && me->query("lotch")<1 && me->query("quests/lotch") <1 )
	{
	if(me->query_temp("know_leing") )
	me->set_temp("cant-enter",1);
	return notify_fail("һ�������� , �ô�Ů���ӵĹ뷿 ?\n");
	}
   return 1;
  }

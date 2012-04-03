#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "ħ��ڤ��ħ��");
  set ("long", @LONG
������������������ŷ�ɥ����ڤ��ħ���ܵأ����ڰ�
���а����������������������������д���̺���м����
�о���̫����ڤ��ħ�̱�������ϣ�̫����ʯ���Ͽ��о޷�
��ʥ����������ħ��ʥ��ľ���
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "up" : __DIR__"eqroom.c",
  "west" : __DIR__"room17",
  "south" : __DIR__"room7",
  "east" : __DIR__"room18",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 3 */
  "/open/poison/npc/jadegirl" : 1,
  "/open/poison/npc/masterl" : 1,
  "/open/poison/npc/goldchild" : 1,
]));
  set("valid_startroom", 1);

  setup();
call_other("/obj/board/poisoner_b","???");
}
void reset()
{
 set("been_get",0);
 :: reset();
}
void init()
{
  add_action("do_steal","steal");
}
int do_steal(string str)
{
  object me = this_player();
  object pearl, guard;
  int lv = me->query_skill("dodge");
  if( str != "pearl" )
	return notify_fail("����͵Щʲô?\n");
  if(query("been_get"))
        return notify_fail("ħ�̴�ʱ�䱸ɭ�ϣ���û�����ֻ��ᡣ\n");
  if( random(lv) > random(50))
    {
      tell_object(me,"��˳���õ�һ��ҹ���顣\n");
      pearl = new("/open/poison/obj/pearl");
      pearl->move(me);
      set("been_get",1);
      return 1;
    }
  else
    {
     set("been_get",1);
      tell_object(me,"��! �㲻С��ʧ������\n");
      message_vision("$N���Բ�С�ı����֣����������ǡ�\n",me);
      guard = new(POISON_NPC"guard1");
      guard->move(POISON_ROOM"room1");
      guard->kill_ob(me);
      guard->set_leader(this_player());
      guard = new(POISON_NPC"guard1");
      guard->move(POISON_ROOM"room1");
      guard->kill_ob(me);
      guard->set_leader(this_player());
      return 1;
    }
  return 1;
}
int valid_leave(object me, string dir)
{
if (dir == "up" && me ->query("class") != "poisoner")
     return notify_fail("ι ,��ȥ���� ?�뱻������\n");
     return :: valid_leave(me, dir);
}


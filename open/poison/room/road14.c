// Room: /open/poison/room/road14
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������ڤ��ħ�̵Ĵ��ſڣ�����������һ������������
ʯʨ������ֱ��ǰ����һ������Ⱥ�۵���̬������һ�ô���
���Ʈҷ��
LONG);
  set("light_up",1);
  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/poison/room/road15",
  "southdown" : "/open/poison/room/road13",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/guard" : 1,
]));
  setup();
}

int valid_leave(object me, string dir)
{
   int number;
   number  = me->query_temp("poison_nopass");
   if (dir=="north" &&
       present("guard",this_object()) &&
       me->query("family/family_name") != "ڤ��ħ��" )
   {
	if (number > 1) {
          me->set_temp("poison_nopass",number+1);
          return notify_fail(HIC"ڤ�������ȵ��������ڣ�������롣\n"NOR);
        }
        if (me->query_temp("weapon")) {
          me->set_temp("poison_nopass",number+1);
	  message_vision(HIC"ڤ������ŭ������׼���������ڣ�$N�뵽������ѽ��\n"NOR,me);
          return notify_fail(HIC"ڤ�������ȵ���������ܻ᲻��ӭ�㡣\n"NOR);
        }
   }
   return ::valid_leave(me ,dir);
}

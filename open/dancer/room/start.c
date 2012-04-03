//room:/open/dancer/room/start.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{

  string long;
  set ("short", HIY "ҹ�ε���" NOR );

long = ""+
"              "HIY"ҹ�ε���"NOR"      \n\n"+
""+
"      ������ҹ��С���Ĵ��"HIC"��"HIY"ҹ�ε���"HIC"��"NOR"��������ҹ��\n"+
"  ������ƽ��ѧϰ�赸�������ĵط�������������������\n"+
"  �����Ľ����ټ����������������赸�����ǻ�������Ϊ\n"+
"  ���þ���������������ר�õ�������Ϣ��ร� \n\n ";



  set("long", long);
  set("light_up", 1);
  set("valid_startroom", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south"     :"/open/dancer/room/rooms1.c",
  "east"     :"/open/dancer/room/roome1.c",
 "west"      :"/open/dancer/room/cafeteria.c",

]));
  set("objects", ([ /* sizeof() == 1 */
"/open/dancer/npc/master_yua.c":1,
]));

  setup();
  call_other("/obj/board/dancer_b.c","????");
}
int valid_leave(object me, string dir)
{
        if(me->query("class")!="dancer"&&dir=="west")
return notify_fail("�ร�����ֻ�����߲��ܽ�ȥ��~~\n");
return ::valid_leave(me,dir);
}
void init()
{
  add_action("do_dancing","dancing");
}
int do_dancing()
{
  object me;
  me = this_player();
  if(me->query("class")!="dancer")
return notify_fail("�ร����ֻ�����߲�������~~\n");
 me->move("/open/center/room/inn");
  return 1;
}

inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  set ("short", "ԡ��");
  set ("long", @LONG

�������Է��ڵ�ԡ�ң�����̳ɵĵذ���մ����ˮ����һ��Լˮ�ش�С
��ԡ��ռ�����������䣬��ɴ������һ��������һ������֮�У�ˮ���
�����ܣ��ٻ�Ʈ����ԡ���ڡ�

LONG);

set("exits", ([ /* sizeof() == 1 */
"west":__DIR__"r1.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "west" : (: look_door,     "west" :),
]));
  set("objects", ([ /* sizeof() == 2 */
 "/daemon/class/blademan/npc/maid1.c" :2,
 "/daemon/class/blademan/npc/haing.c" :1,
]));
  set("light_up", 1);
create_door("west","ө��ʯ����","east",DOOR_CLOSED);
  setup();
}
     void init()
     {
    add_action("do_cmd","cmd");
    }
      int do_cmd(string arg)
   {
     object user;
     user=this_player();
   this_object()->kill_ob(user);
     return 1; 
}

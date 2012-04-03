// Room: /open/dancer/room/port.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;
void do_start_ship();

void create ()
{
  set ("short","���¸�");
  set ("long", @LONG
�����Ǿ��µ���Ψһ�ĸۿڣ�Ҳ������뾵�µ��ıؾ�֮�أ���
�����չ����ľ��µ��ọ́���Ȼ��Ҳ�����ڴ˵ش�뿪���¡�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/dancer/room/r7-2.c",

]));
  set("light_up", 1);

  setup();
}
void init()
{
        add_action("board_ship","board");
        do_start_ship();

}

void do_start_ship()
{
        object ob1;
        if(!find_object("ship girl"))
        {
        ob1=new("/open/dancer/npc/ship_girl");
         ob1->move("/open/dancer/room/ship");
        destruct(ob1);
        }
}
int board_ship(string str)
{
        object ob;
        if(!str)
        return notify_fail("��Ҫ��ʲô?\n");
        if(!objectp(ob=present(str,environment(this_player()))))
        return notify_fail("�Բ��� , û���ִ�Ү ?\n");
        if(str=="ship")
        {
        message_vision("$N�ߵ����� , ������������ !\n",this_player());
        this_player()->move("/open/dancer/room/ship");
        return 1;
        }
return 0;
}

  int valid_leave(object me, string dir)
{
if( dir=="east" )
  if( me->query("gender")!="Ů��")
  {if(!me->query("quests/moon"))
     return notify_fail("�㻹û�⿪���µ�֮�ղ��ܽ����!\n");
  }
return ::valid_leave(me,dir);
 }

#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "Ѫħ��");
  set ("long", @LONG
�˴�ΪѪħ��֮���������������ΪѪɫ�����ϵ�Ѫ��һ·ָ��������Ϸ�
����Ѫ�����Ͽ���ֻ��Ѫħ���ڵ��ϵ�������..һ���Ļ����ص����ӣ��ƺ��ѵ����
����..��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room1/blood1/r5.c",
//  "south" : "/open/gsword/room1/blood1/r9.c",
//  "east" : "/open/gsword/room1/blood1/r5.c",
//  "west" : "/open/gsword/room1/blood1/r5.c",
]));

  set("light_up", 1);
  set ( "no_transmit", 1 );
  set("objects", ([ /* sizeof() == 1 */
   "/open/gsword/npc1/bloodking" :1,
]));


  setup();
call_other("/obj/board/appoblood_b","???");
}
void init()
{
  add_action("do_verify","take");
}
int do_verify(string arg)
{
 object me,ob;
 me=this_player();
 ob=new("/data/autoload/swordsman/bloodbook");
 if( arg!="bloodbook")
{
    write("��Ҫ����ʲô\n");
    return 1;
   }
if(me->query("bloodsword")!=2)
  {
    write("�������ⶫ��Ҳû��\n");
    return 1;
  }

 if( present(ob,me) )
  {
    write("���Ѿ���һ����\n");
    return 1;
   }
   else
    {
     write("�úñ��ܴ���, ����Ū����.\n");
     ob->move(me);

     return 1;
    }
}

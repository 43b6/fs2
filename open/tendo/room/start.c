// Room: /open/tendo/room/t08.c
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
 set("short",HIB"����̫����"NOR);
        set("long",@LONG
��˵�еĵ���ʥ��̫��������з������̫��ͼ��( picture)����
�Ե�ǽ������һ�����ĵ�����--�̹ſ���ٵأ�����ŭ������ɽ����
�����յȵ�֪���Ĺ��¡���ϸ�·Ƿ�������������������������ϱ���
ڤ˼��

LONG);
set("item_desc",([
	"picture" : "�÷�: վ����ͼ�εİ˸���λ(stand 1~8)\n"+
"	1.����    2.���г�  3.ƽ�ϳ�  4.������վ    \n"+
"	5.���ƴ�  6.login�� 7.���ָ�  8.ҹ��С��\n",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"t03",
	"north" : __DIR__"eqroom",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/taoist/master_lu" : 1,
  "/open/tendo/npc/taoist1" : 1,
]));
  set("light_up", 1);
  set("valid_startroom", 1);
	set("cango",1);

  setup();
  call_other("/obj/board/tendo_b","???");
}
void init()
{
	add_action("do_into","stand");
}

int do_into(string arg)
{
	object who;
	string room;
        who = this_player();

        if(who->query("class")!="taoist")
        return notify_fail("����������ˣ����ý����ͼ��\n");
    switch(arg)
    {
       case "1":
         room="/open/capital/room/r70";         break;
       case "2":
         room="/open/gsword/room/su3";          break;
       case "3":
         room="/open/ping/room/road4";          break;
       case "4":
         room="/open/center/room/inn";          break;
       case "5":
         room="/open/start/room/s5";            break;
	case "7":
         room="/open/port/room/r3-1";           break;
	case "8":
	room = "/open/dancer/room/cafeteria";	break;
	case "6":
	room = who->query("start_room");     break;
       default:
	}
	if(!room)
		return 1;
	who->move(room);
        tell_room(this_object(),"�㿴��"+who->query("name")+"����̫��ͼ�У���"+
                                "��һ�������Ѳ����ˡ�\n");
        return 1;
}

 int valid_leave(object me, string dir)
{
  if( dir=="north" )
     if( me->query("family/family_name")!="�����")
       return notify_fail("ֻ��������Ӳ��ܽ��롣\n");
   return ::valid_leave(me,dir);
}



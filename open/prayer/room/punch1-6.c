//open/prayer/room/punch1-6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��ʦ�ķ���");
  set ("long", @LONG

    ��ͻȻ�ŵ�һ������ζ����ϸһ���ⷿ�������飬��ʥ��̾�ʦ��
�ڵķ�������黹Ҫ���Ϻü��������ʹ�˾��þ�ʦ����ѧ�����裬����
����ɲ�ĸо��� 

LONG);

  set("light_up",1);
  set("no_fight",1);
  set("exits", ([ /* sizeof() == 1 */
	"out" : "/open/prayer/room/punch1-4",		//`��ʦ
]));

  setup();
}
 

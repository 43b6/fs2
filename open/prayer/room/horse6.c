//open/prayer/room/horse6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG

	    ��ϸһ�����ܣ���ŷ����㼺����ʥ���
	�����ˣ��Ĵ��������������������ؽ���
	��ӵ�е���ƥ����һ�����٣�

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  4*/
	"out" : "/open/prayer/room/train1-2",		//`����
	"north" : "/open/prayer/room/horse5",		//`��
	"south" : "/open/prayer/room/horse7",		//`��
	"east" : "/open/prayer/room/horse3",		//`��
]));

  setup();
}
 

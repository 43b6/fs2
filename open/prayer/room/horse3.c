//open/prayer/room/horse3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG

	    ��ǰ�������������ƥ����Ȼ��Щ��ƥ
	��ʥ����У���������Ͳ�εģ���Щ��ƥ��
	�����ϸ�ѱ�����ģ�

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  4*/
	"west" : "/open/prayer/room/horse6",		//`��
	"north" : "/open/prayer/room/horse2",		//`��
	"south" : "/open/prayer/room/horse4",		//`��
	"east" : "/open/prayer/room/horse1",		//`��
]));

  setup();
}
 

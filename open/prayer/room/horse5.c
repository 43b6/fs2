//open/prayer/room/horse5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG

	    ������һ���������ķ��䣬������û��
	�κ�һƥ��ƥ����ǰ�����Ķ�����ƥ����й��
	������Ҫ�ú������ˣ�

LONG);

  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/horse6",		//`��
	"east" : "/open/prayer/room/horse2",		//`��
]));
setup();
}
 

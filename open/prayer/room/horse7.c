//open/prayer/room/horse7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG

	    ֻ��һ��ѷ�����ķ��䣬�����ֿ���
	����������Ļ���װ������������ƥ�����
	һЩ���ߣ�

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/horse6",		//`��
	"east" : "/open/prayer/room/horse4",		//`��
]));

  setup();
}
 

//open/prayer/room/horse4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG

	    ��������ʥ����ţ�����ר������ƥ����
	���ˣ�ƥƥ��׳�Ŀ�����ʾ��ʥ��̵Ľ׼�
	����εĻ��֣��ж�ע���ˣ�

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/horse3",		//`��
	"west" : "/open/prayer/room/horse7",		//`��
]));

  setup();
}
 

//open/prayer/room/kitchen7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ���Ա����Ŷѻ���ɽ�Ĳˣ�����ʽ������
	���࣬�������Ҫ�����ʳ��⿴����Щ��
	�����Ϳ���֪��ʥ�����һ���ǳ��Ӵ����֯
	�ˣ�

LONG);
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/kicthen4",		//`����
	"west" : "/open/prayer/room/kicthen6",		//`����
]));
   set("light_up", 1);

  setup();
}

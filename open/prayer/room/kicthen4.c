//open/prayer/room/kitchen4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ��ʮ���ĳ�ʦ����Ϊʥ��̵Ľ�ͽ�ţ�׼
	������ζ�ɿڵĴ�ͣ�����ʥ��̵Ľ�ͽ����
	�п�ч�ˣ�

LONG);
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/kicthen7",		//`����
	"west" : "/open/prayer/room/kicthen3",		//`����
]));
   set("light_up", 1);

  setup();
}
 

//open/prayer/room/kitchen5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    �㿴���������ƿƿ�޹ޣ���Щƿƿ��
	���ڣ���װ�����ǲģ��ף��ͣ��Σ������ף�
	��һ��Ķ�����

LONG);
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/kicthen2",		//`����
	"east" : "/open/prayer/room/kicthen6",		//`����
]));
   set("light_up", 1);

  setup();
}
 

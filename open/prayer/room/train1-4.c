//open/prayer/room/train1-4

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ǰ������һ�����ţ����ŵĺ󷽾���ʥ��
	�̵�����԰����԰�������������滨��ľ��
	��˵Ҳ���������޵ĳ�û��

LONG);
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-9",		//`����
	"west" : "/open/prayer/room/garden1",		//`��԰
	"east" : "/open/prayer/room/train1-3",		//`����
]));
	
  setup();
}
 

//open/prayer/room/train1-9

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ʥ�����̳�Ĵ����ȣ������߽�ȥ����ִ
	�����ϵķ��䣮�ϱߵľ�ͷ�ǳ�����������ʥ
	��̵�����԰��

LONG);
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-14",		//`����
	"north" : "/open/prayer/room/train1-4",		//`����
	"enter" : "/open/prayer/room/2elder6",		//`���Ϸ�
]));

  setup();
}
 

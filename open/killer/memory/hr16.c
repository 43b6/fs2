#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "��᫵�ɽ·");
  set ("long", @LONG

	������ǰ����һ�θ����͵�ɽ�£�������������Ŀ���ĵ��ͱڡ�
	������ø�С�ĵ�����һ��ɽ·������ˤ��ȥ�ɲ��ǿ���Ц�ġ�
	Զ���ƺ���ˮ������������ɣ�������ɽ�У�

LONG);

  set("exits", ([ /* sizeof() == 3   */
     "north" : __DIR__"hr17.c",   
     "south" : __DIR__"hr15.c",   
]));

set("objects",([
  "/open/killer/npc/spy4.c":1,]));

  setup();
}

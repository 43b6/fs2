#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	�����𽥽ӽ�Ī������Դ��֮ʱ�������в�����̾�����ߵ����档
	�벻�������ָ�ɽ�Ͼ�Ȼ������ô׳����һ����������
	�뵽����㲻�ɵ�����ӵ�ȥ�ӽ���һ��������������
LONG);

  set("exits", ([ /* sizeof() == 3   */
     "east" : __DIR__"hr19.c",   
     "west" : __DIR__"hr17.c",   
]));

  setup();
}

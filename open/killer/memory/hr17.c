#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	�찡����������ǰ��һ������׵ľ޴�ɽ�ȣ��붫������һɽ��
	�γ���һ��ֱ�ǵĴ�ֱɽ�ȣ�ԶԶ��ȥ���Է��ֶ�����ɽ����һ���޴�ĺ���
	Ī����һ����������Ī������Դ�ӣ����㲻����һ̽����........
	
LONG);

  set("exits", ([ /* sizeof() == 3   */
     "east" : __DIR__"hr18.c",   
     "south" : __DIR__"hr16.c",   
]));

  setup();
}

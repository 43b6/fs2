inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", GRN"��ɳ��"NOR);
  set ("long", @LONG
�����������ҵ����մ�����������������ƺ�����һ�����ڿ�
�����š��ӳ�ɳ���Ͽ����������������ĸ������ڿ������ɵ�Ʈ��
�š�
LONG);

  set("exits", ([ /* sizeof() == 2 */
"south" : __DIR__"room1-3",
"north" : __DIR__"room1-9",
]));
set("outdoors","/open/marksman");

  setup();
}

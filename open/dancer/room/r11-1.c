// Room: /open/dancer/room/r11-1.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
�����ڷ���֮�У�������ȥ����һƬ������ï�ܵ���ľ������
������ȫ�赲��ֻ��Щ����������������롣Ȼ�������ȴ��Ϥ����
����֮����������Ҳ���ǿ쵽�����˰ɡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/dancer/room/r11-2.c",

]));

  set("light_up", 0);

  setup();
}

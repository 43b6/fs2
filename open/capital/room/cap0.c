// Room: /open/capital/room/cap0.c
#include </open/open.h>
inherit ROOM;

void create()
{
  set ("short", "��ԭ");
  set ("long", @LONG
�����һƬƽ̹�Ĳ�ԭ, �ǻ��ϳ���������������, ����Ͻ�һ
�������ڴ��ε�������Կ����ϱߵĳ�ǽ, ���ǻ��Ͼ�ס�Ļʹ���, Ψ
һ��һ����Ҳ�����ڿ����š�

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 1 */
	"west" : MAIN_ROOM"f16",
]));
  setup();
}

// Room: /u/d/dhk/questsfan/room27
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[0;37m�羧[5m[1;36m�����[2;37;0m");
  set ("long", @LONG
��һ���붴Ѩ��ͬʱ����������������ƶ���ľ�
��ɫ�ʶ������ɡ�Ũ���������һ�㡣����ľ�ʯ��͸
��ɢ�����Ĺ�â����ͬ������������һ������Ը�����
��ʯȷ���Ƹ���ħ��һ���������㡣���������������
�����°����ů��������΢������Ĵ������㣬���Ǵ�
�������ǹȵ�ѽ���������������

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"room26",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/stone.c" : 1,
]));
  set("no_transmit", 1);
  set("no_clean_up", 1);

  setup();
}

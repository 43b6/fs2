// Room: /open/badman/room/lake4.c
// written by powell 96.4.26@FS
inherit ROOM;

void create ()
{
  set ("short", "�����ܵ�");
  set ("long", @LONG
�����Ƕ��˺��е�����ͨ�������벻������ﻹ���ж��죬��
��������������ˮ��δ���뵽����������ߺ�����ͨ����ֻ��
��֪����ͨ���ģ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"lake5",
  "down" : __DIR__"lake3",
]));

  setup();
}

// Room: /u/f/fire/room/room1-14.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", GRN"��ɳ��"NOR);
  set ("long", @LONG
��������һ��ֱֱ�����ĳ�ɳ���ϣ���ɳ�����Գ�����֪����Ұ
���Ӳݣ���ˬ��΢��������Ĵ��������������������գ�ʵ������
���������þ��޷�������
LONG);

  set("exits", ([ /* sizeof() == 2 */
"north" : __DIR__"room1-21",
"south" : __DIR__"room1-13",
]));
set("outdoors","/open");

  setup();
}

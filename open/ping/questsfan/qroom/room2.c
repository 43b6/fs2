#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�羧�ź��");
  set ("long", @LONG
���ŵĺ��ο�����ΪԽ��Խ�ӽ���һ���ˣ�ͬʱҲ
��Զ����������ˣ���ǿ����������Ҳ���������ˡ�����
̤��½�ص���һɲ�ǡ��ٸн���ٲȻ���øմӹ��Ź�����
һ�⣬�����˵Ĺ��˻����ˡ���������½���ϵĸо���̤
ʵ��������

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room1",
  "north" : __DIR__"room5",
]));

  setup();
}

// Room: /u/m/moner/water/mblade/r9.c
inherit ROOM;

void create ()
{
  set ("short", "�η�");
  set ("long", @LONG

����һ����Σ��������յ�����������һ���ˣ�����������ˮ��
���ڽ���һ��ʯ����

LONG);

  set("exits", ([ /* sizeof() == 1 */
"east":"/open/gblade/room/room20.c",
]));
set("objects",([
"/daemon/class/blademan/npc/wman.c":1,
]));
set("no_transmit", 1);
  setup();
}

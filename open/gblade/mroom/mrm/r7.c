// Room: /u/m/moner/water/r7.c
inherit ROOM;

void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG

    ������ħ���ŵĹ㳡����ħ�������ټ���ͽ���������գ�������
�ǳ�ʱ�̵���Ҫ�ط����㳡���ϡ����������죬����������������ǧ
�ˡ�

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 3 */
"north":__DIR__"r7-1.c",
"west":"/open/gblade/room/mrm1/r2.c",
"south":__DIR__"r1-1.c",
  "east" : __DIR__"r6.c",
]));
        set("objects",([
"/open/gblade/npc/man1.c":3,
]));
  setup();
}

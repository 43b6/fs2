// Room: /open/gblade/room/room5.c
inherit ROOM;

void create()
{
  set ("short", "С��");
  set ("long", @LONG

����һ����С������ǰ��ȥ��ֻ����ʯ���飬�����֣�����
���ޣ��ݺṰ����·��̦�ʰ߲���������ӳ�䣬ֻ������С·������ǰ��
ǰ����������Ļ��㣬�����������㲻����Щͷ��Ŀѣ��
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room27.c",
  "east" : __DIR__"room4.c",
"south":__DIR__"room6.c",
]));
  setup();
}

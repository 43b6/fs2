// Room: /u/m/moner/tree/room4.c
inherit ROOM;

void create ()
{
  set ("short", "С��");
  set ("long", @LONG

����һ����С������ǰ��ȥ��ֻ����ʯ���飬�����֣����� 
���ޣ��ݺṰ����·��̦�ʰ߲���������ӳ�䣬ֻ������С·������ǰ��
ǰ����������Ļ��㣬�����������㲻����Щͷ��Ŀѣ��

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room28.c",
  "east" : __DIR__"room5.c",
]));

  setup();
}

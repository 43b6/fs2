// Room: /u/m/moner/tree/room28.c
inherit ROOM;

void create ()
{
  set ("short", "ӳ����");
  set ("long", @LONG

���ʵ�ɽ������ֱת���£� һĨ���������µ�����ǰ����˳��ɽ������
��ȥ�����Ե��µ��ϳ�����Ұ�����ӻ���ӳ�����⣬���绨����һ�㣬���ٸ�
�����£�ֻ��ˮ���仨Խ�࣬��ˮԽ�峺����ǰֱ�ߣ�ˮʶԽ�죬����������
�������ڵ�������

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room2.c",
"north":"/open/gblade/room/room29.c",
]));

  setup();
}

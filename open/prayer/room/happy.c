// Room: /u/r/rence/room/happy.c

inherit ROOM;

void create ()
{
  set ("short", "ϲ��");
  set ("long", @LONG

���ŵ��Ϸ���һ��ľ����ͷ�����Ļ�д�š�"HIR"ϲ��"NOR"����������
�������㣬�������ܳ������������ֲ�΢�紵����������֮�ڵ�����
һ�����ĵ����ա�������վ��һΪ�Ӵ�Ա��Ц�����������㡣

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/u/r/rence/npc/gmob2.c" : 1,
]));
  set("outdoors", "/u/r/rence");
  set("exits", ([ /* sizeof() == 2 */
        "out" : "/u/r/rence/room/road",
        "enter" : "/u/r/rence/room/floor5",
]));

  setup();
}
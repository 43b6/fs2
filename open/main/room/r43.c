// Room: /open/main/room/r43.c

inherit ROOM;

void create ()
{
  set ("short", "����·��");
  set ("long", @LONG
�����ڻҳ�������ʯ��·�ϣ������Ѿ��൱�ӽ��置�ˣ���
�����������Ǳ�����������: ƽ�ϳ�. �����ڴ�פ���ر����Է�
���置��������. ��·�ڴ�����������������.
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/wu/npc/k_tiger" : 1,
  "/open/main/obj/torch" : 1,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L24",
  "north" : __DIR__"r39",
  "west" : __DIR__"r42",
  "east" : __DIR__"r44",
]));

  setup();
}

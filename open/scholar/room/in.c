// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "���ô���");
  set ("long", @LONG
���������ŵ����ã����Է������������
���Σ����Ϸ������ķ��ı���ֻ�����ĳ�����
�����������������ֻ�����������ŵ����ã�
���������ǳ���������ҹ����Ϣ���Է���
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"area2.c",
  "west" : __DIR__"in3.c",
  "north" : __DIR__"r20.c",
  "east" : __DIR__"in2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/fall.c" : 1,
]));

  setup();
}

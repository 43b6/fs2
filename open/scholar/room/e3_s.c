// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "���᷿");
  set ("long", @LONG
����ѧʶ�������᷿������Կ���ѧʶ���ĳ����������Ǳ�
����������������һ�㣬�治֪��������������Щʲô��������
�����в���������
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"e3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/old_scholar.c" : 1,
]));

  setup();
}

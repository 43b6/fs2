// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "���᷿");
  set ("long", @LONG
���Ǽ�ı�������᷿������Կ�����ı���ĳ����������Ǳ�
���������ű����ڵ���ͼ�����Ǻţ���ϸ�����ŵ���ͼ�ŷ�����
�������ܵĵ��Σ����������������ŵķ�������ͼ��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"w3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/old_scholar2.c" : 1,
]));

  setup();
}

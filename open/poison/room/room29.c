inherit ROOM;

void create ()
{
  set ("short", "ũ������");
  set ("long", @LONG
������ũ�ҵ����� ,��������һλ���ż��ӵ����� ,����������
��������˰� ..... ?����������Ϭ�������� ,������һ���
ũ��� ,����� ,������ô���������˨� ?

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room31",
  "north" : __DIR__"room30",
  "west" : __DIR__"room28",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/long.c" : 1,
]));

  setup();
}

inherit ROOM;

void create ()
{
  set ("short", "ũ��ǰԺ");
  set ("long", @LONG
������һ��ũ�ҵ�Ժ�� ,�м�ֻ���ڹ㳡�����еĶ��Ų��� ,ʱ
���������� ,ʱ����ͷ��ʳ ,��һ��������ũ���龰�� .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room25",
  "east" : __DIR__"room29",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/start/npc/hen.c" : 2,
]));

  setup();
}

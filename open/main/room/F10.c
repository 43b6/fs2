// Room: /open/main/room/F10.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������һƬŨ�ܵ�ɭ�֣��ߴ����ľ����֯��֦Ҷ������
���ո��ڱ��ˣ�����ϸ�������ƺ���Ұ��������Х����������
���뿪����.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"F9",
  "east" : __DIR__"F11",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/lion" : 1,
]));

  setup();
}

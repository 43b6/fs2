// Room: /u/u/unfinished/room/is2.c
inherit ROOM;

void create ()
{
  set ("short", "б��");
  set ("long", @LONG
���߶��͵�б��, ��ض��Ǽ�Ӳ�Ĵ���ʯ, ����ֻ�м���ɿݵ�����, ����
������, ����������Ӧ�������ĵ���. ����������, ��ľ����ʮ�ָߴ�, ������
�������յ�����, ���ߵ����ֿ���������ʮ����ɭ. ������������ȥ����ʯ����
.

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"is1",
  "east" : __DIR__"is3.c",
]));
  set("outdoors", "/u/u");

  setup();
}

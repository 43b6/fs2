// Room: /open/badman/room/forest14.c
// written by powell 96.4.26@FS
inherit ROOM;

void create ()
{
  set ("short", "ɭ�ֱ�Ե");
  set ("long", @LONG
ͻȻ���۾�һ���������뿪�������ɭ�֣����������������
�ܣ�������Ƭïʢ�����֣��������ǻص��Ǹ������Ķ���ɭ�֡�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"forest15",
  "north" : __DIR__"forest13",
]));
  set("outdoors", "/open/badman");

  setup();
}

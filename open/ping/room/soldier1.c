// Room: /open/ping/room/soldier1.c
inherit ROOM;

void create ()
{
  set ("short", "��Ӫ����");
  set ("long", @LONG
�������,���Ǳ�����ƽ�ϳǵ�פ������,�����Ǿ�Ӫ�Ĳ���
,�㿴���������æ�Ű��˶���.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/soldier" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"soldier2.c",
  "east" : __DIR__"road9",
]));

  setup();
}

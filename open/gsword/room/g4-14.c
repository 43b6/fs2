// Room: /open/gsword/room/gsword6-1.c
inherit ROOM;

void create ()
{
  set ("short", "С��");
  set ("long", @LONG
����վ��һ��ʯ���� ,���ŵ͵͵����ͻ�������֮�˲�����ˮ ,��ֻԧ
������������ ,���ֿɼ� .

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/trainee-7.c" : 1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g4-16.c",
  "east" : "/open/gsword/room/g4-7.c",
]));

  setup();
}

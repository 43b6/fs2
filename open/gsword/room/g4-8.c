// Room: /open/gsword/room/g4-8.c
inherit ROOM;

void create()
{
 set("short", "������");
  set ("long", @LONG
������֣ʿ����������������ĵط� ,����Ļ���Ʈ�� ,���˾����
����ˬ, �������� ,�����˾����������� .

LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"g4-13",
]) );

set("objects",([
  "/open/gsword/npc/lu.c" : 1,
]));
  setup();
}

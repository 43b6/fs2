// Room: /open/main/room/to_chun2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "�����");
  set ("long", @LONG
����ϴ˵�, һ�ɿ�����ӭ�洵��, ��վ��ס��, ��Щ��Ҫ
ˤ��, ֻ��һ��������������ɽ�±�, ��������Զ��, �㿴�����
����, ͻȻ����, ���˱��Ƕ�����!
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"to_chun1.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/chun.c" : 1,
]));

  setup();
  replace_program(ROOM);
}

// Room: /open/badman/room/eqroom.c
inherit ROOM;

void create ()
{
  set ("short", "���˵�EQ������");
  set ("long", @LONG
���������ö�����Ϣ�����˵�ǰ��Ϊ��Ҫ�չ˺������ı��ﴢ����...
���������ı���..���Ҫ��...��л�ȱ����չ�.... .
LONG);

  set("light_up", 1);
  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"g1",
]));
  set("no_fight", 1);

  setup();
}

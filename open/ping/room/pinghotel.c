// Room: /open/ping/room/pinghotel.c
inherit ROOM;

void create ()
{
  set ("short", "ƽ�Ͽ�ջ");
  set ("long", @LONG
������ƽ�ϳ����Ŀ�ջ,����ÿͶ���������Ϣ,��Ҳ����
��������ЩС��,��㼢��µµ�Ķ���.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road2",
]));
  set("light_up", 1);

  setup();
}

// Room: /open/capital/room/wulaih2
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����һƬ��ڡ��йɶ��ĵĳ�ζ�����Ǳ��̫�õúá��ذ��´���
Щ��ϸ΢�����������˿��ذ壬�ƺ��а��š�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"wulaih",
  "down" : __DIR__"j1",
]));
  create_door("down","����","up");

  setup();
}

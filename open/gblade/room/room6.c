// Room: /u/m/moner/tree/room6.c
inherit ROOM;

void create ()
{
  set ("short", "޵������");
  set ("long", @LONG

һ��Ƭ��޵����������������ǰ�������޵�������Ʈ�ͣ����ֱ
�������㲻Ҫǰ�����������̲�ס���ĵĺ��档
����Ĳ�ϼ��������ʣ�һĨϦ����������ʧ�ڵ�ƽ�ߡ�

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room7.c",
  "north" : __DIR__"room5.c",
]));

  setup();
}

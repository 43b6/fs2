// Room: /open/capital/room/h10.c

inherit ROOM;

void create ()
{
  set ("short", "֥���ͬ");
  set ("long", @LONG
����Կ������Ե������ݶ��ϲ�ʱð������Ĵ��̣���������ӹ�
�๾��Ľ�������������ı�����һ��ȫ��֪����ʳ�ý�������ʳ�ã�
����Ȱ������Ǯ����ǧ����ȥ��

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"h09",
  "north" : __DIR__"food",
  "east" : __DIR__"h11",
]));
  set("outdoors", "/open/capital");

  setup();
}

// Room: /open/capital/room/j2
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
��̸������Խ��Խ����ǰ��Ҳ��Щ����ߡ����ɵ���ð�շ���һ��
��ǰȥ���������ڸ���ô����������¥�ݵ����ҡ�������Ȼ�ǲ�����
̦��ʯ�ڡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"j4",
  "south" : __DIR__"j1",
]));

  setup();
}

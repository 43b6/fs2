// Room: /open/gsword/room/g2-1.c
inherit ROOM;

void create()
{
  set ("short", "ҩ��");
  set ("long", @LONG
һƬ������ҩ�� ,�滮�ĺ����� ,��ʽ������ҩ�� ,���ű��� ,����
���� ,���Ϸ���ΪһƬ�ͱ� ,����������ҩ�� .

LONG);

  set("light_up", 1 );
  set("outdoors", "/open/gsword/room" );

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"g2-4",
]) );

  setup();
}

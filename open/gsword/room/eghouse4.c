// Room: /open/gsword/room/eghouse4.c
inherit ROOM;

void create()
{
  set ("short", "��ʦ�ֵ��޾�");
  set ("long", @LONG
�����ɽ��ɴ�ʦ�ֵ��޾ӣ������һ�ź��������ʯ����
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"eghouse3",
]) );

  setup();
}

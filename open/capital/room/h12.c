// Room: /open/capital/room/h12.c

inherit ROOM;

void create ()
{
  set ("short", "֥���ͬ");
  set ("long", @LONG
֥���ͬ��������������һ�����˶���֪����, ֻ֪����Ҷ�����
ô��������ͬ��, �����û����֥��, Ҳû����֥��, ����ֻ����ͨ��
��լ���ѡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h11",
  "east" : __DIR__"r70",
]));
  set("outdoors", "/open/capital");

  setup();
}

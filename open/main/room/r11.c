// Room: /open/main/room/r11.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
���������Կ����ϱ߸���ֱ���ıʼ�ɽ, ��������ǧ�����
ɽ, ��˵��, ��ɽ�����н��ɳ�û, ��������·�ϵ���, �������
���Ž��ɽ������¼�������, Ҳ������Ϊ��Ѱ��, ��֮, ��������
���ð�����, �������ܱ���֮���ƺ�������֮����Ҫ��! ��·�ڴ�
���ϱ�����.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r18",
  "north" : __DIR__"r8",
  "east" : __DIR__"m2",
]));

  set("outdoors", "/open/main");

  setup();
}

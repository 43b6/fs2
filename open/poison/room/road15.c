// Room: /open/poison/room/road15
inherit ROOM;

void create ()
{
  set ("short", "ǰԺ");
  set ("long", @LONG
��������ڤ��ħ�̵�ǰԺ��Ժ���������˼��ò�������
��������Ҷ���Ʈ���ʹ���˫�գ��м������ɺ���������
�ɵ��������·����Ϊ��������Ĳ�Ƥ��Ժ�ӵı�����һ��
ΰ�ĵ��á�
LONG);

  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road14",
  "north" : __DIR__"room6",
]));

  setup();
}

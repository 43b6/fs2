// Room: /u/s/sueplan/newplan/area/f10.c
inherit ROOM;

void create ()
{
  set ("short", "[1;37m��ɽɽ��[0m");
  set ("long", @LONG
����������ɽ��������ɽ������ͦ�β��ɸ������ƣ�ɽ���������ֵ���
��͸�ż�������̩Ȼ��·��������ɽ������һ���������������ˮ��������
���ݺ������̲�ס��ǰ����һ�����£�������ɽȪ��͸�ķ����������
ȫ���������ӵص���ɽ·��
LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"f9",
  "north" : __DIR__"f11.c",
]));

  setup();
}

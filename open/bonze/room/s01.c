// Room: /open/soulin/room/s01
inherit ROOM;

void create()
{
  set ("short", "������ǰ�㳡");
  set ("long", @LONG
	��ǰһƬ���Ŀյأ�Ϊƽ��ʱ���ڵ�������֮��
	�ڡ�

LONG);

  set ("outdoors", "/open/soulin");

  set ("exits", ([	//sizeof() == 2
      "east"	:	__DIR__"s02",
      "north"	:	__DIR__"s04",
  ]) );

  setup();
}

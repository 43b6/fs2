// Room: /open/gblade/port/room/p1-3.c
inherit ROOM;

void create ()
{
  set ("short", "����㳡");
  set ("long", @LONG
����һ����㳡 , �����ϱ�������·�����˷��ָ۵�����
�����Ƿ��ָ۵����ĵش� , �ֵ��������������� , �е��� , 
������ , Ҳ��Щ���������ÿ� , ���Ǹ��廨���ŵĳ��� ,
�����Ƿ��ָ���ٵ���ҵ�ش� , �ϱ�Ϊ�۸����� , ������
�ǵ��͵Ĵ�Ӫ .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"p1-2",
  "south" : __DIR__"p3-1.c",
  "west" : __DIR__"p2-1.c",
  "east" : __DIR__"p1-4.c",
]));

  setup();
}

// Room: /open/gblade/port/room/p1-4.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
����һ��ʯ���̳ɵĴ�� , ·�����˴������һ�ѵ� ,
�ƺ����˶������书 , �����㻹�������������Ϊ�� , ����
һ��ƽ�� , һЩ���ͽ��������� , Ҳ����ù�ȥ���ƿ� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"p1-5.c",
  "west" : __DIR__"p1-3",
  "east" : __DIR__"p1-7.c",
]));
	set("objects",([
	"/open/gblade/port/npc/blademan":1,
	]));

  setup();
}

// Room: /open/main/room/r25.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "��������һ��ɽ����, Ҳ�������������, ���ﲻ��, ����
���˵���, �⸽����ɽ������������ҩ�ݳ���, ��˲�ҩ�ݵ�����
��ʿ��Զǧ�����. ��·�ڴ˳ʶ�������.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"M12",
  "west" : __DIR__"r24",
  "south" : __DIR__"m17",
  "east" : __DIR__"r26",
]) );

  set("outdoors", "/open/main" );


  setup();
}

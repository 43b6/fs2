// Room: /open/capital/room/r48.c

inherit ROOM;

void create()
{
	set("short","��ƽ��");
	set("long",@LONG
������СϪ��������˴������š�Ϊ�˼��ʮ�������̫ƽ����
�۰�����ȡΪ��ƽ����������ɫ�Ĺ��ţ����ߵ�ʯ����̵�������ۼ��
�Ų������������൱�Ŀ�����Ϊ����ϳ۵�����Ƶġ�

LONG);



  set("outdoors", "/open/capital" );

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r49",
  "south" : __DIR__"r47",
]) );

  set("gopath", "south" );

  setup();
}

// Room: /open/main/room/r18.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set( "build", 10 );
	set("long", "���������Կ����ϱ߸���ֱ���ıʼ�ɽ, ��������ǧ�����
ɽ, ��˵��, ��ɽ�����н��ɳ�û, һ�ɾͷɵ��ʼ�ɽ, ������
�������ڸ���֮��, Ҳ����̧ͷ�����ϰ��. ��·�ڴ˳��ϱ�����
, �Ϸ��������ƴ�.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"r11",
  "south" : "/open/start/room/s9",
  "east" : __DIR__"m8",
  "southwest" : __DIR__"b1",
]) );

  set("outdoors", "/open/main" );


  setup();
}

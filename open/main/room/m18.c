// Room: /open/main/room/m18.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
��������һ��������ͷ, ΢΢�ķ��������, ����ʲ
ô��û��, ����ֻ��ãã��«�������졣
    ����ͨ����ͨ����������ߺ��ϱ߿�ȥ�Ծ���һƬ��
�ꡣ����������·����������������ɽɽ�����Ǳ��ƺ���
�������ǵ����ҷ塣
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"m27",
  "northdown" : __DIR__"r29",
  "east" : __DIR__"m19",
  "westup":__DIR__"M16",
]) );

  set("outdoors", "/open/main" );


  setup();
}

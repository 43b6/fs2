// Room: /open/main/room/[2].c

inherit ROOM;

void create()
{
	set("short", "���гǽ�");
	set( "build", 22 );
	set("long", "�㿴����ı�����һ���ǣ����߱��٣�ɷ�����֣���Ӧ������
��Ҫ�����г���. ����Ե����￴����Ҳ��������Ҫ�Ķ���. ��·
�ڴ˳��ϱ�����.
");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r4",
  "north" : "/open/gsword/room/su0",
]) );


  set("outdoors","/open/gsword");
  setup();
}

// Room: /open/ping/room/road1.c
inherit ROOM;

void create ()
{
	set("short", "ʯ����");
	set("long", "�߽���ƽ�ϳ�,����һƬ����ƽ��,���Ҳ������ս������Ϣ
,·�ϵ�������������,ż���м�λ����ͨ��, ����һ���Ž��ŵ�
ζ��,��������ƽ������,Ҳ\\������Թ�ȥ����.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/poison/room/pingroom.c",
//"south" : __DIR__"war_room",
  "west" : __DIR__"road2.c",
  "east" : __DIR__"edoor",
]) );

  set("outdoors", "/open/ping" );


  setup();
}

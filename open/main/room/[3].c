// Room: /open/main/room/[3].c
inherit ROOM;
void create()
{
	set("short", "����");
	set("long",
"��������һ�������ĵط�, ���ҵ��Ӳ���, �����ż�����Ҳ��,
�ߴ������, ���������, ����һ˿����Ҳ͸����, �������������
�������ֵĵط�, �����Ѿ����˾���, �����㻹�ǸϿ��뿪Ϊ��.
");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r44",
  "south" : __DIR__"s29",
]) );
  set("objects", ([
      "/open/main/npc/shie-chiun" : 1,
      ]) );
  setup();
}

void init()
{
  set("no_reset",1);
}
// Room: /open/gblade/port/room/p2-1.c
inherit ROOM;

void create ()
{
    set("short" , "ʯ����");
  set ("long", @LONG
�����Ƿ��ָ���ٵ���ҵ���� , һ��̯����·���� , �U����
Ŀ�Ļ�Ʒ , ��������Ŀ��Ͼ�� , ��ϸ���� , Ҳ�������������
��� , ������ȫ�������Ĵ�Ǯׯ , �ϱߵ��̵� , ����֮��ȫ ,��
ȫ��Ҳ����һ������ .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
/*
  "south" : __DIR__"p2-6.c",
*/
  "north" : __DIR__"p2-5.c",
  "west" : __DIR__"p2-2.c",
  "east" : __DIR__"p1-3",
]));
	set("objects",([
	"/open/gblade/port/npc/man":1,
	]));

  setup();
}

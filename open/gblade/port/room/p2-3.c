// Room: /open/gblade/port/room/p2-3.c
inherit ROOM;

void create ()
{
   set("short", "ʯ����");
  set ("long", @LONG
�����Ƿ��ָ���ٵ���ҵ���� , һ��̯����·���� , �U����
Ŀ�Ļ�Ʒ , ��������Ŀ��Ͼ�� , ��ϸ���� , Ҳ�������������
��� , �������� , ��Ҫ���ĵ� , �Լ��ĺɰ���Ҫ������ ! ������
һ�ҳ���� , ��ȥ������ ! �����ǻʵ�����ʶ�����ʦ���ݺ�����
�ĵ� , �򼸿������������ !

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"p2-9.c",
  "west" : __DIR__"p2-4.c",
  "east" : __DIR__"p2-2",
]));
	set("objects",([
	"/open/gblade/port/npc/man":1,
	]));

  setup();
}

// Room: /open/gblade/port/room/p3-1.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����ʯ��· , ո�µĽ��� , ���ٵĽ־� , �������Ǹ�
ϣ��֮���� . ��·�����νӸۿ� , ·�϶�������Ը���½��
�� , ��Щ�˱��Ӹ߸ߵ� , ͷ���ǽ��ɫ�� , ������� , Ҳ
��Щ����ڤħ������ , ������������� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"p3-2.c",
  "north" : __DIR__"p1-3",
]));
	set("objects",([
	"/open/gblade/port/npc/traveller":1,
	]));

  setup();
}

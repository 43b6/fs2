// Room: /open/gblade/port/room/p2-9.c
inherit ROOM;

void create()
{
  set ("short", "���������");
  set ("long", @LONG
һ���žͱ�һ��ŧŧ�����������Χ , �㿴��һ������ͺͺ��
���ʦ���Ӻ�������� , ��ֵ��� , �������ֻ��һ����� ---
������� , ������ʦ�Ѳ���ֻ����������� ?

LONG);

  set("light_up", 1);
	set("objects",([
	"/open/gblade/port/npc/breader":1,
	]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p2-3",
]));
  setup();
}

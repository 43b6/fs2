// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��������Ϣ��");
  set ("long", @LONG
�����������Ӷ�Ա��Ϣ�ĵط� . СС�ķ�������ż���ľ��
������ , ������ֵ����ϵ��������ڴ��ݲ� , ���� , ��������
�õ����� .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r6-3",
]));
	set("objects",([
	"/open/port/npc/guard2":3,
	]));

  setup();
}

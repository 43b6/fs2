// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","����̨�ײ�");
  set ("long", @LONG
����������̨�ĵײ� , ��ǽ����Ҳ���˾�ͷ . ����̨�Ǹ�
Բ�εĽ����� , ��˵������һ���������ʦ����Ƶ� , �Ƿ���
����Ŀ�ĵر�֮һ . ��������ǽ����Χ�������� , �պ����˸�
ԲȦ . �����������̨�� .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r6-6",
	"up" : "/open/port/room/r6-8",
]));
	set("objects",([
	]));

  setup();
}

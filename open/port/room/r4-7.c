// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","���ͽ�����");
  set ("long", @LONG
�����ǵ�����ƽʱ���� , ��ƨ�ĵط� . ���ܰ��˼�������
 , ������ڴ˺úõ���Ϣһ�� . ��������ְҵ���˲��ܽ��� ,
�ܶ�����ĵ��ͻ��Щװ���ڴ� , ���չ˺� .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/port/room/r4-6",
]));
	set("objects",([
	]));

  setup();
}

// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","������");
  set ("long", @LONG
�����Ƿ��ָ۵������� . ԭ���ķ���ֻ�Ǹ�ƶ���С���
 , ��ʮ����ǰ�����ۿں� , ��Ϊ���˵ķ����������ҵ�ķ��� 
. �������Ŀ��ٷ�չ��չʾ��������ʢ������ . ����һ��������
�ŵĳ��� . ������һ��Ǯׯ .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/port/room/r1-1",
	"south" : "/open/port/room/r1-3",
	"west" : "/open/port/room/r1-5",
	"east" : "/open/port/room/r6-1",
]));
	set("objects",([
	]));

  setup();
}

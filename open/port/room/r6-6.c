// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��ǽ��");
  set ("long", @LONG
����վ�ڷ��ָ۱���ĳ�ǽ�� . �����߿�ȥ , �м���ȫ��
��װ����������Ѳ���� . ��ʵ�����������⻼�����Ϸ� , ��ˮ
·���������� . ������Բ�����ڽ�Ϊ�������� , ���޵й� . 
����Ϊ����̨ .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"southdown" : "/open/port/room/r6-3",
	"east" : "/open/port/room/r6-7",
]));
	set("objects",([
	]));

  setup();
}

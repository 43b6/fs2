// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","����");
  set ("long", @LONG
�����Ƿ��ָ۵ĺ��� . Ϊ�⺣ˮ���� , ���������⵽����
 , �������ں����Լ�����һ������ . �̷����м����������ڴ�
�� . ���߼������ , ϡϡ�����ͣ�ż����洬 . �Դ��̸۽���
�Ժ� , �󲿷ݵ����񶼴���ȥ�� , �������Ҳ���һ��ǧ�� , 
��ǰ�������洬��ʢ�� , ��Ҳ����Ŀ���� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r5-3",
	"north" : "/open/port/room/r5-6",
]));
	set("objects",([
	"/open/port/npc/fisherman":2,
	]));

  setup();
}

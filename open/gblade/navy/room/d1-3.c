// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","ʯ����");
  set ("long", @LONG
��������һ���ֿ���ƽ̹��ʯ������ . �Դӷ��ֽ���֮��
���ܱ㲻����Ϯ , ��͢�м��ڽ�ƾ�����ӱ�����������ȷ���ۿ�
��ȫ , �����ڴ˽���ˮ�� , �Ե������ . ���߼�Ϊˮ���ܶ���
 , �����Ǹ����䳡 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/gblade/navy/room/d1-2.c",
	"east" : "/open/gblade/navy/room/d1-4.c",
]));
	set("objects",([
	]));

  setup();
}

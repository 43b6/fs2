// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�ĺ�����");
  set ("long", @LONG
���������µ����ܱ��� . ���ڵĳ���򵥶������� , ����
һ��̫ʦ�� , �����᳤��һ�����߳ϵĻ�ӭ����ĵ��� . ����
�ܲ�����ʮ��ǰ������Ǩ���� , ���˸����� , ����Ҳ�������
 . ������ڴ˼���(join)���͵����� . �ϱ��ǵ��͵Ľ����� .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/port/room/r4-7.c",
	"north" : "/open/port/room/r4-3",
]));
	set("objects",([
	"/daemon/class/blademan/master":1,
	"/open/port/npc/blademan":1,
	]));

  setup();
}
int valid_leave(object me, string dir)
{
	if(me->query("class")!="blademan"&&dir=="south")
return notify_fail("����ֻ�е����ܹ���ȥ!\n");
return ::valid_leave(me,dir);
}

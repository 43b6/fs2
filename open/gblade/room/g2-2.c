inherit ROOM;

void create ()
{
  set ("short", "ͨ������");
  set ("long", @LONG

����������լ��������Ժ��ͥ԰������ǰһ����ֻ����ʯ���򣬻�����
���������ޣ��ݺṰ��������̦Ѣ�߲���������������ӳ������΢¶��
С����

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/b-guardian" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"g2-3.c",
  "south" : __DIR__"g2-1.c",
]));

  setup();
}
int valid_leave(object me,string dir)
{
	if(dir=="west"&&present("guardian",environment(me)))
	{
	if(me->query_temp("weapon"))
	return notify_fail("ͭ����Ժ��ס�����ȥ· ,˵�� :�������������������Ժ \n");
	}
	return 1;
}

inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG

�ߵ�������ͻȻ�����е㲻̫�Ծ����ܾ����ж����������ԣ����ܾ���
��һ������쬵ĸо�������ֻ�Ǻ��������ĸо�����������о�����
����һ��������ȫ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"c2-7.c",
  "east" : __DIR__"c1-2.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/gblade/npc/mob7.c" : 1,
  "/open/gblade/npc/mob6.c" : 1,
]));

  setup();
}
int valid_leave(object me,string dir)
{
	if(dir=="west"&&present("nine-switch tortoise",environment(me)))
	{
	if(me->query("pass_gblade")<6)
	return notify_fail("���׾�β�����ס�������· !!\n");
	}
	if(dir=="east"&&present("dragon",environment(me)))
	{
	if(me->query("pass_gblade")<7)
	return notify_fail("����Ӧ����������ǰ���㲻��ǰ�� !\n");
	}
	return ::valid_leave(me,dir);
}

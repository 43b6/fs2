inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG

һ������̱ǵ�Ѫ��ζֱ�����������꣬��Ȼ�ѱ�����ס�ˣ���ζ����
�������ܴ�ëϸ�������ȥ��ֱ������Բ������Ͼ���Ѫ�������⣬��ʵ
��û�������ѽ���������̤��ȥ����ͷ�м�ֻ��֪���Ĺ�����ץ��һ����
��ʬ�����Ǵ����á�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c2-2.c",
  "north" : __DIR__"c2-4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/mob3" : 1,
]));

  setup();
}
 int valid_leave(object me,string dir)
{
	if(dir=="north"&&present("two-heads snake",environment(me)))
	if(me->query("pass_gblade")<3)
	return notify_fail("����˫ͷ�ߵ�ע�����ȥ· , ����ҡҡͷ !\n");
	return ::valid_leave(me,dir);
}

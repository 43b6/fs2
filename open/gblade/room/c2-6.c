inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG

�ص��������･���Ŀ�ʼ������б���㼫����ǰ��ȥ--��ѹѹ��һƬ��ʲ
ôҲ������������һƬ���ţ�����Ҳ��˷������˵����죬�·���������
�۷�������߷��裬������ʶ�Ļ���˫�֡�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c2-5.c",
  "east" : __DIR__"c2-7.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/mob5.c" : 1,
]));

  setup();
}
int valid_leave(object me,string dir)
{
	if(dir=="east"&&present("big rat",environment(me)))
	if(me->query("pass_gblade")<5)
	return notify_fail("������������ڵĵض��������� !\n");
	return ::valid_leave(me,dir);
}

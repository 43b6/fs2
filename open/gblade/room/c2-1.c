inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG

��������ӭ�洵�������еĻ��Ҳ�������������㿴��̫������ܵĻ�
����һ����С�ģ���ʯͷ����һ�ӣ������˵��ڵ��ϣ�����������Ȼ��
�־�Ȼ����һ�߸������õ�ʬ�����棻������ʬ���Ǳ�Ұ��ҧ�����ϵ�
�������ģ�ʬ��ı�ҧ����Ŀȫ�ǣ����м������ӿ�����Ӧ�����۾��ͱ�
�ӵĵط�������������ͻȻ�е�θ��һ���ʹ������һ�ء�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c2.c",
  "north" : __DIR__"c2-2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/mob1" : 1,
]));

  setup();
}

int valid_leave(object me,string dir)
{
	if(dir=="north"&& present("fly-head adultoid",environment(me)))
	if(me->query("pass_gblade")<1)
	return notify_fail("��ͷ�浲ס�����ȥ· , �ƺ��������ȥ !\n");
	return ::valid_leave(me,dir);
}

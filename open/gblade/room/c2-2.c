inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG

�ص���������ͻȻ��÷ǳ�����խ�����һ����ͨ�л�����û���ϰ�����
�˺��������������������ǿ�ļ���ͨ�����ò����װ����ϵķ��ͼ��ĸ�
�ɾ������ڼ�����ͨ��������ȫ��Ҳ��ʯ���ϼ����ʯͷ�����ñ�������
�ˡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c2-1.c",
  "north" : __DIR__"c2-3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/mob2" : 1,
]));

  setup();
}

int valid_leave(object me,string dir)
{
 	if(dir=="north"&&present("curious snake",environment(me)))
	if(me->query("pass_gblade")<2)
	return notify_fail("���ŵ��������ǰ , ������ͨ�� !\n");
	return ::valid_leave(me,dir);
}

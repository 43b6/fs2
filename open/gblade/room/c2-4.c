inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG

ɢ��һ�صĹǺ���Ҳ�ֲ�����������˵ĺ��ǻ���Ұ�޵�ʬ�ǣ����ϲ�ʱ
����һ����ĺ��磬����Ƥ���ֱð����֪������Ϊ����ĺ������㷢
�䣬�ֻ����Ǳ�صİ׹�����ë���Ȼ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c2-3.c",
  "north" : __DIR__"c2-5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/mob4" : 1,
]));

  setup();
}
int valid_leave(object me,string dir)
{
	 if(dir=="north"&&present("gold-brachium roc",environment(me)))
	if(me->query("pass_gblade")<4)
	return notify_fail("���Ÿ���ȶ������㴵�˻�ȥ !\n");
	return ::valid_leave(me,dir);
}

inherit ROOM;
void create() {
	set( "short", "$HIW$С��$NOR$��$HIG$��$NOR$" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/capital/obj/blade2",
		"file2"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount7"  : 1,
		"amount10" : 1,
		"amount9"  : 1,
	]) );
	set( "owner", "freaky" );
	set( "light_up", 1 );
	set( "build", 11700 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room143",
		"west"      : "/open/clan/ou-cloud-club/room/room135.c",
	]) );
	set( "long", @LONG
           ����

���ʱ�ѱ�����
  ���������ٻ���
    ���ϵ���˿����
      ����ɻ���ʼ��
    �����������޸�
  ҹ��Ӧ���¹⺮
������ȥ�޶�·


~~~~��������Ϊ̽��

��Ϊ������������д��.....

һ���ſ������и�������ն������Ŵ���...��������������Ŵ�ʫ
�������������ʵ..�������е�ϣ��Ѱ�ٵ���֪���ص���һ��~~.
LONG);
	setup();
	replace_program(ROOM);
}

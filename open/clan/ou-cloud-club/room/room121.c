inherit ROOM;
void create() {
	set( "short", "$HIW$�ܹ���ѧ�о���$NOR$" );
	set( "owner", "alucard" );
	set( "light_up", 1 );
	set( "object", ([
		"file2"    : "/daemon/class/blademan/obj/gstone",
		"amount8"  : 1,
		"file1"    : "/open/capital/obj/blade2",
		"amount10" : 1,
		"amount6"  : 1,
		"file3"    : "/daemon/class/blademan/obj/gstone",
		"file10"   : "/open/common/obj/liz_meat",
		"file7"    : "/open/capital/obj/blade2",
		"amount3"  : 1,
		"file6"    : "/daemon/class/blademan/obj/fstone",
		"file5"    : "/open/capital/guard/gring",
		"file8"    : "/open/capital/obj/blade2",
		"amount2"  : 1,
		"file4"    : "/daemon/class/blademan/obj/fstone",
		"amount4"  : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file9"    : "/daemon/class/blademan/obj/skykey",
		"amount1"  : 1,
	]) );
	set( "build", 10058 );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room87.c",
		"enter"     : "/open/clan/ou-cloud-club/room/room168",
	]) );
	set( "long", @LONG

    �����ǰ���ɽׯ�ڵ�ұ���ص�,ר˾�о�����ǿ�������Ĺ��̼���,��
������������ж������������Ķ���,�������������������������ѧ����
,��������������֮��,ʹ������ֿ���������֮��Ķ��⿹��,�ܹ���
�����Ľ������ǵ���һ��ǧ��,����ĳλ����ɽׯ�ĸ߲��������ƻ����Լ�
��ѧ�еľ�����ע�ڷ���֮��,�����ܴﵽ����һ�н��ѵĹ�Ч,Ҳ���,��
��������ԱҲ��ҹ��ͣ���о�����ƥ��,�ںϵķ�ʽ,������������������
����...

LONG);
	setup();
	replace_program(ROOM);
}

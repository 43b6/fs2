inherit ROOM;
void create() {
	set( "short", "$HIC$��������ʥ��$NOR$��������ͷ������" );
	set( "object", ([
		"file6"    : "/open/gblade/obj/sa-head",
		"file5"    : "/open/gblade/obj/sa-head",
		"amount2"  : 1,
		"amount10" : 1,
		"amount5"  : 1,
		"file9"    : "/open/gblade/obj/sa-head",
		"file7"    : "/open/gblade/obj/sa-head",
		"amount6"  : 1,
		"file1"    : "/open/gblade/obj/sa-head",
		"amount7"  : 1,
		"amount1"  : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/gblade/obj/sa-head",
		"file4"    : "/open/gblade/obj/sa-head",
		"file2"    : "/open/gblade/obj/sa-head",
		"amount3"  : 1,
		"file8"    : "/open/gblade/obj/sa-head",
		"amount4"  : 1,
		"file3"    : "/open/gblade/obj/sa-head",
	]) );
	set( "light_up", 1 );
	set( "build", 11340 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room23",
	]) );
	set( "long", @LONG
������ר�ŷ��á�������ʥ�������ӵ���ͷ�ĵط�
�������ܵظ����������������������ӵ�г�ǿ��ʵ��
���Ե�Ȼ���г�ǿʵ���Ķ���Ҳ�Ǹʰ��·磬�뵽���
�뵽��ǰ�����һ��Ǹ�����ʱ��������µĵ��˶���û
���������������ȥʱ���������˾��Ŀ�ϧ����������
�͸�λ�������Ǿ�������������׵õ�������ͷ������
����Ҳ��ֵ�õ�:D��

LONG);
	setup();
	replace_program(ROOM);
}

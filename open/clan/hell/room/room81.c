inherit ROOM;
void create() {
	set( "short", "$HIC$����������ӡ��$HIY$(icer)$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount3"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "build", 11034 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�߽����д������㷢�ֿ�ƿ����һ���ܼ��͵���..������
����������������а��..��������˭��������..�Ǻ�..����ֻ��
�ڼ��������Ķ��������������ķ�..���������Ƕ��ٻ�
����ôһЩ��Į��..��������������..������������д�������Ŵ�
��������..���᳨�����ŵ�

LONG);
	setup();
	replace_program(ROOM);
}

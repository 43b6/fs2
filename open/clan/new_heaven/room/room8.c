inherit ROOM;
void create() {
	set( "short", "$HIC$����$NOR$" );
	set( "light_up", 1 );
	set( "object", ([
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"amount2"  : 1,
		"file1"    : "/u/b/bss/ring-4",
	]) );
	set( "owner", "xing" );
	set( "exits", ([
		"out"       : "/open/clan/new_heaven/room/room7",
	]) );
	set( "long", @LONG
�����ǰ�Ц�쳾�����Ŷ����ĵط�, ǽ�Ϲ���һ��ͼ, ������һ
�ѽ�, �ù���д��[����]����, ��������ǰ�Ц�쳾���彣��
LONG);
	setup();
	replace_program(ROOM);
}

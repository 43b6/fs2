inherit ROOM;
void create() {
	set( "short", "$HIW$�����Է� - $HIC$������$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"file4"    : "/open/killer/obj/k_ring",
		"amount1"  : 1,
		"file3"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"file2"    : "/open/killer/obj/k_ring",
		"amount3"  : 1,
	]) );
	set( "build", 10224 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room41.c",
		"south"     : "/open/clan/hell/room/room52",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
������Ƿ������ˣ����������ѵ�һ���ķ���
������[0;1;32m��[1mK[1m��[1m��[1m��[1m��[0m��[0;1;37m��[1;31m��[1;37m��[1;31m\[1;37m��[1;31m��[0m������[0;1;31m��[1mI[1m��[1m��[1;37m��[1m][1m��[1m��[0m������֮��
�ߣ���û����©���㲻�����뾿���������к�ͨ��
�ı�����ȡ����Щ��������

LONG);
	setup();
	replace_program(ROOM);
}

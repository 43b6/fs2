inherit ROOM;
void create() {
	set( "short", "$HIR$����������$NOR$(choas belt & gem)" );
	set( "owner", "neun" );
	set( "object", ([
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/killer/obj/bellstar",
		"file1"    : "/open/tendo/obj/luboot",
		"amount1"  : 1,
		"file2"    : "/open/killer/obj/hate_knife",
		"amount6"  : 8000,
		"amount2"  : 287,
		"amount3"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11791 );
	set( "exits", ([
		"dia"       : "/open/clan/hell/room/room29.c",
		"north"     : "/open/clan/hell/room/room23.c",
	]) );
	set( "long", @LONG
�����ǰ���ר�Ŵ��һЩ�����Ʒ�ĵط�,�п����ǽ��Ե���Ҫ�ؼ�,Ҳ�п�
���ǴӸ����ռ�������ͷ,��������Ĵų����Ǵ����ڲ��ȶ���״̬��,�������
����ͷ����Ŀ�Ƚ϶��ʱ��,����������˾ͻ��ܵ����Ե���������,����������
�����ĸ�������Ҳһ����������

LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$HIY$��ⱦ��$NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/killer/obj/kill_yar_head",
		"file2"    : "/open/killer/obj/kill_yar_head",
		"amount8"  : 1,
		"file6"    : "/open/killer/obj/kill_yar_head",
		"file3"    : "/open/killer/obj/kill_yar_head",
		"amount6"  : 1,
		"file1"    : "/open/killer/obj/kill_yar_head",
		"amount7"  : 1,
		"file8"    : "/open/killer/obj/kill_yar_head",
	]) );
	set( "build", 10594 );
	set( "light_up", 1 );
	set( "exits", ([
		"gold"      : "/open/clan/hell/room/room64",
		"green"     : "/open/clan/hell/room/room17.c",
		"out"       : "/open/clan/hell/room/room28.c",
		"blue"      : "/open/clan/hell/room/room11.c",
		"red"       : "/open/clan/hell/room/room66.c",
	]) );
	set( "long", @LONG
һ̤����䷿��,����ǽ�����Ĵ������Ÿ�����ɫ�ı�ʯ,��ϸһ��,ԭ
�����������������Ľ�ָ��������ı�ʯ,��$HIG$��ɫ$NOR$��ɱ��ħ��,$HIC$��ɫ$NOR$�ı�ѩ��
��,$HIR$��ɫ$NOR$�ĺ챦ʯָ��,��Ȼ����$HIY$��ɫ$NOR$�Ļ�����ָ,�����в�ͬ����,�ֱ�ͨ
����Ų�ͬ��ָ�ĵط�.

LONG);
	setup();
	replace_program(ROOM);
}

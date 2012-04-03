inherit ROOM;
void create() {
	set( "short", "$HBCYN$�쾧���$NOR$" );
	set( "owner", "neun" );
	set( "object", ([
		"file5"    : "/open/killer/headkill/obj/w_dag",
		"amount4"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/killer/headkill/obj/i_dag",
		"file1"    : "/open/killer/obj/dagger",
		"amount7"  : 1,
		"amount2"  : 260,
		"file4"    : "/open/killer/headkill/obj/f_dag",
		"amount5"  : 1,
		"file6"    : "/open/killer/headkill/obj/e_dag",
		"amount1"  : 1,
		"file2"    : "/open/killer/obj/s_pill",
		"amount6"  : 1,
		"file7"    : "/open/magic-manor/obj/magic-sign",
	]) );
	set( "light_up", 1 );
	set( "build", 10076 );
	set( "exits", ([
		"enter"     : "/open/clan/hell/room/room76",
		"west"      : "/open/clan/hell/room/room35.c",
		"out"       : "/open/clan/hell/room/room30.c",
		"east"      : "/open/clan/hell/room/room36.c",
	]) );
	set( "long", @LONG
��˵��������õ�װ��,�羧װ��ȫ��,��Ȼ�����������Ƶ�,����ʵ��������
������˵,��ʵҲ�ǲ���ķ���װ��.���԰���ƽʱ�ر�׼�����״���װ��,���ڴ˽�
����,�ð�����͵�����ǽ�����ʱ�����������ȡ,���Ķ��˿��Ű����Ķ���,ϣ��
����ʹ��������Զ��黹

LONG);
	setup();
	replace_program(ROOM);
}

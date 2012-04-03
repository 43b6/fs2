inherit ROOM;
void create() {
	set( "short", "$HIC$����$NOR$��$HIW$��̨$NOR$" );
	set( "object", ([
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 1,
		"amount4"  : 30,
		"amount5"  : 5,
		"amount3"  : 20,
		"file9"    : "/open/mogi/castle/obj/sspill",
		"file5"    : "/open/fire-hole/obj/b-pill",
		"file4"    : "/open/fire-hole/obj/y-pill",
		"file3"    : "/open/fire-hole/obj/p-pill",
		"file1"    : "/obj/gift/xiandan",
		"amount9"  : 1,
		"amount2"  : 58,
	]) );
	set( "build", 10005 );
	set( "owner", "welo" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/red_fire/room/room116",
	]) );
	set( "long", @LONG

����$HIC$����$HIM$����$NOR$��$HIW$��̨$NOR$��$HIC$����$NOR$��$HIW$��̨$NOR$�����Ÿ�ʽ������ֲ
��㶨��һ�ƣ���������ʱ�������е����Է����$HIY$��
����$NOR$��������ɽҰ���$HIM$����$NOR$��$HIR$��$HIC$��$HIM$��$HIY$ɫ$NOR$������ֲ���
�м�����ξ�����$GRN$С����$NOR$������$HIW$��̨$NOR$����Ըо�������
��紵���ţ����㲻�Ծ�����������һ������������ԡ
��$HIC$����Ȼ$NOR$��ʱ�⡣


LONG);
	setup();
	replace_program(ROOM);
}

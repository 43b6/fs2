inherit ROOM;
void create() {
	set( "short", "min��˽����" );
	set( "owner", "neun" );
	set( "object", ([
		"amount8"  : 69,
		"file9"    : "/open/mogi/castle/obj/sspill",
		"file6"    : "/open/fire-hole/obj/w-pill",
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/open/fire-hole/obj/r-pill",
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"amount10" : 1,
		"file7"    : "/open/fire-hole/obj/r-pill",
		"amount6"  : 5,
		"amount4"  : 1,
		"amount9"  : 47,
		"amount3"  : 1,
		"amount5"  : 1,
		"amount1"  : 400,
		"amount7"  : 48,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/castle/obj/ninepill",
	]) );
	set( "light_up", 1 );
	set( "build", 10656 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room119",
		"north"     : "/open/clan/hell/room/room120.c",
		"west"      : "/open/clan/hell/room/room9",
	]) );
	set( "long", @LONG

������С����˽�������ĵط�,һ����Ա��ֹ����,�����Ƿ�������������һ���
����С������,һ����Smһ���,��Ҫ��С����10�ٷ���������

    1.$HIY$�С��ʿ����$NOR$
    2.$HIY$��������AƬ����$NOR$
    3.$HIY$Ҫ���о�������$NOR$
    4.$HIY$���̵���$NOR$
    5.$HIY$��ë����$NOR$
    6.$HIY$��Ů������$NOR$
    7.$HIY$��ʺ����$NOR$

������Ա���ֽ��� �漴cjail           2002.1.2 min
            
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
        set( "short", "$HIY$��$HIR$���� $HIM$������$HIY$��$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"amount5"  : 2,
		"file8"    : "/u/d/dhk/questsfan/obj/diamond_boots",
		"file5"    : "/open/mogi/castle/obj/ninepill",
		"file4"    : "/open/fire-hole/obj/r-pill",
		"amount1"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/fire-hole/obj/g-pill",
		"amount8"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/fire-hole/obj/y-pill",
		"file1"    : "/open/fire-hole/obj/p-pill",
		"file3"    : "/open/fire-hole/obj/w-pill",
		"amount3"  : 1,
		"file7"    : "/open/fire-hole/obj/b-pill",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10080 );
        set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room32.c",
		"up"        : "/open/clan/red_fire/room/room100",
		"north"     : "/open/clan/red_fire/room/room35.c",
        ]) );
        set( "long", @LONG
������$HIR$������$NOR$��$HIM$������$NOR$��������ȥ��һ��Ƭ��$YEL$ɳĮ$NOR$����˵��$YEL$ɳĮ$NOR$����
����һ����������ǰ$HIR$������$NOR$��$BLU$�ż�$NOR$���������Ŵ�����$HIY$��ɳ$NOR$������ȥ������
......û��һ����˳����������֪���Ƿ��Ѿ��ҵ�$HIY$���$NOR$......����......
ֻ��һ��ʹ�����ݵ�$HIR$��$HIG$��$HIY$��$HIB$¥$NOR$......��


LONG);
        setup();
        replace_program(ROOM);
}


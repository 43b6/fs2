inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIR$���� $HIM$����$HIC$����$HIY$��$NOR$" );
	set( "object", ([
		"file3"    : "/open/gblade/obj/gold-boots",
		"file7"    : "/open/capital/obj/king-cloak",
		"file6"    : "/open/capital/obj/king-ring",
		"amount2"  : 1,
		"file8"    : "/open/gblade/obj/gold-armor",
		"amount4"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/capital/obj/king-belt",
		"file10"   : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 1,
		"amount10" : 7,
		"file1"    : "/open/capital/obj/king-cloth",
		"amount7"  : 1,
		"file9"    : "/open/killer/headkill/obj/f_dag",
		"amount1"  : 1,
		"file4"    : "/open/capital/obj/king-boots",
		"amount6"  : 1,
		"file2"    : "/open/gblade/obj/gold-robe",
		"amount8"  : 1,
		"amount9"  : 1,
	]) );
	set( "build", 10884 );
	set( "outdoors", "/open/clan/red_fire" );
	set( "exits", ([
		"down"      : "/open/clan/red_fire/room/room44",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��Ȼ������һ��Ƭ��$YEL$ɳĮ$NOR$��������Ϊ֮ǰǰ��$BLU$�ż�$NOR$��$HIY$�ɽ�ͣ�$NOR$�߲���
��$YEL$ɳĮ$NOR$��������ɱ�˲�գ�۵�$YEL$ɳĮ$WHT$����$NOR$������Ϊ�˷�ֹ���ǵ����֣��ڴ�
�����ر�������$WHT$����$NOR$��Ϯ����


LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$HIC$����$NOR$��$HIM$�뷿$NOR$" );
	set( "owner", "lawyer" );
	set( "object", ([
		"file5"    : "/u/d/dhk/questsfan/obj/diamond_belt",
		"file4"    : "/open/capital/obj/blade2",
		"file10"   : "/open/port/obj/wolf_ring",
		"file7"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
		"amount10" : 1,
		"amount2"  : 1,
		"file6"    : "/open/main/obj/shiblade",
		"amount1"  : 1,
		"amount7"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount5"  : 1,
		"amount3"  : 1,
		"file8"    : "/u/d/dhk/questsfan/obj/diamond_boots",
		"file9"    : "/u/d/dhk/questsfan/obj/diamond_cloak",
		"file3"    : "/daemon/class/blademan/obj/ublade",
		"amount8"  : 1,
		"file1"    : "/u/d/dhk/questsfan/obj/diamond_armor",
	]) );
	set( "build", 10282 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room81",
	]) );
	set( "long", @LONG

������$HIC$����$NOR$�Ĺ뷿���뷿���ŵ�������$HIW$÷$NOR$�㣬�ƿ����������$HIW$÷
��$NOR$���Ʒ����������ߡ���������һ$HIM$����$NOR$�����͵��š���ǰ��һ$HIY$��
��$NOR$������ʻ���$HIC$ӭ��ͼ$NOR$���������£���ɫ���ã�Ӧ���ǳ��Դ��
�ֱʡ�$HIY$����$NOR$���Ե�$HIW$��ʯ$HIC$Ƕ��$HIR$��$NOR$�Ϲ����ؿ���һ��$HIR$����$NOR$д����

        ��$HIC$��������������$NOR$��$HIY$ȴ������$NOR$��$HIR$��Ϊ����$NOR$
          $HIC$��ǰƮ�����ϼ$NOR$��$HIY$��֪����$NOR$��$HIR$��������$NOR$����


LONG);
	setup();
	replace_program(ROOM);
}

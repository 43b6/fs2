inherit ROOM;
void create() {
	set( "short", "$HIY$��צ����$NOR$" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/scholar/obj/icefan",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount5"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"file8"    : "/daemon/class/fighter/ywgem",
		"amount6"  : 1,
		"amount3"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 12597 );
	set( "owner", "daimon" );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room119",
	]) );
	set( "long", @LONG
          $BRED$$HIY$��  $HIC$��   צ   ��  �塡$HIY$����$HIG$�������衡�ơ��ʡ�$HIY$��$NOR$

$HIC$�ߡߡߡߡߡߡߡߡߡߡߡ�$HIR$��$HIC$���á��ơ������顡ʽ��$HIR$��$HIC$�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�

$HIY$�ߡߡߡߡߡߡߡߡߡߡߡ�$HIR$��$HIY$���á��ơ��̡��¡�ʽ��$HIR$��$HIY$�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�

$HIG$�ߡߡߡߡߡߡߡߡߡߡߡ�$HIR$��$HIG$�������硡׽��Ӱ��ʽ��$HIR$��$HIG$�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�

$HIM$�ߡߡߡߡߡߡߡߡߡߡߡ�$HIR$��$HIM$�������١��̡��¡�ʽ��$HIR$��$HIM$�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�

$HIW$�ߡߡߡߡߡߡߡߡߡߡߡ�$HIR$��$HIR$��˫�����������顡ʽ��$HIR$��$HIW$�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�

$HIB$�ߡߡߡߡߡߡߡߡߡߡߡ�$HIR$��$HIB$  ˫���ء��顡����ʽ��$HIR$��$HIB$�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�$NOR$

LONG);
	setup();
	replace_program(ROOM);
}

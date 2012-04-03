inherit ROOM;
void create() {
	set( "short", "$HIR$����$HIM$�Ӵ�$NOR$" );
	set( "owner", "flyindance" );
	set( "object", ([
		"amount5"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/dancer/obj/maple_ribbon",
		"file9"    : "/daemon/class/fighter/armband",
		"file6"    : "/open/mogi/castle/obj/leave",
		"file2"    : "/open/snow/obj/book",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/mogi/mountain/obj/frog-pill",
		"file4"    : "/obj/gift/bingtang",
		"file5"    : "/open/mogi/castle/obj/blood-water",
		"file3"    : "/open/gblade/obj/book",
		"amount1"  : 112,
		"amount7"  : 1,
		"amount3"  : 1,
		"file7"    : "/open/magic-manor/obj/leaf",
	]) );
	set( "build", 10125 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room149",
	]) );
	set( "long", @LONG
��������������������������
����������ţ���ӵ������Ⱥ֮�С� 
��Ͷ��������������� 
����Ҳ�ã�����Ҳ�ա� 
������ʹ�ҵ��貽���ҡ� 
��Ϊ���ҷ���ģ�������ע�ӵ�Ŀ�⡣ 
������������ġ�
���������������������������������
LONG);
	setup();
	replace_program(ROOM);
}

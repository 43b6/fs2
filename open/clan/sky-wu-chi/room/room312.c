inherit ROOM;
void create() {
	set( "short", "$HIC$˼��֮��$HIW$����$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"amount4"  : 1,
		"file7"    : "/open/prayer/obj/boris-cloth",
		"amount8"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/scholar/obj/icefan",
		"file5"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/dancer/obj/yuawaist",
		"file2"    : "/open/scholar/obj/s_hands",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/daemon/class/fighter/armband",
		"amount9"  : 1,
		"amount1"  : 1,
	]) );
	set( "build", 11956 );
	set( "light_up", 1 );
	set( "item_desc", ([
		"����" : @ITEM
˼����������̨������������  ^^
ITEM,
	]) );
	set( "owner", "salicili" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room132",
	]) );
	set( "long", @LONG


    ��ʱ����,��������,
    ӿ�ٱ���,����ӿ��,
    ǧҶ����,�л�����,
    ��������,����ʮ��,
    �ٱ�����,һһ����,
    �Ա�ʾ��,ʮ���ɳ,
    ����ܼ�,��ɽ����,
    ����ս�,��������,
    η���汧,�����,
    һ������,�޼�����,
    �Ź�����,��˵����.


����������  ��٤��Ү  ����ڭ��
....................
....................
�����̨СС��ɫ�Ļ���,����ϸ�۲췢����̨<����>.


LONG);
	setup();
	replace_program(ROOM);
}

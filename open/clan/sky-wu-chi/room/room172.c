inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$������$HIC$��$NOR$��ħ�� " );
	set( "owner", "conpse" );
	set( "object", ([
		"amount10" : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/daemon/class/blademan/obj/iceblade",
		"file5"    : "/open/mogi/mountain/obj/frog-pill",
		"amount4"  : 1,
		"amount5"  : 4,
		"amount9"  : 1,
		"file8"    : "/open/scholar/obj/icefan",
		"file7"    : "/obj/gift/xiandan",
		"amount3"  : 1,
		"amount2"  : 4,
		"amount1"  : 1,
		"file10"   : "/daemon/class/blademan/obj/six-neck",
		"amount6"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/mogi/dragon/obj/power",
		"amount8"  : 1,
		"file1"    : "/daemon/class/fighter/armband",
		"file4"    : "/obj/gift/lingzhi",
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room154",
	]) );
	set( "build", 10050 );
	set( "long", @LONG
������С���ҷŶ����ĵط����������ƺ�������
����������ô����������ƽ�����ܲ������ߣ�����
���ﶼ�ǿտյģ�����Ϊ�����ճ�Ϊһ���ĵ��ͣ���
���ǻ�Ŭ���ģ�ƽ��������ʱ�ǵ�������д�ģ�����
������ѣ���ħ������

LONG);
	setup();
	replace_program(ROOM);
}

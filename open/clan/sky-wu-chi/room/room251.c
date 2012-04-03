inherit ROOM;
void create() {
	set( "short", "$HIM$��$HIC$��$HIY$�ι�$HIR$ҩ԰$NOR$" );
	set( "owner", "amei" );
	set( "object", ([
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file6"    : "/open/scholar/obj/iron",
		"file4"    : "/open/gsword/obj1/bball",
		"file1"    : "/open/doctor/pill/human_pill",
		"amount5"  : 14,
		"amount1"  : 600,
		"file5"    : "/open/mogi/castle/obj/sspill",
		"file9"    : "/obj/gift/lingzhi",
		"file2"    : "/open/doctor/pill/ice_pill",
		"amount7"  : 3,
		"amount9"  : 1,
		"file10"   : "/open/doctor/pill/sky_pill",
		"amount3"  : 673,
		"file3"    : "/open/doctor/pill/sky_pill",
		"file7"    : "/open/ping/obj/poison_pill",
		"amount10" : 100,
		"amount6"  : 1,
		"amount2"  : 594,
	]) );
	set( "light_up", 1 );
	set( "build", 10136 );
	set( "exits", ([
		"pill"      : "/open/clan/sky-wu-chi/room/room293",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"north"     : "/open/clan/sky-wu-chi/room/room208",
	]) );
	set( "long", @LONG
����������޼���ר��ҩ��԰�����ܳ����˸�ʽ������ҩ�ݣ���Щ
��Ȼ��һЩǰ��δ�������ҩ�ݣ������ʱ�۾�Ϊ֮һ��������Ҫ����
��һЩ����ҩ��ȥ������֪�����ж�ã����뵽����ͻȻ�������
����ʲô���������ˣ�
LONG);
	setup();
	replace_program(ROOM);
}

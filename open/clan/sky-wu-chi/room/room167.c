inherit ROOM;
void create() {
	set( "short", "$HIR$$BWHT$�����׵�������$NOR$" );
	set( "owner", "hild" );
	set( "object", ([
		"file5"    : "/open/doctor/pill/gnd_pill",
		"amount3"  : 348,
		"amount5"  : 402,
		"file8"    : "/open/doctor/pill/gnd_pill",
		"amount4"  : 390,
		"amount6"  : 129,
		"file1"    : "/open/doctor/pill/gnd_pill",
		"file7"    : "/open/doctor/pill/human_pill",
		"amount1"  : 402,
		"file6"    : "/open/doctor/pill/sky_pill",
		"file3"    : "/open/doctor/pill/sky_pill",
		"file4"    : "/open/doctor/pill/human_pill",
		"amount8"  : 48,
		"amount7"  : 166,
	]) );
	set( "item_desc", ([
		"pigpig" : @ITEM
����ITEM,
		"pss" : @ITEM
����
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10167 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room306",
		"south"     : "/open/clan/sky-wu-chi/room/room105.c",
		"east"      : "/open/clan/sky-wu-chi/room/room155.c",
	]) );
	set( "long", @LONG
�������֣��������һ��ֻţ���˵��$CYN$������ɱ��$NOR$����
�ٶȻ�Ծ������ÿ����Ī�����ź��¡��������䴫��һ��Ѫ
�ȵ�ɱ���������ϵ�����ɢ�ҵ�ֽ�ѣ�ǽ��Ҳ�����书��ʽ
�ĺۼ��������ܶ���أ��ƺ�ͨ���ܶ�ط���Ī���������....��
LONG);
	setup();
	replace_program(ROOM);
}

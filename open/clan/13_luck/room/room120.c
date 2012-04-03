inherit ROOM;
void create() {
	set( "short", "ҽ����" );
	set( "owner", "wyld" );
	set( "object", ([
		"amount6"  : 102,
		"amount1"  : 98,
		"file6"    : "/open/doctor/item/sky_item",
		"file7"    : "/open/magic-manor/obj/evil-kill-claw",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/doctor/item/human_item",
		"amount4"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 11076 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room59",
	]) );
	set( "long", @LONG
�ŵ�ŨŨ��ҩˮζ..��֪������С��ʿ��ҽ����..���Ŷ��ֵ�ҩ��
���ź�ҩˮ..��ҩˮ..��ҩˮ..����ҩˮ..���ŵ�..
��ȻҲ��æ����..������..����Ҫ���������..������һ�׹ײĸ���.
ף����Ӵ�����״Ԫ..��ѽ..����׬��Ǯ..��ѽ..
LONG);
	setup();
	replace_program(ROOM);
}

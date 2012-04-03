inherit ROOM;
void create() {
	set( "short", "$HIY$�㽶�ܿ�$HIM$AV$HIW$�༭��$NOR$ " );
	set( "object", ([
		"amount7"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/ping/obj/gold_hand",
		"amount6"  : 1,
		"amount5"  : 1,
		"file5"    : "/daemon/class/fighter/armband",
		"amount2"  : 1,
		"file4"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "owner", "blur" );
	set( "build", 10230 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room49.c",
		"north"     : "/open/clan/hell/room/room47.c",
		"east"      : "/open/clan/hell/room/room93.c",
		"west"      : "/open/clan/hell/room/room46",
	]) );
	set( "long", @LONG
���...kalin��С��...
Ŀǰ����������ͭ����Ŀ�����..
����������ֲ����,���Դ������㽶�ܿ�..
ϣ�����Դ���һЩ��Ľ��...
����AV�����㽶�ܿ������ಿ��..
Ҳ�Ǵ�ɵ�ר��...
���Դ���������¶��������о��о�....
����Ͷ�������...���Ƿ����������å��˧��仰....
LONG);
	setup();
	replace_program(ROOM);
}

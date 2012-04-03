inherit ROOM;
void create() {
	set( "short", "$HIG$Ǭ��ս����$NOR$" );
	set( "object", ([
		"file7"    : "/open/dancer/obj/yuawaist",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"amount6"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/prayer/obj/boris-cloth",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 11698 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room187",
		"west"      : "/open/clan/ou-cloud-club/room/room143",
	]) );
	set( "long", @LONG
$WHT$��������(stick)                ����ЧӦ�� 15$NOR$
    $WHT$�˻��񶷼���(unarmed)          ����ЧӦ�� 15$NOR$
    $WHT$��Ծ����֮��(dodge)            ����ЧӦ�� 5$NOR$
    $WHT$�����ڹ�(force)                ����ЧӦ�� 5$NOR$
��Ϊʥ��̵����֮��....��Ȼ��С��..
�м�����մ��Ѫ��.....�ֺ���Ҳ������ͷʹ��...
LONG);
	setup();
	replace_program(ROOM);
}

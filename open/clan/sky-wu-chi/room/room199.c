inherit ROOM;
void create() {
	set( "short", "$HIY$��ƽ����Ժ�� $HIM$������$NOR$" );
	set( "owner", "lonsan" );
	set( "object", ([
		"file10"   : "/open/ping/questsfan/obj/diamond_legging",
		"amount1"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/ping/questsfan/obj/diamond_hands",
		"file5"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount8"  : 1,
		"file1"    : "/open/ping/obj/cloud_fan",
		"amount3"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/ping/questsfan/obj/diamond_armor",
		"amount9"  : 1,
		"file6"    : "/open/ping/questsfan/obj/diamond_boots",
		"amount5"  : 1,
		"amount10" : 1,
		"file4"    : "/open/ping/questsfan/obj/diamond_skirt",
		"file3"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/ping/questsfan/obj/diamond_belt",
	]) );
	set( "build", 10066 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room197",
	]) );
	set( "long", @LONG
����������˼����������͵�����֮���ĵط�������Ҳ��ƽ����Ժ���ڡ��֡�
�γ̵����ڡ������������Ͽ������ֳ��������֣����ϱ���ʮ��ʮ����λ���ӣ���
�м����ڱ��ݖ����֣�ƽʱ��ʦ�ڿ�Ҳ���ڱ��ݖ���̵�ѧ����������ʹ�ü��ɼ�
�����ϱ��ߵĵط���һ�����ʽ��������������������ŵ��Ǹ�ʽ������������
ѧ����Ҳ�������Լ��Ķ�����������˴����Ͻ����˽��룬���ſڵ��������࣬
��������Ϣ���Ĳ��֣��������ֱߵ���Ϣ���Ƚ�û���˻��ȥ��������ѧ����ƽ��
��ϰ����ʱ�������ĵط���

LONG);
	setup();
	replace_program(ROOM);
}

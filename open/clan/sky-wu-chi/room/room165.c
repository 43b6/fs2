inherit ROOM;
void create() {
	set( "short", "$HIY$��ƽ����Ժ�� $HIC$ʥ��ѧ��$NOR$" );
	set( "owner", "lonsan" );
	set( "object", ([
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/daemon/class/fighter/figring",
		"amount7"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/open/tendo/obj/chaosbelt",
		"amount6"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount4"  : 1,
		"file6"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount10" : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mogi/castle/obj/lochagem",
	]) );
	set( "light_up", 1 );
	set( "build", 10300 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room139",
	]) );
	set( "long", @LONG
�߽�ʥ��ѧ�ã����ϾͿ��Ը��ܵ�һ�ɶ����˵����ʣ��·�ֻҪ�������ȥ��
ѧ�������ܳ�Ϊ��������ѧ��ʦ����ʵ��Ҳ����ˣ�ƽ����Ժ��ʥ��ѧ�þ���ר��
ѵ������ѧʿ��ѧ�ʵ���ߵ��ã��������ν̵���ʦ��Ҳ���ǵ����Ĵ��壬����Ҫ
��Ҳ��һ�����Ժ�����ϸ񣬲��������Ҫ���ܿ��ԣ�����������ϱ��˳̶ȵ�ѧ
����Ҳ�������֮�꣬����������Ϊ�����Ͻ��ȱ�������ѧ����������һ���ܶ���
һ����о�ѧ�ʡ���ѧ�õ��������һ�Ź��ӣ����������Ͽε�ѧ��ר�õģ�����
��ǰ����С�������ŵ�����ʦ��˽����Ʒ��

LONG);
	setup();
	replace_program(ROOM);
}

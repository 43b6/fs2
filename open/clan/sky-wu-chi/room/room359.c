inherit ROOM;
void create() {
	set( "short", "��˪��-���߿�" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"amount4"  : 1,
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
	]) );
	set( "light_up", 1 );
	set( "owner", "roboo" );
	set( "build", 11936 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room241",
	]) );
	set( "long", @LONG
�������ǻ���ˮ�������ɵķ����У����濴���������ߵĺ�˪
��ûʲô��ͬ������׼��Ҫ��ȥ֮ʱ��ͻȻһ�������㱳������
���ٶ�֮Ѹ���������޿�����ԭ��Ϊ�����˰������������ˣ�����
�㶨��һ���ŷ���һ����Ҳû�С������������£����ǵ���â����
��һ���ŷ���ԭ����ˮ����аڷ�һ�׿���ȫ�����������ߵĺ�
��װ�����ֱ�Ϊ���羧ͷ��(diamond hairpin)��
�����������������羧˫����(diamond armor)
�����������������羧ʶ������(diamond cloak)
�����������������羧��������(diamond hands)
�����������������羧�q������(diamond belt)
�����������������羧��ȹ(diamond skirt)
�����������������羧���绤ϥ(diamond legging)
�����������������羧����ѥ(diamond boots)
LONG);
	setup();
	replace_program(ROOM);
}

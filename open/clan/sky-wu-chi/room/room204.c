inherit ROOM;
void create() {
	set( "short", "������Ʒ����" );
	set( "owner", "puffy" );
	set( "object", ([
		"amount3"  : 2,
		"amount10" : 1,
		"amount2"  : 1,
		"file6"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"file2"    : "/open/gblade/obj/sa-head",
		"amount4"  : 1,
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/gblade/obj/sa-head",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"amount9"  : 1,
		"file9"    : "/open/gblade/obj/sa-head",
		"amount8"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/mogi/dragon/obj/dragon-head",
		"file3"    : "/open/mogi/mountain/obj/frog-pill",
		"amount6"  : 1,
		"amount5"  : 1,
		"file7"    : "/obj/gift/bingtang",
		"amount1"  : 1,
	]) );
	set( "build", 10086 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room162",
	]) );
	set( "long", @LONG
������С������ͷ��
���Ÿ�ʽ��������ͷ
�з���ħ������ͷ
�лƽ��������ͷ
�ж����ӵ���ͷ
���ֺ�������ͷ
������ɫ��·ħ������ͷ
�ڰ�˫ɷ����ͷ
��ɱ����Ҫ����ͷ
�����Ӧ�о���
����������С��Ϊ��չʾ����ս��Ʒ������room
����С��Ҳ�湻ǿ����
LONG);
	setup();
	replace_program(ROOM);
}

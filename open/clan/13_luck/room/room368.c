inherit ROOM;
void create() {
	set( "short", "����" );
	set( "owner", "yaoblade" );
	set( "object", ([
		"amount2"  : 17,
		"file6"    : "/open/killer/outsea/dstone",
		"amount3"  : 89,
		"file1"    : "/open/doctor/pill/sky_pill",
		"file2"    : "/open/doctor/pill/human_pill",
		"amount4"  : 1,
		"file5"    : "/open/gblade/obj/sa-head",
		"file4"    : "/open/killer/outsea/dstone",
		"amount7"  : 333,
		"file3"    : "/open/doctor/pill/human_pill",
		"amount6"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/doctor/pill/gnd_pill",
		"amount1"  : 317,
	]) );
	set( "build", 10203 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room196",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����....���ֺ�����Ķ���....���Ͱ��鲻һ��....����ӵ����
���ʱ��...�����κ�ʱ���ǿ��ֵ�...ÿ���˶�ϲ���ύ����....
������㽻��һ�������....ȴû��һ���ǿ���˵���µ�....�Ƿ��
�е���������?�һ���ú�����...�˵�һ���в���ܶ�����....����
��Ҫ�����м���֪�ĵ�...�������㹻��...���м���֪�ĵ�����....
�Һ���ϧ...��Ϊ������������·���ߵķǳ�����...Ҳ���ʧȥ����
Щ����...���ڽ���һ������Ŀ���...�һ��������ǽ���������ֿ��
����...�Һ���ϧ����ϧ...�˲���û������....���Դ��Ҫ�ú���ϧ
��ߵ�����Ŷ~~^^

LONG);
	setup();
	replace_program(ROOM);
}

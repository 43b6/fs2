inherit ROOM;
void create() {
	set( "short", "����Ұ����" );
	set( "owner", "alucard" );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room121",
	]) );
	set( "light_up", 1 );
	set( "build", 4036 );
	set( "object", ([
		"file3"    : "/obj/example/dagger",
		"file2"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/capital/guard/gring",
		"amount3"  : 1,
		"file1"    : "/open/gblade/obj/sa-head",
	]) );
	set( "long", @LONG

    ��¡��¡��ת�����������,���������������۾��Ĵ�����,��~~~~
��Ȼ����������˺ö������,������Щ����ͣ��ת����,������֮��,����
��һֻֻ�ɰ��ķ�Ҷ��!!�ӿ�����,�����,�޲���˹��...��������õ���
Ʒ�ֶ����������￴��,����ЩС�һ�һ���������İ�����������,Ҳ����
��ͣ���ֱߵ���,�۾����ô��Ķ�������,������֮��,�ֿ�ʼ�ܹ��ֵ���
����,�Զ����ĳԶ�����,�������ǵ����˱ض���ϸ���չ˼�ѵ������,����
��������˵��а�ȫ��.

LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "ѩӰ��" );
	set( "owner", "max" );
	set( "object", ([
		"file3"    : "/daemon/class/blademan/obj/iceblade",
		"file2"    : "/open/mogi/village/obj/mogi_ring",
		"file7"    : "/open/killer/obj/k_ring",
		"amount7"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file4"    : "/daemon/class/blademan/obj/six-neck",
		"file1"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
	]) );
	set( "build", 10614 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room352",
	]) );
	set( "long", @LONG

    һ��������У�ֻ��ǽ�Ϲ���һ��[0;1;36m��[1m��[1m��[1mv[0m(Iceblade)�����Ͽ���һ
ЩϸϸСС���֣���ϸ��ȥԭ����ħ������ն��Ԫ������֮һ��ʩչ
����֮����ʹ��[35m����ն��Ԫ��ѩӰ��Ԫ��[0m��[0;1;33m��[1mg[1;36m��[1ms[1;33m��[1m��[1;36m��[1m_[0m����[0;1;36m��[1m��[1;35m��[1mv[1;37m��[1mH[1;36m��[1m��[0m��
��������Ԫ���ֳ�[0;1;36m��[1m��[1m��[1mv[0m����һ�ӣ���ʱ��ɽҡ�ض������Ʊ�ɫ������
�����ļ�����ת������ͻȻ��Ʈ������ѩ�ʡ�[0;1;36m��[1m��[1m��[1m��[1m��[1m��[1m��[1mm[1m��[1mA[1m��[1mu[1m��[1m��[1m��[1m��[1m��[1mc[1m��[1mT[0m
[0;1;36m��[1m��[1m��[1mx[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mw[1m��[1mQ[1m��[1mM[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1mM[1m��[1mb[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1mA[1m��[1ms[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mm[0m
[0;1;36m��[1mA[1m��[1mu[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mu[1m��[1m��[1m��[1mx[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}

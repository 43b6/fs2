inherit ROOM;
void create() {
	set( "short", "���ﳤ��¥" );
	set( "owner", "adeyzit" );
	set( "object", ([
		"amount2"  : 1,
		"file1"    : "/open/prayer/obj/crystal2",
		"amount1"  : 1,
		"file2"    : "/open/prayer/obj/crystal1",
	]) );
	set( "build", 10068 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room181",
		"up"        : "/open/clan/13_luck/room/room246",
	]) );
	set( "long", @LONG

������¥Ϊ��¼��С��а����Ӱ������������������ħ���ӡ�������
��Ӣ���¼���[0;1;36m��[1mF[1m��[1m��[1m��[1mD[1m��[1m��[1;37m��[1mB[1;32m��[1m��[1m��[1m��[1m��[1m��[1m��[1mB[1;37m��[1mB[1;35m��[1mn[1m��[1mQ[1m��[1m��[1m��[1m��[1;37m��[1mB[1;31m��[1m_[1m��[1m��[1m��[1m��[1m��[1m��[1;37m��[1mB[1;33m��[1mo[1m��[1ms[1m��[1m��[1;37m��[1mB[0m
[0;1;34m��[1m��[1m��[1mB[1m��[1m��[0m��[45mն����[0m��[0;1;33;46m��[1mD[1m��[1mZ[1m��[1mt[0m��[30;47mȡ�Ĺ���ͷ[0m��[41m����ʤ����[0m��֮������˾�
��Ϊ���ɵ���Ҫ��ɫ��Ҳ����Ϊ[0;1;31m��[1mN[1m��[1m��[1m��[1mK[1m��[1m��[0m�С� 

LONG);
	setup();
	replace_program(ROOM);
}

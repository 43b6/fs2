inherit ROOM;
void create() {
	set( "short", "Ԫ��Ͽ����" );
	set( "object", ([
		"file4"    : "/open/gsword/npc2/sadsword",
		"file3"    : "/open/gsword/obj1/khelmet",
		"amount6"  : 1,
		"file7"    : "/open/firedancer/npc/eq/r_finger",
		"amount10" : 1,
		"amount7"  : 1,
		"file1"    : "/open/main/obj/m_cloak",
		"file10"   : "/open/firedancer/npc/eq/r_neck",
		"file6"    : "/open/gsword/obj1/ring",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/main/obj/bird_legging",
		"amount2"  : 1,
		"file8"    : "/open/firedancer/npc/eq/r_armbands",
		"amount9"  : 1,
		"file5"    : "/open/gsword/obj1/karmband",
		"amount4"  : 1,
		"file9"    : "/open/firedancer/npc/eq/r_leg",
	]) );
	set( "owner", "ywarter" );
	set( "build", 10365 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room338",
	]) );
	set( "long", @LONG
�����㿴���˺ڰ׺����̻�������Ԫ��,��������Ԫ�����ܼ��Ҳ���ɢ��
����һ�ռ����ƶ�,���ƶ���ͬʱ�㿴��һЩ��ͬԪ�ص�ĥ��������һЩ
΢С����,���㿴����ռ��������һ�����ص�Բ��������ȡ��Щ΢С�ĵ���
�㲻֪������ʲô����,������Բ�򻹲�ʱ�ĔJ����,�·�����һ������
LONG);
	setup();
	replace_program(ROOM);
}

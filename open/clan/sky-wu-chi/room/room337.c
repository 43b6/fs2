inherit ROOM;
void create() {
	set( "short", "Ԫ��Ͽ����" );
	set( "owner", "ywarter" );
	set( "object", ([
		"file2"    : "/open/gsword/obj1/ring",
		"amount5"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/gsword/obj1/ring",
		"amount4"  : 1,
		"file1"    : "/open/gsword/obj1/ring",
		"file6"    : "/open/gsword/npc2/sadsword",
		"amount2"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/gsword/obj1/bloodsword",
		"file5"    : "/open/main/obj/m_cloak",
		"file4"    : "/open/main/obj/bird_legging",
		"amount1"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 11028 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room338",
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

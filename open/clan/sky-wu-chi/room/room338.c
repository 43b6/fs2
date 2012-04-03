inherit ROOM;
void create() {
	set( "short", "Ԫ��Ͽ����" );
	set( "object", ([
		"amount6"  : 1,
		"file3"    : "/open/gsword/obj1/karmband",
		"file4"    : "/open/gsword/npc2/sadsword",
		"amount3"  : 1,
		"file2"    : "/open/gsword/obj1/khelmet",
		"amount5"  : 1,
		"file1"    : "/open/gsword/obj1/bloodsword",
		"amount2"  : 1,
		"file6"    : "/open/firedancer/npc/eq/r_cape",
		"file5"    : "/open/gsword/obj1/ring",
		"amount1"  : 1,
		"amount4"  : 1,
	]) );
	set( "owner", "ywarter" );
	set( "build", 10545 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room337.c",
		"east"      : "/open/clan/sky-wu-chi/room/room339.c",
		"west"      : "/open/clan/sky-wu-chi/room/room340",
		"out"       : "/open/clan/sky-wu-chi/room/hall.c",
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

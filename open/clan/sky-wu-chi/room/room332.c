inherit ROOM;
void create() {
	set( "short", "��ƿ���д���3" );
	set( "object", ([
		"file3"    : "/open/firedancer/npc/eq/r_hands",
		"amount3"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_boots",
		"file2"    : "/open/firedancer/npc/eq/r_pants",
		"amount2"  : 1,
	]) );
	set( "owner", "ywarter" );
	set( "build", 10248 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room333",
		"out"       : "/open/clan/sky-wu-chi/room/room234",
	]) );
	set( "long", @LONG
����������Ҫ̸���ܵĵط�,�����ܿ�����������һ�����䳡
ԭ���ǿ�ƿ��ϲ���������,˳��˵�����ĵ�,����һЩ�߽׵�
���Ѷ������̸������,������,Ϊ�˱�������͵��,���Կ�ƿ��
�����һ�����,ʹ���˰˳ɹ�����������һ���������
�κ�����������ֻ����say ��������ȥ����..
Ҳ������Ϊ��̫�����ܵĹ�ϵ��...
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "H" );
	set( "build", 45 );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room17",
		"heronotme" : "/open/clan/sky-wu-chi/room/room113",
		"hild"      : "/open/clan/sky-wu-chi/room/room168",
		"herozero"  : "/open/clan/sky-wu-chi/room/room97.c",
		"herononame" : "/open/clan/sky-wu-chi/room/room166.c",
		"holeman"   : "/open/clan/sky-wu-chi/room/room305",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;35mH[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}

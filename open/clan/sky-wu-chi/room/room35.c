inherit ROOM;
void create() {
	set( "short", "C" );
	set( "exits", ([
		"clodsnow"  : "/open/clan/sky-wu-chi/room/room219.c",
		"conpse"    : "/open/clan/sky-wu-chi/room/room40",
		"cong"      : "/open/clan/sky-wu-chi/room/room99.c",
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"crlin"     : "/open/clan/sky-wu-chi/room/room115",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;31mC[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}

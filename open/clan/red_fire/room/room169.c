inherit ROOM;
void create() {
	set( "short", "$HIC$�߲������$NOR$" );
	set( "exits", ([
		"down"      : "/open/clan/red_fire/room/hall",
	]) );
	set( "long", @LONG
�����Ǻ�������ʱ�ĸ߲������....
���еİ���ǳ��ĸ����û�.........��������
һ�����ǲ��ܽ�ȥ.....ֻ�а��еİ�õ����
�ټ��߲㿪��ʱ���ܽ�ȥ.....�����İ���
��Ҫ�����......���Ǿ����߲���Ȩ
����������ټ�......���ܽ���һ������


'.
LONG);
	setup();
	replace_program(ROOM);
}

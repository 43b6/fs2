inherit ROOM;
void create() {
	set( "short", "������ӿ¥" );
	set( "owner", "adeyzit" );
	set( "build", 11388 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room246.c",
		"up"        : "/open/clan/13_luck/room/room244",
	]) );
	set( "long", @LONG

    ��ɽ�����˲ų���һ�����˻����ˣ�ʮ���������Ŵ�˵�еİ���
С�ϵ��˲��������ģ��̵������ٵĺ��˲ţ�һλλ�����Ժ��׼��
����Ҳ��С�ϵ�ָ���£���������ȥ���Ե� save eq�������Ǻϸ�
Ҳ��ʮ������׳��Ļ�����

LONG);
	setup();
	replace_program(ROOM);
}

// Room : /open/clan/red_fire/room/room17.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "������" );
	set( "light_up", 1 );
	set( "long", @LONG

���еİ���ǳ��ĸ����û�.........����
һ����Ҳ�ܽ���.....���еİ�õ�����᲻��ʱ
�ټ������ڴ˿���.....ϣ���ٿ����д��ʱ
���еİ�����Ҫ�����.......����һ��ǰ����������
���еİ���ǳ��ĸ����û�.........����
һ����Ҳ�ܽ���.....���еİ�õ�����᲻��ʱ
�ټ������ڴ˿���.....ϣ���ٿ����д��ʱ
���еİ�����Ҫ�����.......����һ��ǰ����������



LONG);
	set( "exits", ([ /* sizeof() == 3 */
		"out"       : "/open/clan/red_fire/room/hall.c",
		"east"      : "/open/clan/red_fire/room/room18.c",
		"west"      : "/open/clan/red_fire/room/room19.c",
]) );
	set( "no_clean_up", 0 );
	setup();

	}

// Room : /open/clan/sky-wu-chi/room/room27.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG

����һ���������ϵķ��䣬�������������ʼ��Ҫ�����ˣ�������֣�
ƽʱ�����������ڱ���������ͺ����Ҷ�������һ������ô���ܻ�վ��������

�䲻����ѧС����ȭ��ʽ���ǡ��ơ��硡��������  ʯ  ��  ȭ������  ��  ��  �衯
������ʽ����  ��  ��  ��  ȭ��Ϊ���޵о�ѧ��

����ǿ�����ķ��������ķ���֮�������۹� ������������������ŷ�ɥ����

���������ϳ����������ز�֪��ô�ˡ�
����ֻ������Խ������������еļ�į��

LONG);
	set( "exits", ([ /* sizeof() == 1 */
		"up"        : "/open/clan/sky-wu-chi/room/room194",
		"out"       : "/open/clan/sky-wu-chi/room/room15.c",
]) );
	set( "short", "�������ϵķ�����ͷ��" );
	set( "owner", "sir" );
	set( "object", ([
		"amount9"  : 1,
		"file4"    : "/open/gsword/obj/silver_sword",
		"amount5"  : 1,
		"file9"    : "/open/wind-rain/obj/sun_red_cloth",
		"file3"    : "/open/dancer/obj/yuaboots",
		"amount4"  : 1,
		"amount6"  : 20,
		"amount3"  : 1,
		"file7"    : "/open/mogi/castle/obj/sspill",
		"file5"    : "/open/main/obj/et_sword",
		"file6"    : "/open/mogi/castle/obj/ninepill",
		"amount7"  : 6,
	]) );
	set( "light_up", 1 );
	set( "build", 10187 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}

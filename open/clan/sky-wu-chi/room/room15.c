// Room : /open/clan/sky-wu-chi/room/room15.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG

�����������ϵ�С�ѣ�������������ǰ�����ֺ��������������
��֪Ϊ��Ҫ���ջ������Ǹ�˭�йأ������ſڵ����ӻ�������
һ̽�������������صķ��䣬��Ϊ����������ϲ���嶫�����ġ�
���ſڳ��˷��ں��񱱱߻���һ������ݣ��ѵ����������Ͽ�
����ݣ�û�뵽������Ҳ����ͽ�ܡ����������

LONG);
	set( "short", "�������ϵķ��䡿" );
	set( "owner", "sir" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room291",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "object", ([
		"amount8"  : 1,
		"amount4"  : 1929,
		"amount2"  : 1,
		"file3"    : "/open/killer/obj/s_pill",
		"file5"    : "/data/autoload/killer/ski_dream",
		"amount1"  : 1,
		"amount9"  : 1,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1113,
		"amount5"  : 1,
		"file9"    : "/open/snow/obj/sky_lin_stone",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"file4"    : "/open/killer/obj/bellstar",
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
	]) );
	set( "build", 10027 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}

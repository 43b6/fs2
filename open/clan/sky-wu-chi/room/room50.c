// Room : /open/clan/sky-wu-chi/room/room50.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
���߽���һƬˮ�����Խ��Խ��ȥ������ˮ�����ɫˮ��Ҳ��
���㷢���������㿴����ˮ������ɢ������ˮ��һ���ļ���������Խ
��Խ�࣬������ԥ����һ˲�䣬�����ˮ�����㼤��������㿪ʼ��
�㣬���ó�����������赵������ȴ����û����ˮ������ҪͣЪ����
�ӻ����������˹������㷢����������Ͻ���������ݡ�ֻ����
����ľ��ܹ��������Σ����?

LONG);
	set( "short", "��ɫˮ�����" );
	set( "object", ([
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/obj/npc/obj/golden_armor",
		"file7"    : "/open/killer/obj/s_pill",
		"amount7"  : 63,
		"amount6"  : 1,
	]) );
	set( "build", 12029 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"out"       : "/open/clan/sky-wu-chi/room/room22",
		"west"      : "/open/clan/sky-wu-chi/room/room123",
		"north"     : "/open/clan/sky-wu-chi/room/room76.c",
		"east"      : "/open/clan/sky-wu-chi/room/room75.c",
		"south"     : "/open/clan/sky-wu-chi/room/room149.c",
]) );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "item_desc", ([ /* sizeof() == 1 */
  "stone" : "",
]) );
	setup();

	}

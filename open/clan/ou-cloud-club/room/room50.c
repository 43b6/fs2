// Room : /open/clan/ou-cloud-club/room/room50.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$炼金研究栋$NOR$" );
	set( "build", 10018 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room51.c",
  "west" : "/open/clan/ou-cloud-club/room/room48",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
狭长的华丽走廊,因为这里研究的是中世纪的冶金技术,
所以随处可见各种金碧辉煌的艺术极品,甚至连地板都是镀上
一层金之后,再铺上一张张炫丽名贵的波斯地毯,桌上摆设的,
是银制餐具以及闪烁着五彩亮光的烛台,世界上除了皇宫之外
,大概再也找不到如此漂亮尊贵的的地方了.
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}

// Room : /open/clan/ou-cloud-club/room/room6.c
 inherit "/open/clan/claneqshop.c";

void create()
{
        seteuid(getuid());
	set( "long", @LONG
这里是山庄的eq房，墙壁上挂满了许多武器跟防具，仔细一瞧
，啊!!这不是任正晴的$HIY$狂龙翔天破$NOR$，刘全书的$HIC$金钢指环$NOR$，郑士欣的
$HIR$连阳剑$NOR$，段云的$HIC$飘云扇$NOR$．．．等人的傲世兵器，天ㄚ！竟然连焚天
魔王的$HIR$极火装备$NOR$、独孤嵊的$HIB$魔龙装备$NOR$都有！原来这里是让帮众们在
外面打来的战利品存放的地方，除了炫耀本庄的威名外，一方面也
为了让新进帮众有好的武器可为本帮效力。
(想知道使用方法请look eq room)

LONG);
	set( "objects", ([ /* sizeof() == 1 */
  "/open/clan/ou-cloud-club/npc/npc4" : 1,
]) );
	set( "short", "$HIY$傲$NOR$武$HIC$云$NOR$防$HIR$地$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/mogi/dragon/obj/dragon-head",
		"amount2"  : 1,
		"file2"    : "/open/mogi/dragon/obj/dragon-head",
	]) );
	set( "build", 11279 );
	set( "cmkroom", 1 );
	set( "clan_room", "傲云山庄" );
	set( "have_reborn", 1 );
	set( "no_clean_up", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "eq room" : "  在此eq室，你可以用 list 武器种类 来知道有什么你想要的武器，
用 list 防具种类 来知道有什么你想要的护具，
用 list another  来知道有什么你想要的杂物，
用 take + 物品名   来取得你想要的物品，
用 put  + 物品名   来存放你不要的物品 .
",
]) );
	set( "exits", ([ /* sizeof() == 1 */
  "west" : "/open/clan/ou-cloud-club/room/hall",
]) );
	set( "no_transmit", 1 );
	set( "eqroom", 1 );
	set( "light_up", 1 );
	setup();

	}

// Room : /open/clan/ou-cloud-club/room/room6.c
 inherit "/open/clan/claneqshop.c";

void create()
{
        seteuid(getuid());
	set( "long", @LONG
������ɽׯ��eq����ǽ���Ϲ�����������������ߣ���ϸһ��
����!!�ⲻ���������$HIY$����������$NOR$����ȫ���$HIC$���ָ��$NOR$��֣ʿ����
$HIR$������$NOR$�����Ƶ�$HIC$Ʈ����$NOR$���������˵İ�����������ڣ���Ȼ������
ħ����$HIR$����װ��$NOR$�������ӵ�$HIB$ħ��װ��$NOR$���У�ԭ���������ð�������
���������ս��Ʒ��ŵĵط���������ҫ��ׯ�������⣬һ����Ҳ
Ϊ�����½������кõ�������Ϊ����Ч����
(��֪��ʹ�÷�����look eq room)

LONG);
	set( "objects", ([ /* sizeof() == 1 */
  "/open/clan/ou-cloud-club/npc/npc4" : 1,
]) );
	set( "short", "$HIY$��$NOR$��$HIC$��$NOR$��$HIR$��$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/mogi/dragon/obj/dragon-head",
		"amount2"  : 1,
		"file2"    : "/open/mogi/dragon/obj/dragon-head",
	]) );
	set( "build", 11279 );
	set( "cmkroom", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "have_reborn", 1 );
	set( "no_clean_up", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "eq room" : "  �ڴ�eq�ң�������� list �������� ��֪����ʲô����Ҫ��������
�� list �������� ��֪����ʲô����Ҫ�Ļ��ߣ�
�� list another  ��֪����ʲô����Ҫ�����
�� take + ��Ʒ��   ��ȡ������Ҫ����Ʒ��
�� put  + ��Ʒ��   ������㲻Ҫ����Ʒ .
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

inherit ROOM;
void create() {
	set( "short", "$HIB$�����$NOR$" );
	set( "owner", "bbsboss" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/common/obj/liz_meat",
		"file2"    : "/obj/gift/xiandan",
		"file3"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount1"  : 1,
		"file7"    : "/open/common/obj/liz_meat",
		"amount5"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/common/obj/liz_meat",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file1"    : "/obj/gift/xiandan",
		"file6"    : "/open/common/obj/liz_meat",
	]) );
	set( "light_up", 1 );
	set( "build", 10089 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room186",
		"west"      : "/open/clan/ou-cloud-club/room/room169.c",
	]) );
	set( "long", @LONG
    $HIR$��˵�йŴ��������ϻ������Ƴɣ���ǿ��ķ�����$NOR$


$WHT$�˻��񶷼���(unarmed)          ����ЧӦ�� 3$NOR$
$WHT$����ж��֮��(parry)            ����ЧӦ�� 4$NOR$


��Ϊ����ɽկ�Ķ�կ��...���ŵ���������
��ô���������.....ԭ��ǰЩ�������ŵ���...
��С����Ϊ....
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "$YEL$�ƽ����ڣ$NOR$" );
	set( "owner", "bbsboss" );
	set( "light_up", 1 );
	set( "object", ([
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"file3"    : "/open/mogi/dragon/obj/key",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
		"amount8"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
	]) );
	set( "build", 10047 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room190",
		"west"      : "/open/clan/ou-cloud-club/room/room188.c",
	]) );
	set( "long", @LONG

     $HIY$�ƽ�������ϵ���Ƭ ,���������ħ��$NOR$


����ħ���ػ����޻ƽ�������ϵ���Ƭ...
��˵�������ħ��...�ɽ���˲�䴫�͵�ħ��..

С��ð��ǰ���ƽ������....����ɨ��һ��.....
�˴����Ǵӻƽ��������ȡ�ص���Ƭ....
��ǰһ��....С��Ҳմմ��ϲ�İ�����ս��Ʒ^_^
LONG);
	setup();
	replace_program(ROOM);
}

inherit ROOM;
void create() {
	set( "short", "�λø�" );
	set( "light_up", 1 );
	set( "build", 60 );
	set( "object", ([
		"amount6"  : 1,
		"file8"    : "/open/dancer/obj/maple_ribbon",
		"file5"    : "/open/prayer/obj/boris-hands",
		"amount4"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/prayer/obj/boris-hat",
		"file3"    : "/open/prayer/obj/boris-cloth",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"file7"    : "/open/dancer/obj/yuaboots",
	]) );
	set( "owner", "ads" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room164",
	]) );
	set( "long", @LONG

                  [33m�λø� [0m     

      ������ҹ��С���Ĵ��[0;1;36m��[1mm[0;33m�λø�[0;1;36m��[1mn[0m��������[31m��ħ[0m
  ������ƽ��ѧϰ�赸�������ĵط�������������������
  �����Ľ����ټ����������������赸�����ǻ�������Ϊ
  ���þ���

LONG);
	setup();
	replace_program(ROOM);
}

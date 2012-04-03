inherit ROOM;
void create() {
	set( "short", "$HIR$��$HIC$��$NOR$֮$HIY$��$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"amount2"  : 4,
		"amount3"  : 1,
		"file5"    : "/open/quests/snake/npc/obj/snake_gem",
		"amount5"  : 1,
		"file1"    : "/open/mogi/castle/obj/leave",
		"amount4"  : 1,
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"file6"    : "/open/gsword/obj/dragon-sword",
		"file3"    : "/open/scholar/obj/icefan",
	]) );
	set( "build", 10022 );
	set( "light_up", 1 );
	set( "owner", "left" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room18",
	]) );
	set( "long", @LONG

                                      [14m�}�|�{�z�y[0m
                                      [14m    �� [0m
                                      [16m  ������[0m
 [19m ��������������������������������������[0m/�X�[��[16m�h�h�h�h�h�h�h�r��[0m
 [19m ��������������������������������������[0m�^�a/��[16m�k�k�k�k�k�k�k�s��
                                        [16m������[0m        
                                        [14m  �� [0m
                                     [14m �y�z�{�|�} [0m

����[21m�桡�ġ��桡�⡡�桡������
��������������������������������
��������������������������������[0m��
������������������������������������[20m�����ġ������⡡�����롡��[0m��
LONG);
	setup();
	replace_program(ROOM);
}

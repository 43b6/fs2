inherit ROOM;
void create() {
	set( "short", "$CYN$����$NOR$��$MAG$��$YEL$��$HIW$��$NOR$" );
	set( "light_up", 1 );
	set( "owner", "welo" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room115",
	]) );
	set( "long", @LONG
����$HIW$����$CYN$����$NOR$�ĸ���ר��$MAG$��$YEL$��$HIW$��$NOR$��$CYN$����$NOR$ƽ��������
�о�������ѧ�İ���������µ�$YEL$�����ھ�$NOR$��$CYN$�ڹ��ķ�$NOR$
�����ɵ�$RED$����$MAG$����$NOR$���Լ�һЩ����Ϊ֮��̾��$RED$���⹥��$NOR$
����Ҫ��ᣬ$CYN$����$NOR$��������ҪתͶ���ɣ�ֻ�������ö�
�Ӵ��������������Լ�����ľ����������а����ġ�$MAG$��
$YEL$��$HIW$��$NOR$��������һ��$HIW$������$NOR$�������Ϸ������ҵ�$CYN$ֽ��$NOR$����
����һ��ֽ�ϵ����ݣ���Ȼȫ��$CYN$����$NOR$�ƽ�����������$RED$��
$RED$��$NOR$���Ҹ�����Ӧ�ð���Щ$CYN$����$NOR$���߽��������$MAG$��Ѫ�ᾧ$NOR$
͵͵��дһ�������Ŷԡ�
LONG);
	setup();
	replace_program(ROOM);
}

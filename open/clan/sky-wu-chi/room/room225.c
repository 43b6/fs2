inherit ROOM;
void create() {
	set( "short", "$HIW$������$NOR$" );
	set( "owner", "timekiller" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room242",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�˵�Ϊ$HIW$����è$NOR$ר����������������ס�ų�ǿ�Ĺ��﹩��������
ͻȻ֮�䣬��ǰ�����˴�˵�л����ý���İ׹����������������Ϊ�׶�
ֻҪ�ҳ���������ǰ���ˣ�����ɱ���⣬������ӵ��$HIR$è����$HIW$������$NOR$��
����û����ͷ����֮�ˣ���������˵ء���������

LONG);
	setup();
	replace_program(ROOM);
}

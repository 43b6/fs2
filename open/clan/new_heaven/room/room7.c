inherit ROOM;
void create(){
	set( "owner", "xing" );
    set( "short", "$HIY$����С��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/new_heaven/room/room4",
        "enter"     : "/open/clan/new_heaven/room/room8",
	]) );
	set( "long", @LONG
�峺��Ϫˮ, ïʢ������, ������ǰ�Ц�쳾����ס������С��, 
�Դ����õ�֮��, �͵��������þ�ס, �����ñ������������Ͻ�������
�˵���, ƽ��������������и���������, ��ʱҲ���·�, ������Ҫ
��������, ն����ħ
LONG);
	setup();
	replace_program(ROOM);
}

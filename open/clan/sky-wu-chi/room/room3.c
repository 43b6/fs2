// Room : /open/clan/sky-wu-chi/room/room3.c
 inherit "/open/clan/claneqshop.c";

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
����ɽׯ�������庮���䣬ʵ����ȴ��һ�����ﻨ��ı���
û���Ƕ������������ı���һ��Ķ�����ܰ�����ﲻ��û���Ǵ�
�ǵĺ��磬Ҳû���Ŷ��ķ�������ֻ�Ǻ�����������£����Ŵ�
��ϲ�õĻ�Ц�����Լ���������ů�������£���ͬ�����Ĵ��ͥ
���ԡ�
LONG);
	set( "short", "$HIC$��ȪѨ$NOR$" );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "build", 22 );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "no_clean_up", 1 );
	set( "item_desc", ([ /* sizeof() == 2 */
  "ll" : "",
  "sign" : "��������������:    put  XXXXX
��������������:    take XXXXX


�˴��÷Ż�δ���...���Ҽ������100��ROOM^^
",
]) );
	set( "eqroom", 1 );
	setup();

	}

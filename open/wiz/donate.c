#include <ansi.h>

inherit ROOM;

void create()
{
	set( "short", "��"HIB"����ʯ��"NOR"��" );
	set( "long", HIW"
��ʽ"NOR"["HIY"1"NOR"]"HIC"

	ATM ת�� 700 0281094 0134853

"HIW"��ʽ"NOR"["HIY"2"NOR"]"HIC"

	�ʾֻ����ʺ� [֣��Ԫ] 19605741
	���ڻ�����ͨѶ����д����� ID

"HIG"����������ط���

	help ftp
\n"NOR );
	set( "no_fight", 1 );
	set( "exits", ([
        "up"   : "/open/trans/room/room4",
		"east" : "/open/wiz/donate_4",
		"west" : "/open/wiz/donate_3",
	]) );

	setup();

	call_other( "/obj/board/donate_b.c", "???" );
}

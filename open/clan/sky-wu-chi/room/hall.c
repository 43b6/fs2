// Room : /open/clan/sky-wu-chi/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
        set( "cmkroom", 1 );
        set( "exits", ([ /* sizeof() == 7 */
		"east"      : "/open/clan/sky-wu-chi/room/room6.c",
		"up"        : "/open/clan/sky-wu-chi/room/room5.c",
		"down"      : "/open/clan/sky-wu-chi/room/room3.c",
		"west"      : "/open/clan/sky-wu-chi/room/room4.c",
		"south"     : "/open/clan/sky-wu-chi/room/room177.c",
		"room"      : "/open/clan/sky-wu-chi/room/room17.c",
]) );
        set( "no_clean_up", 0 );
        set( "short", "$HIC$��$HIY$�켫��$HIC$��$NOR$" ); 
	set( "build", 579 );
        set("long",@LONG
�����Ǳ���Ĵ�����Ҳ�Ǹ���Ӣ�ۺú��ڴ˾ۼ����ᣬ���֮��
��һ̤��������ɼ�������Ʒ����Ծ�Ȼ��������������ഫ����
��������ƣ������ϵ���ԫ��ʮ�����ޣ��������µ���ת�жȣ���һ
����������ϣ��ʶ�������ų��档�ڴ��������ǽ�ϣ�����һ�Ѿ�
����������ħ���������ǡ�������ʦ��������Ͱ���������ڴ�
��������ǽ�ϣ������������������ǡ�������Կ�����������ǡ�
��̫���Կ��޼������ǰ����������ڵĻ�Ҳ�ǰ���������޼�������
�����ɴ˿�֪������ѧ��֪ʶ֮������ˡ��ڴ����ҷ���ʯ���ϣ�
���ˡ����·��ơ��ĸ����֣�Ϊ������ʹ�������ܸ�����������׳��
�������Ӣ�ۺ��ܶ�����ԣ�����ָ�̡�(look board)

LONG);
        setup();                                             
        call_other( "/obj/board/sky-wu-chi_b", "???" );
        }


inherit ROOM;

void create()
{
        seteuid(getuid());
        set( "short", "������ʯ����" );
        set( "cmkroom", 1 );
        set( "exits", ([ /* sizeof() == 2 */
  "west" : "/open/clan/orient/room/room34.c",
  "east" : "/open/clan/orient/room/room29.c",
]) );
        set( "clan_room", "���꽭��" );
        set( "light_up", 1 );
        set( "no_transmit", 1 );
        set( "outdoor", "/open/clan" );
        set( "long", "��ʯ���̳ɵĽֵ����������ӹ�ȥ�������ʱʱƮ����ӯ��ɻ���ϸϸ
��˿��մ��·�����������̦�̣����������˼����٣�����������ˮ���๬
�̣����������������������У�֦ͷݺ�ഩ����ౣ���ο����֮�顣
" );
        set( "no_clean_up", 0 );
        setup();
        replace_program(ROOM);
        }

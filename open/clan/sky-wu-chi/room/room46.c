// Room : /open/clan/sky-wu-chi/room/room46.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
Ļǰ�ľ�������޼��������ĵ��켫�������
����޼�֮���������ĺ�������ɵĵط�����û����
����װ��Ʒ��Ҳû�����ɵ�����ʫ����ȴ�����ޱȵ�
�߹�У�ֻ�ظо��������İ��ڣ��Խ��ǵ�����Ϊ
�������ӵĵط���
LONG);
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/sky-wu-chi/room/room158.c",
		"sir"       : "/open/clan/sky-wu-chi/room/room289",
		"west"      : "/open/clan/sky-wu-chi/room/room154.c",
]) );
	set( "short", "��ǰ���" );
	set( "cmkroom", 1 );
	setup();

	}











































































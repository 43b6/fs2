inherit ROOM;
#include <ansi.h>

void create ()
{
	set( "short", HIW"��"HIY"RESTORE"HIW"����"HIC"����㳡"HIW"��"NOR );
	set( "long", @LONG
	
	   ������ñ� bug ���������ߵĵط�, ��ע�����й���:

	1. һ��Ҫpost����, ����������
	2. �� restore ����, wiz ��Ȩ�޸�
	3. ��Ǯ��ʧ����, ��������
	4. post ��, �뾲�� wiz ����, ������ post �߸�,
	   Ҳ�ɵ� wiz ������ʱ�ٴ���
	5. ��ƭ��ʦ RESTORE ��, ɱ����(purge)

LONG);     
        set("light_up",1);
	set("exits", ([ /* sizeof() == 1 */
		"west" : "/open/common/room/inn",
	]));
	setup();
	call_other( "/obj/board/restore_b", "???" );
}



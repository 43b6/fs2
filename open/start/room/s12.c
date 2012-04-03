// Room: /open/start/room/s12.c

#include <../start.h>

inherit ROOM;

void create ()
{
	set ("short", "����");
	set ("long", @LONG
���������ƴ�峤��ס�ݣ����ڲ�������������˸��ŵ�
�����ǵ��������Ҫ����ֻ���������
    �����Ǽ䷿�����ר�����˽����õģ�������������ʱ
��Ϣһ�£���������ʴ峤��
    ����峤Ҳ����С�������⡣

LONG );

	set("exits", ([ /* sizeof() == 2 */
	"west" : __DIR__"s13",
	"south" : __DIR__"s11",
	]));

	set("objects", ([ /* sizeof() == 1 */
	S_NPC"sheik" : 1,
   "/open/start/npc/test" : 1,
	]));

	set("light_up", 1);

	setup();
}

int valid_leave(object who, string dir)
{
	if( dir=="west" && !who->query_temp("sleep") )
		return notify_fail("�㻹û�ʹ��峤�أ�\n");
	return ::valid_leave(who, dir);
}

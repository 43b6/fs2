//������
// by airke

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "ͥ԰");
	set("long", @LONG
һ��װ����ŵ�ͥԺ�������Ľ��Ķ�������
��ɽ������ľ���ɣ������д��ż������ء���ͥ
԰�������˸�ʽ�������滨��ݣ����ܲ�ʱ��Ʈ
ɢ�ŵ����Ļ��㡣

LONG
	);
	
	set("exits", ([ /* sizeof() == 3 */
	"west" : __DIR__"g1",
]));
	set("objects",([
	"/open/tendo/obj/tree" : 1,
	]));
	set("outdoors", "1");

	setup();
}


